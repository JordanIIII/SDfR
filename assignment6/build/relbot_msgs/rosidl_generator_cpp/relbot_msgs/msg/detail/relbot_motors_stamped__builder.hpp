// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from relbot_msgs:msg/RelbotMotorsStamped.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__BUILDER_HPP_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "relbot_msgs/msg/detail/relbot_motors_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace relbot_msgs
{

namespace msg
{

namespace builder
{

class Init_RelbotMotorsStamped_motor_cmd
{
public:
  explicit Init_RelbotMotorsStamped_motor_cmd(::relbot_msgs::msg::RelbotMotorsStamped & msg)
  : msg_(msg)
  {}
  ::relbot_msgs::msg::RelbotMotorsStamped motor_cmd(::relbot_msgs::msg::RelbotMotorsStamped::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::relbot_msgs::msg::RelbotMotorsStamped msg_;
};

class Init_RelbotMotorsStamped_header
{
public:
  Init_RelbotMotorsStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelbotMotorsStamped_motor_cmd header(::relbot_msgs::msg::RelbotMotorsStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelbotMotorsStamped_motor_cmd(msg_);
  }

private:
  ::relbot_msgs::msg::RelbotMotorsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::relbot_msgs::msg::RelbotMotorsStamped>()
{
  return relbot_msgs::msg::builder::Init_RelbotMotorsStamped_header();
}

}  // namespace relbot_msgs

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__BUILDER_HPP_
