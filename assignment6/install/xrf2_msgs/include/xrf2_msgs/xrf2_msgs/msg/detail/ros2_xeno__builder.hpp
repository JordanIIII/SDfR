// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xrf2_msgs:msg/Ros2Xeno.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xrf2_msgs/msg/ros2_xeno.hpp"


#ifndef XRF2_MSGS__MSG__DETAIL__ROS2_XENO__BUILDER_HPP_
#define XRF2_MSGS__MSG__DETAIL__ROS2_XENO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xrf2_msgs/msg/detail/ros2_xeno__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xrf2_msgs
{

namespace msg
{

namespace builder
{

class Init_Ros2Xeno_right_wheel_vel
{
public:
  explicit Init_Ros2Xeno_right_wheel_vel(::xrf2_msgs::msg::Ros2Xeno & msg)
  : msg_(msg)
  {}
  ::xrf2_msgs::msg::Ros2Xeno right_wheel_vel(::xrf2_msgs::msg::Ros2Xeno::_right_wheel_vel_type arg)
  {
    msg_.right_wheel_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xrf2_msgs::msg::Ros2Xeno msg_;
};

class Init_Ros2Xeno_left_wheel_vel
{
public:
  Init_Ros2Xeno_left_wheel_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ros2Xeno_right_wheel_vel left_wheel_vel(::xrf2_msgs::msg::Ros2Xeno::_left_wheel_vel_type arg)
  {
    msg_.left_wheel_vel = std::move(arg);
    return Init_Ros2Xeno_right_wheel_vel(msg_);
  }

private:
  ::xrf2_msgs::msg::Ros2Xeno msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xrf2_msgs::msg::Ros2Xeno>()
{
  return xrf2_msgs::msg::builder::Init_Ros2Xeno_left_wheel_vel();
}

}  // namespace xrf2_msgs

#endif  // XRF2_MSGS__MSG__DETAIL__ROS2_XENO__BUILDER_HPP_
