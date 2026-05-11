// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xrf2_msgs:msg/Xeno2Ros.idl
// generated code does not contain a copyright notice

#include "xrf2_msgs/msg/detail/xeno2_ros__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xrf2_msgs
const rosidl_type_hash_t *
xrf2_msgs__msg__Xeno2Ros__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x1c, 0x60, 0xd7, 0x50, 0xd9, 0x80, 0xb8,
      0x3c, 0xe1, 0xda, 0x87, 0x12, 0xee, 0x8c, 0xf5,
      0xf7, 0x42, 0xb6, 0x06, 0xaf, 0x2a, 0xfa, 0x45,
      0x6d, 0x12, 0x14, 0xd5, 0xb9, 0x79, 0x57, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char xrf2_msgs__msg__Xeno2Ros__TYPE_NAME[] = "xrf2_msgs/msg/Xeno2Ros";

// Define type names, field names, and default values
static char xrf2_msgs__msg__Xeno2Ros__FIELD_NAME__example_c[] = "example_c";
static char xrf2_msgs__msg__Xeno2Ros__FIELD_NAME__example_d[] = "example_d";

static rosidl_runtime_c__type_description__Field xrf2_msgs__msg__Xeno2Ros__FIELDS[] = {
  {
    {xrf2_msgs__msg__Xeno2Ros__FIELD_NAME__example_c, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xrf2_msgs__msg__Xeno2Ros__FIELD_NAME__example_d, 9, 9},
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
xrf2_msgs__msg__Xeno2Ros__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xrf2_msgs__msg__Xeno2Ros__TYPE_NAME, 22, 22},
      {xrf2_msgs__msg__Xeno2Ros__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 example_c\n"
  "float64 example_d";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xrf2_msgs__msg__Xeno2Ros__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xrf2_msgs__msg__Xeno2Ros__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xrf2_msgs__msg__Xeno2Ros__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xrf2_msgs__msg__Xeno2Ros__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
