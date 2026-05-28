// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tuos_interfaces:srv/NumberGame.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__STRUCT_H_
#define TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/NumberGame in the package tuos_interfaces.
typedef struct tuos_interfaces__srv__NumberGame_Request
{
  int32_t guess;
} tuos_interfaces__srv__NumberGame_Request;

// Struct for a sequence of tuos_interfaces__srv__NumberGame_Request.
typedef struct tuos_interfaces__srv__NumberGame_Request__Sequence
{
  tuos_interfaces__srv__NumberGame_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__srv__NumberGame_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'hint'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/NumberGame in the package tuos_interfaces.
typedef struct tuos_interfaces__srv__NumberGame_Response
{
  int32_t guesses;
  rosidl_runtime_c__String hint;
  bool success;
} tuos_interfaces__srv__NumberGame_Response;

// Struct for a sequence of tuos_interfaces__srv__NumberGame_Response.
typedef struct tuos_interfaces__srv__NumberGame_Response__Sequence
{
  tuos_interfaces__srv__NumberGame_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__srv__NumberGame_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__STRUCT_H_
