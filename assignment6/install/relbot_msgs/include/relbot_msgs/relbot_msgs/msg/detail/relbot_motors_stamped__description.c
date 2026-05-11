// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from relbot_msgs:msg/RelbotMotorsStamped.idl
// generated code does not contain a copyright notice

#include "relbot_msgs/msg/detail/relbot_motors_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
const rosidl_type_hash_t *
relbot_msgs__msg__RelbotMotorsStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x59, 0xbf, 0x15, 0x6e, 0x4d, 0x41, 0x27,
      0x1a, 0x17, 0xef, 0x13, 0xe3, 0x6c, 0x25, 0x68,
      0x4c, 0xa4, 0x7e, 0xf2, 0x8d, 0xbd, 0xfe, 0xce,
      0x2f, 0x44, 0xa7, 0xd8, 0x1a, 0x14, 0x01, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "relbot_msgs/msg/detail/relbot_motors__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t relbot_msgs__msg__RelbotMotors__EXPECTED_HASH = {1, {
    0xef, 0x3a, 0xcb, 0xca, 0x89, 0x08, 0x27, 0x70,
    0xf1, 0x49, 0x83, 0xb9, 0x5d, 0xae, 0xf8, 0x4c,
    0x40, 0x82, 0xdc, 0x21, 0xd8, 0x51, 0x04, 0xf9,
    0xc5, 0xce, 0xaf, 0x55, 0xc8, 0x51, 0xad, 0x35,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char relbot_msgs__msg__RelbotMotorsStamped__TYPE_NAME[] = "relbot_msgs/msg/RelbotMotorsStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char relbot_msgs__msg__RelbotMotors__TYPE_NAME[] = "relbot_msgs/msg/RelbotMotors";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char relbot_msgs__msg__RelbotMotorsStamped__FIELD_NAME__header[] = "header";
static char relbot_msgs__msg__RelbotMotorsStamped__FIELD_NAME__motor_cmd[] = "motor_cmd";

static rosidl_runtime_c__type_description__Field relbot_msgs__msg__RelbotMotorsStamped__FIELDS[] = {
  {
    {relbot_msgs__msg__RelbotMotorsStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {relbot_msgs__msg__RelbotMotorsStamped__FIELD_NAME__motor_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {relbot_msgs__msg__RelbotMotors__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription relbot_msgs__msg__RelbotMotorsStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {relbot_msgs__msg__RelbotMotors__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
relbot_msgs__msg__RelbotMotorsStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {relbot_msgs__msg__RelbotMotorsStamped__TYPE_NAME, 35, 35},
      {relbot_msgs__msg__RelbotMotorsStamped__FIELDS, 2, 2},
    },
    {relbot_msgs__msg__RelbotMotorsStamped__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&relbot_msgs__msg__RelbotMotors__EXPECTED_HASH, relbot_msgs__msg__RelbotMotors__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = relbot_msgs__msg__RelbotMotors__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Stamped Motor command\n"
  "std_msgs/Header header\n"
  "RelbotMotors motor_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
relbot_msgs__msg__RelbotMotorsStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {relbot_msgs__msg__RelbotMotorsStamped__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
relbot_msgs__msg__RelbotMotorsStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *relbot_msgs__msg__RelbotMotorsStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *relbot_msgs__msg__RelbotMotors__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
