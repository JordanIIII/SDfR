// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from relbot_msgs:msg/RelbotMotorsStamped.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__STRUCT_HPP_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'motor_cmd'
#include "relbot_msgs/msg/detail/relbot_motors__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__relbot_msgs__msg__RelbotMotorsStamped __attribute__((deprecated))
#else
# define DEPRECATED__relbot_msgs__msg__RelbotMotorsStamped __declspec(deprecated)
#endif

namespace relbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelbotMotorsStamped_
{
  using Type = RelbotMotorsStamped_<ContainerAllocator>;

  explicit RelbotMotorsStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    motor_cmd(_init)
  {
    (void)_init;
  }

  explicit RelbotMotorsStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    motor_cmd(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor_cmd_type =
    relbot_msgs::msg::RelbotMotors_<ContainerAllocator>;
  _motor_cmd_type motor_cmd;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor_cmd(
    const relbot_msgs::msg::RelbotMotors_<ContainerAllocator> & _arg)
  {
    this->motor_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__relbot_msgs__msg__RelbotMotorsStamped
    std::shared_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__relbot_msgs__msg__RelbotMotorsStamped
    std::shared_ptr<relbot_msgs::msg::RelbotMotorsStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelbotMotorsStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor_cmd != other.motor_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelbotMotorsStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelbotMotorsStamped_

// alias to use template instance with default allocator
using RelbotMotorsStamped =
  relbot_msgs::msg::RelbotMotorsStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace relbot_msgs

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS_STAMPED__STRUCT_HPP_
