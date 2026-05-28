// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from part1_pubsub:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef PART1_PUBSUB__MSG__DETAIL__EXAMPLE__FUNCTIONS_H_
#define PART1_PUBSUB__MSG__DETAIL__EXAMPLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "part1_pubsub/msg/rosidl_generator_c__visibility_control.h"

#include "part1_pubsub/msg/detail/example__struct.h"

/// Initialize msg/Example message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * part1_pubsub__msg__Example
 * )) before or use
 * part1_pubsub__msg__Example__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
bool
part1_pubsub__msg__Example__init(part1_pubsub__msg__Example * msg);

/// Finalize msg/Example message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
void
part1_pubsub__msg__Example__fini(part1_pubsub__msg__Example * msg);

/// Create msg/Example message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * part1_pubsub__msg__Example__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
part1_pubsub__msg__Example *
part1_pubsub__msg__Example__create();

/// Destroy msg/Example message.
/**
 * It calls
 * part1_pubsub__msg__Example__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
void
part1_pubsub__msg__Example__destroy(part1_pubsub__msg__Example * msg);

/// Check for msg/Example message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
bool
part1_pubsub__msg__Example__are_equal(const part1_pubsub__msg__Example * lhs, const part1_pubsub__msg__Example * rhs);

/// Copy a msg/Example message.
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
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
bool
part1_pubsub__msg__Example__copy(
  const part1_pubsub__msg__Example * input,
  part1_pubsub__msg__Example * output);

/// Initialize array of msg/Example messages.
/**
 * It allocates the memory for the number of elements and calls
 * part1_pubsub__msg__Example__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
bool
part1_pubsub__msg__Example__Sequence__init(part1_pubsub__msg__Example__Sequence * array, size_t size);

/// Finalize array of msg/Example messages.
/**
 * It calls
 * part1_pubsub__msg__Example__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
void
part1_pubsub__msg__Example__Sequence__fini(part1_pubsub__msg__Example__Sequence * array);

/// Create array of msg/Example messages.
/**
 * It allocates the memory for the array and calls
 * part1_pubsub__msg__Example__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
part1_pubsub__msg__Example__Sequence *
part1_pubsub__msg__Example__Sequence__create(size_t size);

/// Destroy array of msg/Example messages.
/**
 * It calls
 * part1_pubsub__msg__Example__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
void
part1_pubsub__msg__Example__Sequence__destroy(part1_pubsub__msg__Example__Sequence * array);

/// Check for msg/Example message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
bool
part1_pubsub__msg__Example__Sequence__are_equal(const part1_pubsub__msg__Example__Sequence * lhs, const part1_pubsub__msg__Example__Sequence * rhs);

/// Copy an array of msg/Example messages.
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
ROSIDL_GENERATOR_C_PUBLIC_part1_pubsub
bool
part1_pubsub__msg__Example__Sequence__copy(
  const part1_pubsub__msg__Example__Sequence * input,
  part1_pubsub__msg__Example__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PART1_PUBSUB__MSG__DETAIL__EXAMPLE__FUNCTIONS_H_
