// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from relbot_msgs:msg/RelbotMotorsStamped.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__TRAITS_HPP_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "relbot_msgs/msg/detail/relbot_motors_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'motor_cmd'
#include "relbot_msgs/msg/detail/relbot_motors__traits.hpp"

namespace relbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RelbotMotorsStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motor_cmd
  {
    out << "motor_cmd: ";
    to_flow_style_yaml(msg.motor_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelbotMotorsStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: motor_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_cmd:\n";
    to_block_style_yaml(msg.motor_cmd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelbotMotorsStamped & msg, bool use_flow_style = false)
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
  const relbot_msgs::msg::RelbotMotorsStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  relbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use relbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const relbot_msgs::msg::RelbotMotorsStamped & msg)
{
  return relbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<relbot_msgs::msg::RelbotMotorsStamped>()
{
  return "relbot_msgs::msg::RelbotMotorsStamped";
}

template<>
inline const char * name<relbot_msgs::msg::RelbotMotorsStamped>()
{
  return "relbot_msgs/msg/RelbotMotorsStamped";
}

template<>
struct has_fixed_size<relbot_msgs::msg::RelbotMotorsStamped>
  : std::integral_constant<bool, has_fixed_size<relbot_msgs::msg::RelbotMotors>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<relbot_msgs::msg::RelbotMotorsStamped>
  : std::integral_constant<bool, has_bounded_size<relbot_msgs::msg::RelbotMotors>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<relbot_msgs::msg::RelbotMotorsStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__TRAITS_HPP_
