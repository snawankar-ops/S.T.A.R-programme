// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from part1_pubsub:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef PART1_PUBSUB__MSG__DETAIL__EXAMPLE__STRUCT_H_
#define PART1_PUBSUB__MSG__DETAIL__EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Example in the package part1_pubsub.
typedef struct part1_pubsub__msg__Example
{
  rosidl_runtime_c__String info;
  int32_t time;
} part1_pubsub__msg__Example;

// Struct for a sequence of part1_pubsub__msg__Example.
typedef struct part1_pubsub__msg__Example__Sequence
{
  part1_pubsub__msg__Example * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} part1_pubsub__msg__Example__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PART1_PUBSUB__MSG__DETAIL__EXAMPLE__STRUCT_H_
