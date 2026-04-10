// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from relbot_msgs:msg/RelbotMotorsStamped.idl
// generated code does not contain a copyright notice
#include "relbot_msgs/msg/detail/relbot_motors_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `motor_cmd`
#include "relbot_msgs/msg/detail/relbot_motors__functions.h"

bool
relbot_msgs__msg__RelbotMotorsStamped__init(relbot_msgs__msg__RelbotMotorsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    relbot_msgs__msg__RelbotMotorsStamped__fini(msg);
    return false;
  }
  // motor_cmd
  if (!relbot_msgs__msg__RelbotMotors__init(&msg->motor_cmd)) {
    relbot_msgs__msg__RelbotMotorsStamped__fini(msg);
    return false;
  }
  return true;
}

void
relbot_msgs__msg__RelbotMotorsStamped__fini(relbot_msgs__msg__RelbotMotorsStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motor_cmd
  relbot_msgs__msg__RelbotMotors__fini(&msg->motor_cmd);
}

bool
relbot_msgs__msg__RelbotMotorsStamped__are_equal(const relbot_msgs__msg__RelbotMotorsStamped * lhs, const relbot_msgs__msg__RelbotMotorsStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // motor_cmd
  if (!relbot_msgs__msg__RelbotMotors__are_equal(
      &(lhs->motor_cmd), &(rhs->motor_cmd)))
  {
    return false;
  }
  return true;
}

bool
relbot_msgs__msg__RelbotMotorsStamped__copy(
  const relbot_msgs__msg__RelbotMotorsStamped * input,
  relbot_msgs__msg__RelbotMotorsStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // motor_cmd
  if (!relbot_msgs__msg__RelbotMotors__copy(
      &(input->motor_cmd), &(output->motor_cmd)))
  {
    return false;
  }
  return true;
}

relbot_msgs__msg__RelbotMotorsStamped *
relbot_msgs__msg__RelbotMotorsStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  relbot_msgs__msg__RelbotMotorsStamped * msg = (relbot_msgs__msg__RelbotMotorsStamped *)allocator.allocate(sizeof(relbot_msgs__msg__RelbotMotorsStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(relbot_msgs__msg__RelbotMotorsStamped));
  bool success = relbot_msgs__msg__RelbotMotorsStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
relbot_msgs__msg__RelbotMotorsStamped__destroy(relbot_msgs__msg__RelbotMotorsStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    relbot_msgs__msg__RelbotMotorsStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
relbot_msgs__msg__RelbotMotorsStamped__Sequence__init(relbot_msgs__msg__RelbotMotorsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  relbot_msgs__msg__RelbotMotorsStamped * data = NULL;

  if (size) {
    data = (relbot_msgs__msg__RelbotMotorsStamped *)allocator.zero_allocate(size, sizeof(relbot_msgs__msg__RelbotMotorsStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = relbot_msgs__msg__RelbotMotorsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        relbot_msgs__msg__RelbotMotorsStamped__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
relbot_msgs__msg__RelbotMotorsStamped__Sequence__fini(relbot_msgs__msg__RelbotMotorsStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      relbot_msgs__msg__RelbotMotorsStamped__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

relbot_msgs__msg__RelbotMotorsStamped__Sequence *
relbot_msgs__msg__RelbotMotorsStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  relbot_msgs__msg__RelbotMotorsStamped__Sequence * array = (relbot_msgs__msg__RelbotMotorsStamped__Sequence *)allocator.allocate(sizeof(relbot_msgs__msg__RelbotMotorsStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = relbot_msgs__msg__RelbotMotorsStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
relbot_msgs__msg__RelbotMotorsStamped__Sequence__destroy(relbot_msgs__msg__RelbotMotorsStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    relbot_msgs__msg__RelbotMotorsStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
relbot_msgs__msg__RelbotMotorsStamped__Sequence__are_equal(const relbot_msgs__msg__RelbotMotorsStamped__Sequence * lhs, const relbot_msgs__msg__RelbotMotorsStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!relbot_msgs__msg__RelbotMotorsStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
relbot_msgs__msg__RelbotMotorsStamped__Sequence__copy(
  const relbot_msgs__msg__RelbotMotorsStamped__Sequence * input,
  relbot_msgs__msg__RelbotMotorsStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(relbot_msgs__msg__RelbotMotorsStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    relbot_msgs__msg__RelbotMotorsStamped * data =
      (relbot_msgs__msg__RelbotMotorsStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!relbot_msgs__msg__RelbotMotorsStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          relbot_msgs__msg__RelbotMotorsStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!relbot_msgs__msg__RelbotMotorsStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
