// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tuos_interfaces:srv/NumberGame.idl
// generated code does not contain a copyright notice
#include "tuos_interfaces/srv/detail/number_game__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tuos_interfaces__srv__NumberGame_Request__init(tuos_interfaces__srv__NumberGame_Request * msg)
{
  if (!msg) {
    return false;
  }
  // guess
  return true;
}

void
tuos_interfaces__srv__NumberGame_Request__fini(tuos_interfaces__srv__NumberGame_Request * msg)
{
  if (!msg) {
    return;
  }
  // guess
}

bool
tuos_interfaces__srv__NumberGame_Request__are_equal(const tuos_interfaces__srv__NumberGame_Request * lhs, const tuos_interfaces__srv__NumberGame_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // guess
  if (lhs->guess != rhs->guess) {
    return false;
  }
  return true;
}

bool
tuos_interfaces__srv__NumberGame_Request__copy(
  const tuos_interfaces__srv__NumberGame_Request * input,
  tuos_interfaces__srv__NumberGame_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // guess
  output->guess = input->guess;
  return true;
}

tuos_interfaces__srv__NumberGame_Request *
tuos_interfaces__srv__NumberGame_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuos_interfaces__srv__NumberGame_Request * msg = (tuos_interfaces__srv__NumberGame_Request *)allocator.allocate(sizeof(tuos_interfaces__srv__NumberGame_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuos_interfaces__srv__NumberGame_Request));
  bool success = tuos_interfaces__srv__NumberGame_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuos_interfaces__srv__NumberGame_Request__destroy(tuos_interfaces__srv__NumberGame_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuos_interfaces__srv__NumberGame_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuos_interfaces__srv__NumberGame_Request__Sequence__init(tuos_interfaces__srv__NumberGame_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuos_interfaces__srv__NumberGame_Request * data = NULL;

  if (size) {
    data = (tuos_interfaces__srv__NumberGame_Request *)allocator.zero_allocate(size, sizeof(tuos_interfaces__srv__NumberGame_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuos_interfaces__srv__NumberGame_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuos_interfaces__srv__NumberGame_Request__fini(&data[i - 1]);
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
tuos_interfaces__srv__NumberGame_Request__Sequence__fini(tuos_interfaces__srv__NumberGame_Request__Sequence * array)
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
      tuos_interfaces__srv__NumberGame_Request__fini(&array->data[i]);
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

tuos_interfaces__srv__NumberGame_Request__Sequence *
tuos_interfaces__srv__NumberGame_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuos_interfaces__srv__NumberGame_Request__Sequence * array = (tuos_interfaces__srv__NumberGame_Request__Sequence *)allocator.allocate(sizeof(tuos_interfaces__srv__NumberGame_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuos_interfaces__srv__NumberGame_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuos_interfaces__srv__NumberGame_Request__Sequence__destroy(tuos_interfaces__srv__NumberGame_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuos_interfaces__srv__NumberGame_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuos_interfaces__srv__NumberGame_Request__Sequence__are_equal(const tuos_interfaces__srv__NumberGame_Request__Sequence * lhs, const tuos_interfaces__srv__NumberGame_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuos_interfaces__srv__NumberGame_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuos_interfaces__srv__NumberGame_Request__Sequence__copy(
  const tuos_interfaces__srv__NumberGame_Request__Sequence * input,
  tuos_interfaces__srv__NumberGame_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuos_interfaces__srv__NumberGame_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuos_interfaces__srv__NumberGame_Request * data =
      (tuos_interfaces__srv__NumberGame_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuos_interfaces__srv__NumberGame_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuos_interfaces__srv__NumberGame_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuos_interfaces__srv__NumberGame_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `hint`
#include "rosidl_runtime_c/string_functions.h"

bool
tuos_interfaces__srv__NumberGame_Response__init(tuos_interfaces__srv__NumberGame_Response * msg)
{
  if (!msg) {
    return false;
  }
  // guesses
  // hint
  if (!rosidl_runtime_c__String__init(&msg->hint)) {
    tuos_interfaces__srv__NumberGame_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
tuos_interfaces__srv__NumberGame_Response__fini(tuos_interfaces__srv__NumberGame_Response * msg)
{
  if (!msg) {
    return;
  }
  // guesses
  // hint
  rosidl_runtime_c__String__fini(&msg->hint);
  // success
}

bool
tuos_interfaces__srv__NumberGame_Response__are_equal(const tuos_interfaces__srv__NumberGame_Response * lhs, const tuos_interfaces__srv__NumberGame_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // guesses
  if (lhs->guesses != rhs->guesses) {
    return false;
  }
  // hint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hint), &(rhs->hint)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
tuos_interfaces__srv__NumberGame_Response__copy(
  const tuos_interfaces__srv__NumberGame_Response * input,
  tuos_interfaces__srv__NumberGame_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // guesses
  output->guesses = input->guesses;
  // hint
  if (!rosidl_runtime_c__String__copy(
      &(input->hint), &(output->hint)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

tuos_interfaces__srv__NumberGame_Response *
tuos_interfaces__srv__NumberGame_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuos_interfaces__srv__NumberGame_Response * msg = (tuos_interfaces__srv__NumberGame_Response *)allocator.allocate(sizeof(tuos_interfaces__srv__NumberGame_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tuos_interfaces__srv__NumberGame_Response));
  bool success = tuos_interfaces__srv__NumberGame_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tuos_interfaces__srv__NumberGame_Response__destroy(tuos_interfaces__srv__NumberGame_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tuos_interfaces__srv__NumberGame_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tuos_interfaces__srv__NumberGame_Response__Sequence__init(tuos_interfaces__srv__NumberGame_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuos_interfaces__srv__NumberGame_Response * data = NULL;

  if (size) {
    data = (tuos_interfaces__srv__NumberGame_Response *)allocator.zero_allocate(size, sizeof(tuos_interfaces__srv__NumberGame_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tuos_interfaces__srv__NumberGame_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tuos_interfaces__srv__NumberGame_Response__fini(&data[i - 1]);
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
tuos_interfaces__srv__NumberGame_Response__Sequence__fini(tuos_interfaces__srv__NumberGame_Response__Sequence * array)
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
      tuos_interfaces__srv__NumberGame_Response__fini(&array->data[i]);
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

tuos_interfaces__srv__NumberGame_Response__Sequence *
tuos_interfaces__srv__NumberGame_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tuos_interfaces__srv__NumberGame_Response__Sequence * array = (tuos_interfaces__srv__NumberGame_Response__Sequence *)allocator.allocate(sizeof(tuos_interfaces__srv__NumberGame_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tuos_interfaces__srv__NumberGame_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tuos_interfaces__srv__NumberGame_Response__Sequence__destroy(tuos_interfaces__srv__NumberGame_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tuos_interfaces__srv__NumberGame_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tuos_interfaces__srv__NumberGame_Response__Sequence__are_equal(const tuos_interfaces__srv__NumberGame_Response__Sequence * lhs, const tuos_interfaces__srv__NumberGame_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tuos_interfaces__srv__NumberGame_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tuos_interfaces__srv__NumberGame_Response__Sequence__copy(
  const tuos_interfaces__srv__NumberGame_Response__Sequence * input,
  tuos_interfaces__srv__NumberGame_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tuos_interfaces__srv__NumberGame_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tuos_interfaces__srv__NumberGame_Response * data =
      (tuos_interfaces__srv__NumberGame_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tuos_interfaces__srv__NumberGame_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tuos_interfaces__srv__NumberGame_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tuos_interfaces__srv__NumberGame_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
