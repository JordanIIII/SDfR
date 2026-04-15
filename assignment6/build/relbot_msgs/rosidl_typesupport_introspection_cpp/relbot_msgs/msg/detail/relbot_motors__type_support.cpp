// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "relbot_msgs/msg/detail/relbot_motors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace relbot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RelbotMotors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) relbot_msgs::msg::RelbotMotors(_init);
}

void RelbotMotors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<relbot_msgs::msg::RelbotMotors *>(message_memory);
  typed_message->~RelbotMotors();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RelbotMotors_message_member_array[2] = {
  {
    "left_wheel_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relbot_msgs::msg::RelbotMotors, left_wheel_vel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_wheel_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relbot_msgs::msg::RelbotMotors, right_wheel_vel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RelbotMotors_message_members = {
  "relbot_msgs::msg",  // message namespace
  "RelbotMotors",  // message name
  2,  // number of fields
  sizeof(relbot_msgs::msg::RelbotMotors),
  RelbotMotors_message_member_array,  // message members
  RelbotMotors_init_function,  // function to initialize message memory (memory has to be allocated)
  RelbotMotors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RelbotMotors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RelbotMotors_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace relbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<relbot_msgs::msg::RelbotMotors>()
{
  return &::relbot_msgs::msg::rosidl_typesupport_introspection_cpp::RelbotMotors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, relbot_msgs, msg, RelbotMotors)() {
  return &::relbot_msgs::msg::rosidl_typesupport_introspection_cpp::RelbotMotors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
