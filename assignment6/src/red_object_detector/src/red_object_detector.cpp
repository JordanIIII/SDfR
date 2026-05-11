#include <memory>

#include "geometry_msgs/msg/point_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <cv_bridge/cv_bridge.hpp>

class RedObjectDetector : public rclcpp::Node
{
public:
  RedObjectDetector() : Node("red_object_detector")
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
        "image", 10, std::bind(&RedObjectDetector::image_callback, this, std::placeholders::_1));

    target_publisher_ = this->create_publisher<geometry_msgs::msg::PointStamped>(
        "red_object_position", 10);
  }
private:
  auto image_callback(const sensor_msgs::msg::Image::SharedPtr msg) -> void
  {
    cv::Mat image = cv_bridge::toCvCopy(msg, "bgr8")->image;
    
    cv::Mat hsv_image;
    cv::Mat red_mask_low;
    cv::Mat red_mask_high;
    cv::Mat red_mask;

    cv::cvtColor(image, hsv_image, cv::COLOR_BGR2HSV);

    // Red wraps around the HSV hue boundary, so combine the low and high ranges.
    cv::inRange(
      hsv_image,
      cv::Scalar(0, 180, 100),
      cv::Scalar(10, 255, 255),
      red_mask_low
    );
    cv::inRange(
      hsv_image,
      cv::Scalar(170, 180, 100),
      cv::Scalar(180, 255, 255),
      red_mask_high
    );
    cv::bitwise_or(red_mask_low, red_mask_high, red_mask);

    // Count red pixels and express coverage as a percentage of the frame.
    int red_pixels = cv::countNonZero(red_mask);

    const double total_pixels = static_cast<double>(image.cols * image.rows);
    double red_coverage = 100.0 * static_cast<double>(red_pixels) / total_pixels;

    cv::Moments m = cv::moments(red_mask, true);
    if (m.m00 > 0) {
      int cx = static_cast<int>(m.m10 / m.m00);
      int cy = static_cast<int>(m.m01 / m.m00);

      geometry_msgs::msg::PointStamped target_msg;
      target_msg.header = msg->header;
      target_msg.point.x = cx;
      target_msg.point.y = cy;
      target_msg.point.z = red_coverage;

      target_publisher_->publish(target_msg);
      RCLCPP_INFO(this->get_logger(), "Red object detected at: (%d, %d)", cx, cy);
      RCLCPP_INFO(this->get_logger(), "Red coverage: %.3f", red_coverage);
    }
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
  rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr target_publisher_;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RedObjectDetector>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
