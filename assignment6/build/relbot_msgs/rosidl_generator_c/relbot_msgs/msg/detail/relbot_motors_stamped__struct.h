// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from relbot_msgs:msg/RelbotMotorsStamped.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__STRUCT_H_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'motor_cmd'
#include "relbot_msgs/msg/detail/relbot_motors__struct.h"

/// Struct defined in msg/RelbotMotorsStamped in the package relbot_msgs.
/**
  * Stamped Motor command
 */
typedef struct relbot_msgs__msg__RelbotMotorsStamped
{
  std_msgs__msg__Header header;
  relbot_msgs__msg__RelbotMotors motor_cmd;
} relbot_msgs__msg__RelbotMotorsStamped;

// Struct for a sequence of relbot_msgs__msg__RelbotMotorsStamped.
typedef struct relbot_msgs__msg__RelbotMotorsStamped__Sequence
{
  relbot_msgs__msg__RelbotMotorsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} relbot_msgs__msg__RelbotMotorsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__STRUCT_H_
