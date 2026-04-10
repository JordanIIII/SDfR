// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__STRUCT_H_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RelbotMotors in the package relbot_msgs.
/**
  * Unified motor velocities, rather than two possible out of sync topics
 */
typedef struct relbot_msgs__msg__RelbotMotors
{
  double left_wheel_vel;
  double right_wheel_vel;
} relbot_msgs__msg__RelbotMotors;

// Struct for a sequence of relbot_msgs__msg__RelbotMotors.
typedef struct relbot_msgs__msg__RelbotMotors__Sequence
{
  relbot_msgs__msg__RelbotMotors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} relbot_msgs__msg__RelbotMotors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__STRUCT_H_
