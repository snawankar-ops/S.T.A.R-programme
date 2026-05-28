// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from part1_pubsub:msg/Example.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "part1_pubsub/msg/detail/example__rosidl_typesupport_introspection_c.h"
#include "part1_pubsub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "part1_pubsub/msg/detail/example__functions.h"
#include "part1_pubsub/msg/detail/example__struct.h"


// Include directives for member types
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  part1_pubsub__msg__Example__init(message_memory);
}

void part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_fini_function(void * message_memory)
{
  part1_pubsub__msg__Example__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_member_array[2] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(part1_pubsub__msg__Example, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(part1_pubsub__msg__Example, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_members = {
  "part1_pubsub__msg",  // message namespace
  "Example",  // message name
  2,  // number of fields
  sizeof(part1_pubsub__msg__Example),
  part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_member_array,  // message members
  part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_init_function,  // function to initialize message memory (memory has to be allocated)
  part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_type_support_handle = {
  0,
  &part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_part1_pubsub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, part1_pubsub, msg, Example)() {
  if (!part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_type_support_handle.typesupport_identifier) {
    part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &part1_pubsub__msg__Example__rosidl_typesupport_introspection_c__Example_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
