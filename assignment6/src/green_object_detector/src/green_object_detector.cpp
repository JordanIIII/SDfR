#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <cv_bridge/cv_bridge.h>

class GreenObjectDetector : public rclcpp::Node
{
public:
  GreenObjectDetector() : Node("green_object_detector")
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
        "image", 10, std::bind(&GreenObjectDetector::image_callback, this, std::placeholders::_1));

    // TODO: Add a publisher here later for the detected green-object coordinates.
    // Suggested output type for later: geometry_msgs::msg::PointStamped.
  }
private:
  auto image_callback(const sensor_msgs::msg::Image::SharedPtr msg) -> void
  {
    cv::Mat image = cv_bridge::toCvCopy(msg, "bgr8")->image;
    
    cv::Mat hsv_image;
    cv::Mat green_mask;

    cv::cvtColor(image, hsv_image, cv::COLOR_BGR2HSV);

    cv::inRange(
      hsv_image,
      cv::Scalar(35, 100, 100),
      cv::Scalar(85, 255, 255),
      green_mask
    );

    cv::Moments m = cv::moments(green_mask, true);
    if (m.m00 > 0) {
      int cx = static_cast<int>(m.m10 / m.m00);
      int cy = static_cast<int>(m.m01 / m.m00);

      // TODO: Publish cx/cy here once you add the detector output publisher.
      RCLCPP_INFO(this->get_logger(), "Green object detected at: (%d, %d)", cx, cy);
    }
    else {
      RCLCPP_INFO(this->get_logger(), "No green object detected.");
    }
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
  // TODO: Add a publisher member for the detected target coordinates here.
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GreenObjectDetector>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
