// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__STRUCT_HPP_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__relbot_msgs__msg__RelbotMotors __attribute__((deprecated))
#else
# define DEPRECATED__relbot_msgs__msg__RelbotMotors __declspec(deprecated)
#endif

namespace relbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelbotMotors_
{
  using Type = RelbotMotors_<ContainerAllocator>;

  explicit RelbotMotors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_wheel_vel = 0.0;
      this->right_wheel_vel = 0.0;
    }
  }

  explicit RelbotMotors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_wheel_vel = 0.0;
      this->right_wheel_vel = 0.0;
    }
  }

  // field types and members
  using _left_wheel_vel_type =
    double;
  _left_wheel_vel_type left_wheel_vel;
  using _right_wheel_vel_type =
    double;
  _right_wheel_vel_type right_wheel_vel;

  // setters for named parameter idiom
  Type & set__left_wheel_vel(
    const double & _arg)
  {
    this->left_wheel_vel = _arg;
    return *this;
  }
  Type & set__right_wheel_vel(
    const double & _arg)
  {
    this->right_wheel_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    relbot_msgs::msg::RelbotMotors_<ContainerAllocator> *;
  using ConstRawPtr =
    const relbot_msgs::msg::RelbotMotors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      relbot_msgs::msg::RelbotMotors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      relbot_msgs::msg::RelbotMotors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__relbot_msgs__msg__RelbotMotors
    std::shared_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__relbot_msgs__msg__RelbotMotors
    std::shared_ptr<relbot_msgs::msg::RelbotMotors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelbotMotors_ & other) const
  {
    if (this->left_wheel_vel != other.left_wheel_vel) {
      return false;
    }
    if (this->right_wheel_vel != other.right_wheel_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelbotMotors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelbotMotors_

// alias to use template instance with default allocator
using RelbotMotors =
  relbot_msgs::msg::RelbotMotors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace relbot_msgs

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__STRUCT_HPP_
