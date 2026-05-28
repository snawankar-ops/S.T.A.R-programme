// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tuos_interfaces:action/CameraSweep.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__FUNCTIONS_H_
#define TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tuos_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tuos_interfaces/action/detail/camera_sweep__struct.h"

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_Goal
 * )) before or use
 * tuos_interfaces__action__CameraSweep_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Goal__init(tuos_interfaces__action__CameraSweep_Goal * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Goal__fini(tuos_interfaces__action__CameraSweep_Goal * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_Goal *
tuos_interfaces__action__CameraSweep_Goal__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Goal__destroy(tuos_interfaces__action__CameraSweep_Goal * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Goal__are_equal(const tuos_interfaces__action__CameraSweep_Goal * lhs, const tuos_interfaces__action__CameraSweep_Goal * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Goal__copy(
  const tuos_interfaces__action__CameraSweep_Goal * input,
  tuos_interfaces__action__CameraSweep_Goal * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Goal__Sequence__init(tuos_interfaces__action__CameraSweep_Goal__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Goal__Sequence__fini(tuos_interfaces__action__CameraSweep_Goal__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_Goal__Sequence *
tuos_interfaces__action__CameraSweep_Goal__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Goal__Sequence__destroy(tuos_interfaces__action__CameraSweep_Goal__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Goal__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_Goal__Sequence * lhs, const tuos_interfaces__action__CameraSweep_Goal__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Goal__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_Goal__Sequence * input,
  tuos_interfaces__action__CameraSweep_Goal__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_Result
 * )) before or use
 * tuos_interfaces__action__CameraSweep_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Result__init(tuos_interfaces__action__CameraSweep_Result * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Result__fini(tuos_interfaces__action__CameraSweep_Result * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_Result *
tuos_interfaces__action__CameraSweep_Result__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Result__destroy(tuos_interfaces__action__CameraSweep_Result * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Result__are_equal(const tuos_interfaces__action__CameraSweep_Result * lhs, const tuos_interfaces__action__CameraSweep_Result * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Result__copy(
  const tuos_interfaces__action__CameraSweep_Result * input,
  tuos_interfaces__action__CameraSweep_Result * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Result__Sequence__init(tuos_interfaces__action__CameraSweep_Result__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Result__Sequence__fini(tuos_interfaces__action__CameraSweep_Result__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_Result__Sequence *
tuos_interfaces__action__CameraSweep_Result__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Result__Sequence__destroy(tuos_interfaces__action__CameraSweep_Result__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Result__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_Result__Sequence * lhs, const tuos_interfaces__action__CameraSweep_Result__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Result__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_Result__Sequence * input,
  tuos_interfaces__action__CameraSweep_Result__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_Feedback
 * )) before or use
 * tuos_interfaces__action__CameraSweep_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Feedback__init(tuos_interfaces__action__CameraSweep_Feedback * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Feedback__fini(tuos_interfaces__action__CameraSweep_Feedback * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_Feedback *
tuos_interfaces__action__CameraSweep_Feedback__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Feedback__destroy(tuos_interfaces__action__CameraSweep_Feedback * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Feedback__are_equal(const tuos_interfaces__action__CameraSweep_Feedback * lhs, const tuos_interfaces__action__CameraSweep_Feedback * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Feedback__copy(
  const tuos_interfaces__action__CameraSweep_Feedback * input,
  tuos_interfaces__action__CameraSweep_Feedback * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Feedback__Sequence__init(tuos_interfaces__action__CameraSweep_Feedback__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Feedback__Sequence__fini(tuos_interfaces__action__CameraSweep_Feedback__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_Feedback__Sequence *
tuos_interfaces__action__CameraSweep_Feedback__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_Feedback__Sequence__destroy(tuos_interfaces__action__CameraSweep_Feedback__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Feedback__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_Feedback__Sequence * lhs, const tuos_interfaces__action__CameraSweep_Feedback__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_Feedback__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_Feedback__Sequence * input,
  tuos_interfaces__action__CameraSweep_Feedback__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_SendGoal_Request
 * )) before or use
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Request__init(tuos_interfaces__action__CameraSweep_SendGoal_Request * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Request__fini(tuos_interfaces__action__CameraSweep_SendGoal_Request * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_SendGoal_Request *
tuos_interfaces__action__CameraSweep_SendGoal_Request__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Request__destroy(tuos_interfaces__action__CameraSweep_SendGoal_Request * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Request__are_equal(const tuos_interfaces__action__CameraSweep_SendGoal_Request * lhs, const tuos_interfaces__action__CameraSweep_SendGoal_Request * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Request__copy(
  const tuos_interfaces__action__CameraSweep_SendGoal_Request * input,
  tuos_interfaces__action__CameraSweep_SendGoal_Request * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__init(tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__fini(tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence *
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__destroy(tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * lhs, const tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * input,
  tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_SendGoal_Response
 * )) before or use
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Response__init(tuos_interfaces__action__CameraSweep_SendGoal_Response * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Response__fini(tuos_interfaces__action__CameraSweep_SendGoal_Response * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_SendGoal_Response *
tuos_interfaces__action__CameraSweep_SendGoal_Response__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Response__destroy(tuos_interfaces__action__CameraSweep_SendGoal_Response * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Response__are_equal(const tuos_interfaces__action__CameraSweep_SendGoal_Response * lhs, const tuos_interfaces__action__CameraSweep_SendGoal_Response * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Response__copy(
  const tuos_interfaces__action__CameraSweep_SendGoal_Response * input,
  tuos_interfaces__action__CameraSweep_SendGoal_Response * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__init(tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__fini(tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence *
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__destroy(tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * lhs, const tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * input,
  tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_GetResult_Request
 * )) before or use
 * tuos_interfaces__action__CameraSweep_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Request__init(tuos_interfaces__action__CameraSweep_GetResult_Request * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Request__fini(tuos_interfaces__action__CameraSweep_GetResult_Request * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_GetResult_Request *
tuos_interfaces__action__CameraSweep_GetResult_Request__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Request__destroy(tuos_interfaces__action__CameraSweep_GetResult_Request * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Request__are_equal(const tuos_interfaces__action__CameraSweep_GetResult_Request * lhs, const tuos_interfaces__action__CameraSweep_GetResult_Request * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Request__copy(
  const tuos_interfaces__action__CameraSweep_GetResult_Request * input,
  tuos_interfaces__action__CameraSweep_GetResult_Request * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__init(tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__fini(tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence *
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__destroy(tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * lhs, const tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * input,
  tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_GetResult_Response
 * )) before or use
 * tuos_interfaces__action__CameraSweep_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Response__init(tuos_interfaces__action__CameraSweep_GetResult_Response * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Response__fini(tuos_interfaces__action__CameraSweep_GetResult_Response * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_GetResult_Response *
tuos_interfaces__action__CameraSweep_GetResult_Response__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Response__destroy(tuos_interfaces__action__CameraSweep_GetResult_Response * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Response__are_equal(const tuos_interfaces__action__CameraSweep_GetResult_Response * lhs, const tuos_interfaces__action__CameraSweep_GetResult_Response * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Response__copy(
  const tuos_interfaces__action__CameraSweep_GetResult_Response * input,
  tuos_interfaces__action__CameraSweep_GetResult_Response * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__init(tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__fini(tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence *
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__destroy(tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * lhs, const tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * input,
  tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence * output);

/// Initialize action/CameraSweep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tuos_interfaces__action__CameraSweep_FeedbackMessage
 * )) before or use
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_FeedbackMessage__init(tuos_interfaces__action__CameraSweep_FeedbackMessage * msg);

/// Finalize action/CameraSweep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_FeedbackMessage__fini(tuos_interfaces__action__CameraSweep_FeedbackMessage * msg);

/// Create action/CameraSweep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_FeedbackMessage *
tuos_interfaces__action__CameraSweep_FeedbackMessage__create();

/// Destroy action/CameraSweep message.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_FeedbackMessage__destroy(tuos_interfaces__action__CameraSweep_FeedbackMessage * msg);

/// Check for action/CameraSweep message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_FeedbackMessage__are_equal(const tuos_interfaces__action__CameraSweep_FeedbackMessage * lhs, const tuos_interfaces__action__CameraSweep_FeedbackMessage * rhs);

/// Copy a action/CameraSweep message.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_FeedbackMessage__copy(
  const tuos_interfaces__action__CameraSweep_FeedbackMessage * input,
  tuos_interfaces__action__CameraSweep_FeedbackMessage * output);

/// Initialize array of action/CameraSweep messages.
/**
 * It allocates the memory for the number of elements and calls
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__init(tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__fini(tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * array);

/// Create array of action/CameraSweep messages.
/**
 * It allocates the memory for the array and calls
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence *
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/CameraSweep messages.
/**
 * It calls
 * tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
void
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__destroy(tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * array);

/// Check for action/CameraSweep message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__are_equal(const tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * lhs, const tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/CameraSweep messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tuos_interfaces
bool
tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__copy(
  const tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * input,
  tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__FUNCTIONS_H_
