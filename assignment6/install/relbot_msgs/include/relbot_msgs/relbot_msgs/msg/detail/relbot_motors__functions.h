// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice

#ifndef RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__FUNCTIONS_H_
#define RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "relbot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "relbot_msgs/msg/detail/relbot_motors__struct.h"

/// Initialize msg/RelbotMotors message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * relbot_msgs__msg__RelbotMotors
 * )) before or use
 * relbot_msgs__msg__RelbotMotors__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
bool
relbot_msgs__msg__RelbotMotors__init(relbot_msgs__msg__RelbotMotors * msg);

/// Finalize msg/RelbotMotors message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
void
relbot_msgs__msg__RelbotMotors__fini(relbot_msgs__msg__RelbotMotors * msg);

/// Create msg/RelbotMotors message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * relbot_msgs__msg__RelbotMotors__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
relbot_msgs__msg__RelbotMotors *
relbot_msgs__msg__RelbotMotors__create();

/// Destroy msg/RelbotMotors message.
/**
 * It calls
 * relbot_msgs__msg__RelbotMotors__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
void
relbot_msgs__msg__RelbotMotors__destroy(relbot_msgs__msg__RelbotMotors * msg);

/// Check for msg/RelbotMotors message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
bool
relbot_msgs__msg__RelbotMotors__are_equal(const relbot_msgs__msg__RelbotMotors * lhs, const relbot_msgs__msg__RelbotMotors * rhs);

/// Copy a msg/RelbotMotors message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
bool
relbot_msgs__msg__RelbotMotors__copy(
  const relbot_msgs__msg__RelbotMotors * input,
  relbot_msgs__msg__RelbotMotors * output);

/// Initialize array of msg/RelbotMotors messages.
/**
 * It allocates the memory for the number of elements and calls
 * relbot_msgs__msg__RelbotMotors__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
bool
relbot_msgs__msg__RelbotMotors__Sequence__init(relbot_msgs__msg__RelbotMotors__Sequence * array, size_t size);

/// Finalize array of msg/RelbotMotors messages.
/**
 * It calls
 * relbot_msgs__msg__RelbotMotors__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
void
relbot_msgs__msg__RelbotMotors__Sequence__fini(relbot_msgs__msg__RelbotMotors__Sequence * array);

/// Create array of msg/RelbotMotors messages.
/**
 * It allocates the memory for the array and calls
 * relbot_msgs__msg__RelbotMotors__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
relbot_msgs__msg__RelbotMotors__Sequence *
relbot_msgs__msg__RelbotMotors__Sequence__create(size_t size);

/// Destroy array of msg/RelbotMotors messages.
/**
 * It calls
 * relbot_msgs__msg__RelbotMotors__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
void
relbot_msgs__msg__RelbotMotors__Sequence__destroy(relbot_msgs__msg__RelbotMotors__Sequence * array);

/// Check for msg/RelbotMotors message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
bool
relbot_msgs__msg__RelbotMotors__Sequence__are_equal(const relbot_msgs__msg__RelbotMotors__Sequence * lhs, const relbot_msgs__msg__RelbotMotors__Sequence * rhs);

/// Copy an array of msg/RelbotMotors messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_relbot_msgs
bool
relbot_msgs__msg__RelbotMotors__Sequence__copy(
  const relbot_msgs__msg__RelbotMotors__Sequence * input,
  relbot_msgs__msg__RelbotMotors__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RELBOT_MSGS__MSG__DETAIL__RELBOT_MOTORS__FUNCTIONS_H_
