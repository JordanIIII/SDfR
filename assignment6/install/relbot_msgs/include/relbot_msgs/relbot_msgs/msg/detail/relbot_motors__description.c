// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#include "relbot_msgs/msg/detail/relbot_motors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
const rosidl_type_hash_t *
relbot_msgs__msg__RelbotMotors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x3a, 0xcb, 0xca, 0x89, 0x08, 0x27, 0x70,
      0xf1, 0x49, 0x83, 0xb9, 0x5d, 0xae, 0xf8, 0x4c,
      0x40, 0x82, 0xdc, 0x21, 0xd8, 0x51, 0x04, 0xf9,
      0xc5, 0xce, 0xaf, 0x55, 0xc8, 0x51, 0xad, 0x35,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char relbot_msgs__msg__RelbotMotors__TYPE_NAME[] = "relbot_msgs/msg/RelbotMotors";

// Define type names, field names, and default values
static char relbot_msgs__msg__RelbotMotors__FIELD_NAME__left_wheel_vel[] = "left_wheel_vel";
static char relbot_msgs__msg__RelbotMotors__FIELD_NAME__right_wheel_vel[] = "right_wheel_vel";

static rosidl_runtime_c__type_description__Field relbot_msgs__msg__RelbotMotors__FIELDS[] = {
  {
    {relbot_msgs__msg__RelbotMotors__FIELD_NAME__left_wheel_vel, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {relbot_msgs__msg__RelbotMotors__FIELD_NAME__right_wheel_vel, 15, 15},
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
relbot_msgs__msg__RelbotMotors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {relbot_msgs__msg__RelbotMotors__TYPE_NAME, 28, 28},
      {relbot_msgs__msg__RelbotMotors__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Unified motor velocities, rather than two possible out of sync topics\n"
  "float64 left_wheel_vel\n"
  "float64 right_wheel_vel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
relbot_msgs__msg__RelbotMotors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {relbot_msgs__msg__RelbotMotors__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
relbot_msgs__msg__RelbotMotors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *relbot_msgs__msg__RelbotMotors__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
