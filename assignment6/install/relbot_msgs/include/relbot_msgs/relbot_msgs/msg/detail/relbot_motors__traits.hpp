// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__TRAITS_HPP_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "relbot_msgs/msg/detail/relbot_motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace relbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RelbotMotors & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_wheel_vel
  {
    out << "left_wheel_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_vel, out);
    out << ", ";
  }

  // member: right_wheel_vel
  {
    out << "right_wheel_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelbotMotors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_wheel_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wheel_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wheel_vel, out);
    out << "\n";
  }

  // member: right_wheel_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wheel_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wheel_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelbotMotors & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace relbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use relbot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const relbot_msgs::msg::RelbotMotors & msg,
  std::ostream & out, size_t indentation = 0)
{
  relbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use relbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const relbot_msgs::msg::RelbotMotors & msg)
{
  return relbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<relbot_msgs::msg::RelbotMotors>()
{
  return "relbot_msgs::msg::RelbotMotors";
}

template<>
inline const char * name<relbot_msgs::msg::RelbotMotors>()
{
  return "relbot_msgs/msg/RelbotMotors";
}

template<>
struct has_fixed_size<relbot_msgs::msg::RelbotMotors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<relbot_msgs::msg::RelbotMotors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<relbot_msgs::msg::RelbotMotors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__TRAITS_HPP_
