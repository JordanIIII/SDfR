// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xrf2_msgs:msg/Ros2Xeno.idl
// generated code does not contain a copyright notice

#include "xrf2_msgs/msg/detail/ros2_xeno__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xrf2_msgs
const rosidl_type_hash_t *
xrf2_msgs__msg__Ros2Xeno__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xb8, 0x1e, 0x0b, 0x82, 0x80, 0xcf, 0x33,
      0x32, 0xa3, 0x7a, 0x19, 0xa3, 0x15, 0x7e, 0x2c,
      0xa3, 0x3d, 0x59, 0xa4, 0x19, 0xe2, 0xac, 0xcf,
      0xf8, 0x3e, 0xe7, 0x8f, 0x26, 0x2a, 0x81, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char xrf2_msgs__msg__Ros2Xeno__TYPE_NAME[] = "xrf2_msgs/msg/Ros2Xeno";

// Define type names, field names, and default values
static char xrf2_msgs__msg__Ros2Xeno__FIELD_NAME__left_wheel_vel[] = "left_wheel_vel";
static char xrf2_msgs__msg__Ros2Xeno__FIELD_NAME__right_wheel_vel[] = "right_wheel_vel";

static rosidl_runtime_c__type_description__Field xrf2_msgs__msg__Ros2Xeno__FIELDS[] = {
  {
    {xrf2_msgs__msg__Ros2Xeno__FIELD_NAME__left_wheel_vel, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xrf2_msgs__msg__Ros2Xeno__FIELD_NAME__right_wheel_vel, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xrf2_msgs__msg__Ros2Xeno__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xrf2_msgs__msg__Ros2Xeno__TYPE_NAME, 22, 22},
      {xrf2_msgs__msg__Ros2Xeno__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 left_wheel_vel\n"
  "float64 right_wheel_vel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xrf2_msgs__msg__Ros2Xeno__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xrf2_msgs__msg__Ros2Xeno__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xrf2_msgs__msg__Ros2Xeno__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xrf2_msgs__msg__Ros2Xeno__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
