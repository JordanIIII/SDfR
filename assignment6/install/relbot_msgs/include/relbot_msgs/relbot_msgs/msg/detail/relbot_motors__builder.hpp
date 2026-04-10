// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__BUILDER_HPP_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "relbot_msgs/msg/detail/relbot_motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace relbot_msgs
{

namespace msg
{

namespace builder
{

class Init_RelbotMotors_right_wheel_vel
{
public:
  explicit Init_RelbotMotors_right_wheel_vel(::relbot_msgs::msg::RelbotMotors & msg)
  : msg_(msg)
  {}
  ::relbot_msgs::msg::RelbotMotors right_wheel_vel(::relbot_msgs::msg::RelbotMotors::_right_wheel_vel_type arg)
  {
    msg_.right_wheel_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::relbot_msgs::msg::RelbotMotors msg_;
};

class Init_RelbotMotors_left_wheel_vel
{
public:
  Init_RelbotMotors_left_wheel_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelbotMotors_right_wheel_vel left_wheel_vel(::relbot_msgs::msg::RelbotMotors::_left_wheel_vel_type arg)
  {
    msg_.left_wheel_vel = std::move(arg);
    return Init_RelbotMotors_right_wheel_vel(msg_);
  }

private:
  ::relbot_msgs::msg::RelbotMotors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::relbot_msgs::msg::RelbotMotors>()
{
  return relbot_msgs::msg::builder::Init_RelbotMotors_left_wheel_vel();
}

}  // namespace relbot_msgs

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__BUILDER_HPP_
