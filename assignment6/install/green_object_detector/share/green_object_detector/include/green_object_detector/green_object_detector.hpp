#ifndef GREEN_OBJECT_DETECTOR__GREEN_OBJECT_DETECTOR_HPP_
#define GREEN_OBJECT_DETECTOR__GREEN_OBJECT_DETECTOR_HPP_

#include <memory>
#include <string>

#include "geometry_msgs/msg/point_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

namespace green_object_detector
{

class GreenObjectDetector : public rclcpp::Node
{
public:
  GreenObjectDetector();

private:
  void imageCallback(const sensor_msgs::msg::Image::ConstSharedPtr msg);

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;
  rclcpp::Publisher<geometry_msgs::msg::PointStamped>::SharedPtr detection_pub_;

  std::string input_topic_;
  std::string output_topic_;
  int hue_min_;
  int hue_max_;
  int sat_min_;
  int sat_max_;
  int val_min_;
  int val_max_;
  int min_blob_area_;
  bool log_when_missing_;
};

}  // namespace green_object_detector

#endif  // GREEN_OBJECT_DETECTOR__GREEN_OBJECT_DETECTOR_HPP_
