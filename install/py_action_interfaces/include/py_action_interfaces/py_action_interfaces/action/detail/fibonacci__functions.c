// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_action_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "py_action_interfaces/action/detail/fibonacci__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
py_action_interfaces__action__Fibonacci_Goal__init(py_action_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
py_action_interfaces__action__Fibonacci_Goal__fini(py_action_interfaces__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

bool
py_action_interfaces__action__Fibonacci_Goal__are_equal(const py_action_interfaces__action__Fibonacci_Goal * lhs, const py_action_interfaces__action__Fibonacci_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_Goal__copy(
  const py_action_interfaces__action__Fibonacci_Goal * input,
  py_action_interfaces__action__Fibonacci_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

py_action_interfaces__action__Fibonacci_Goal *
py_action_interfaces__action__Fibonacci_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Goal * msg = (py_action_interfaces__action__Fibonacci_Goal *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_Goal));
  bool success = py_action_interfaces__action__Fibonacci_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_Goal__destroy(py_action_interfaces__action__Fibonacci_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_Goal__Sequence__init(py_action_interfaces__action__Fibonacci_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Goal * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_Goal *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_Goal__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_Goal__Sequence__fini(py_action_interfaces__action__Fibonacci_Goal__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_Goal__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_Goal__Sequence *
py_action_interfaces__action__Fibonacci_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Goal__Sequence * array = (py_action_interfaces__action__Fibonacci_Goal__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_Goal__Sequence__destroy(py_action_interfaces__action__Fibonacci_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_Goal__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_Goal__Sequence * lhs, const py_action_interfaces__action__Fibonacci_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_Goal__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_Goal__Sequence * input,
  py_action_interfaces__action__Fibonacci_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_Goal * data =
      (py_action_interfaces__action__Fibonacci_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
py_action_interfaces__action__Fibonacci_Result__init(py_action_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    py_action_interfaces__action__Fibonacci_Result__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_Result__fini(py_action_interfaces__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

bool
py_action_interfaces__action__Fibonacci_Result__are_equal(const py_action_interfaces__action__Fibonacci_Result * lhs, const py_action_interfaces__action__Fibonacci_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_Result__copy(
  const py_action_interfaces__action__Fibonacci_Result * input,
  py_action_interfaces__action__Fibonacci_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_Result *
py_action_interfaces__action__Fibonacci_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Result * msg = (py_action_interfaces__action__Fibonacci_Result *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_Result));
  bool success = py_action_interfaces__action__Fibonacci_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_Result__destroy(py_action_interfaces__action__Fibonacci_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_Result__Sequence__init(py_action_interfaces__action__Fibonacci_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Result * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_Result *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_Result__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_Result__Sequence__fini(py_action_interfaces__action__Fibonacci_Result__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_Result__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_Result__Sequence *
py_action_interfaces__action__Fibonacci_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Result__Sequence * array = (py_action_interfaces__action__Fibonacci_Result__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_Result__Sequence__destroy(py_action_interfaces__action__Fibonacci_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_Result__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_Result__Sequence * lhs, const py_action_interfaces__action__Fibonacci_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_Result__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_Result__Sequence * input,
  py_action_interfaces__action__Fibonacci_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_Result * data =
      (py_action_interfaces__action__Fibonacci_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
py_action_interfaces__action__Fibonacci_Feedback__init(py_action_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->partial_sequence, 0)) {
    py_action_interfaces__action__Fibonacci_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_Feedback__fini(py_action_interfaces__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->partial_sequence);
}

bool
py_action_interfaces__action__Fibonacci_Feedback__are_equal(const py_action_interfaces__action__Fibonacci_Feedback * lhs, const py_action_interfaces__action__Fibonacci_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->partial_sequence), &(rhs->partial_sequence)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_Feedback__copy(
  const py_action_interfaces__action__Fibonacci_Feedback * input,
  py_action_interfaces__action__Fibonacci_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->partial_sequence), &(output->partial_sequence)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_Feedback *
py_action_interfaces__action__Fibonacci_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Feedback * msg = (py_action_interfaces__action__Fibonacci_Feedback *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_Feedback));
  bool success = py_action_interfaces__action__Fibonacci_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_Feedback__destroy(py_action_interfaces__action__Fibonacci_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_Feedback__Sequence__init(py_action_interfaces__action__Fibonacci_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Feedback * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_Feedback *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_Feedback__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_Feedback__Sequence__fini(py_action_interfaces__action__Fibonacci_Feedback__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_Feedback__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_Feedback__Sequence *
py_action_interfaces__action__Fibonacci_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_Feedback__Sequence * array = (py_action_interfaces__action__Fibonacci_Feedback__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_Feedback__Sequence__destroy(py_action_interfaces__action__Fibonacci_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_Feedback__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_Feedback__Sequence * lhs, const py_action_interfaces__action__Fibonacci_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_Feedback__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_Feedback__Sequence * input,
  py_action_interfaces__action__Fibonacci_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_Feedback * data =
      (py_action_interfaces__action__Fibonacci_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "py_action_interfaces/action/detail/fibonacci__functions.h"

bool
py_action_interfaces__action__Fibonacci_SendGoal_Request__init(py_action_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!py_action_interfaces__action__Fibonacci_Goal__init(&msg->goal)) {
    py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(py_action_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  py_action_interfaces__action__Fibonacci_Goal__fini(&msg->goal);
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Request__are_equal(const py_action_interfaces__action__Fibonacci_SendGoal_Request * lhs, const py_action_interfaces__action__Fibonacci_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!py_action_interfaces__action__Fibonacci_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Request__copy(
  const py_action_interfaces__action__Fibonacci_SendGoal_Request * input,
  py_action_interfaces__action__Fibonacci_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!py_action_interfaces__action__Fibonacci_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_SendGoal_Request *
py_action_interfaces__action__Fibonacci_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_SendGoal_Request * msg = (py_action_interfaces__action__Fibonacci_SendGoal_Request *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Request));
  bool success = py_action_interfaces__action__Fibonacci_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_SendGoal_Request__destroy(py_action_interfaces__action__Fibonacci_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_SendGoal_Request * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_SendGoal_Request *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence *
py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array = (py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__destroy(py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * lhs, const py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * input,
  py_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_SendGoal_Request * data =
      (py_action_interfaces__action__Fibonacci_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
py_action_interfaces__action__Fibonacci_SendGoal_Response__init(py_action_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    py_action_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_SendGoal_Response__fini(py_action_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Response__are_equal(const py_action_interfaces__action__Fibonacci_SendGoal_Response * lhs, const py_action_interfaces__action__Fibonacci_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Response__copy(
  const py_action_interfaces__action__Fibonacci_SendGoal_Response * input,
  py_action_interfaces__action__Fibonacci_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_SendGoal_Response *
py_action_interfaces__action__Fibonacci_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_SendGoal_Response * msg = (py_action_interfaces__action__Fibonacci_SendGoal_Response *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Response));
  bool success = py_action_interfaces__action__Fibonacci_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_SendGoal_Response__destroy(py_action_interfaces__action__Fibonacci_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_SendGoal_Response * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_SendGoal_Response *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_SendGoal_Response__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_SendGoal_Response__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence *
py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array = (py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__destroy(py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * lhs, const py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * input,
  py_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_SendGoal_Response * data =
      (py_action_interfaces__action__Fibonacci_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
py_action_interfaces__action__Fibonacci_GetResult_Request__init(py_action_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    py_action_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_GetResult_Request__fini(py_action_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Request__are_equal(const py_action_interfaces__action__Fibonacci_GetResult_Request * lhs, const py_action_interfaces__action__Fibonacci_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Request__copy(
  const py_action_interfaces__action__Fibonacci_GetResult_Request * input,
  py_action_interfaces__action__Fibonacci_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_GetResult_Request *
py_action_interfaces__action__Fibonacci_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_GetResult_Request * msg = (py_action_interfaces__action__Fibonacci_GetResult_Request *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_GetResult_Request));
  bool success = py_action_interfaces__action__Fibonacci_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_GetResult_Request__destroy(py_action_interfaces__action__Fibonacci_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_GetResult_Request * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_GetResult_Request *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_GetResult_Request__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_GetResult_Request__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence *
py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * array = (py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__destroy(py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * lhs, const py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * input,
  py_action_interfaces__action__Fibonacci_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_GetResult_Request * data =
      (py_action_interfaces__action__Fibonacci_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "py_action_interfaces/action/detail/fibonacci__functions.h"

bool
py_action_interfaces__action__Fibonacci_GetResult_Response__init(py_action_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!py_action_interfaces__action__Fibonacci_Result__init(&msg->result)) {
    py_action_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_GetResult_Response__fini(py_action_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  py_action_interfaces__action__Fibonacci_Result__fini(&msg->result);
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Response__are_equal(const py_action_interfaces__action__Fibonacci_GetResult_Response * lhs, const py_action_interfaces__action__Fibonacci_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!py_action_interfaces__action__Fibonacci_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Response__copy(
  const py_action_interfaces__action__Fibonacci_GetResult_Response * input,
  py_action_interfaces__action__Fibonacci_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!py_action_interfaces__action__Fibonacci_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_GetResult_Response *
py_action_interfaces__action__Fibonacci_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_GetResult_Response * msg = (py_action_interfaces__action__Fibonacci_GetResult_Response *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_GetResult_Response));
  bool success = py_action_interfaces__action__Fibonacci_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_GetResult_Response__destroy(py_action_interfaces__action__Fibonacci_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_GetResult_Response * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_GetResult_Response *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_GetResult_Response__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_GetResult_Response__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence *
py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * array = (py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__destroy(py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * lhs, const py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * input,
  py_action_interfaces__action__Fibonacci_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_GetResult_Response * data =
      (py_action_interfaces__action__Fibonacci_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "py_action_interfaces/action/detail/fibonacci__functions.h"

bool
py_action_interfaces__action__Fibonacci_FeedbackMessage__init(py_action_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!py_action_interfaces__action__Fibonacci_Feedback__init(&msg->feedback)) {
    py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(py_action_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  py_action_interfaces__action__Fibonacci_Feedback__fini(&msg->feedback);
}

bool
py_action_interfaces__action__Fibonacci_FeedbackMessage__are_equal(const py_action_interfaces__action__Fibonacci_FeedbackMessage * lhs, const py_action_interfaces__action__Fibonacci_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!py_action_interfaces__action__Fibonacci_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_FeedbackMessage__copy(
  const py_action_interfaces__action__Fibonacci_FeedbackMessage * input,
  py_action_interfaces__action__Fibonacci_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!py_action_interfaces__action__Fibonacci_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

py_action_interfaces__action__Fibonacci_FeedbackMessage *
py_action_interfaces__action__Fibonacci_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_FeedbackMessage * msg = (py_action_interfaces__action__Fibonacci_FeedbackMessage *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_action_interfaces__action__Fibonacci_FeedbackMessage));
  bool success = py_action_interfaces__action__Fibonacci_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
py_action_interfaces__action__Fibonacci_FeedbackMessage__destroy(py_action_interfaces__action__Fibonacci_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_FeedbackMessage * data = NULL;

  if (size) {
    data = (py_action_interfaces__action__Fibonacci_FeedbackMessage *)allocator.zero_allocate(size, sizeof(py_action_interfaces__action__Fibonacci_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_action_interfaces__action__Fibonacci_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(&data[i - 1]);
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
py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
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
      py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(&array->data[i]);
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

py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence *
py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array = (py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence *)allocator.allocate(sizeof(py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__destroy(py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__are_equal(const py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * lhs, const py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence__copy(
  const py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * input,
  py_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_action_interfaces__action__Fibonacci_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    py_action_interfaces__action__Fibonacci_FeedbackMessage * data =
      (py_action_interfaces__action__Fibonacci_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_action_interfaces__action__Fibonacci_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          py_action_interfaces__action__Fibonacci_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_action_interfaces__action__Fibonacci_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
