#include <algorithm>
#include <memory>
#include <string>
#include <vector>

#include "geometry_msgs/msg/point_stamped.hpp"
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
    const auto image_topic = this->declare_parameter<std::string>(
        "image_topic", "/output/moving_camera");

    subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
        image_topic, 10, std::bind(&GreenObjectDetector::image_callback, this, std::placeholders::_1));

    target_publisher_ = this->create_publisher<geometry_msgs::msg::PointStamped>(
        "green_object_position", 10);

    RCLCPP_INFO(this->get_logger(), "Subscribing to image topic: %s", image_topic.c_str());
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

    // Reduce isolated noise so the controller tracks the dominant green region.
    cv::morphologyEx(
      green_mask, green_mask, cv::MORPH_OPEN,
      cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(5, 5))
    );
    cv::morphologyEx(
      green_mask, green_mask, cv::MORPH_CLOSE,
      cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(9, 9))
    );

    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(green_mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    if (contours.empty()) {
      return;
    }

    const auto largest_contour_it = std::max_element(
      contours.begin(), contours.end(),
      [](const auto & lhs, const auto & rhs) {
        return cv::contourArea(lhs) < cv::contourArea(rhs);
      });

    const double contour_area = cv::contourArea(*largest_contour_it);
    if (contour_area <= 0.0) {
      return;
    }

    cv::Moments m = cv::moments(*largest_contour_it, true);
    if (m.m00 > 0.0) {
      const double cx = m.m10 / m.m00;
      const double cy = m.m01 / m.m00;
      const double normalized_x = cx / static_cast<double>(image.cols);
      const double normalized_y = cy / static_cast<double>(image.rows);
      const double coverage = contour_area / static_cast<double>(image.cols * image.rows);

      geometry_msgs::msg::PointStamped target_msg;
      target_msg.header = msg->header;
      target_msg.point.x = normalized_x;
      target_msg.point.y = normalized_y;
      target_msg.point.z = coverage;

      target_publisher_->publish(target_msg);
      RCLCPP_INFO_THROTTLE(
        this->get_logger(), *this->get_clock(), 1000,
        "Green target detected at normalized position (%.3f, %.3f), coverage %.3f",
        normalized_x, normalized_y, coverage
      );
    }
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
  rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr target_publisher_;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GreenObjectDetector>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
