// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tuos_interfaces:action/CameraSweep.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__STRUCT_H_
#define TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_Goal
{
  /// Angular sweep (in degrees) over which to capture images
  float sweep_angle;
  /// Number of images to capture during the sweep
  int32_t image_count;
} tuos_interfaces__action__CameraSweep_Goal;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_Goal.
typedef struct tuos_interfaces__action__CameraSweep_Goal__Sequence
{
  tuos_interfaces__action__CameraSweep_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image_paths'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_Result
{
  /// Full path to each of the captured images
  rosidl_runtime_c__String__Sequence image_paths;
} tuos_interfaces__action__CameraSweep_Result;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_Result.
typedef struct tuos_interfaces__action__CameraSweep_Result__Sequence
{
  tuos_interfaces__action__CameraSweep_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_Feedback
{
  /// Number of images taken
  int32_t current_image;
  /// Current angular position of the robot (in degrees)
  float current_angle;
} tuos_interfaces__action__CameraSweep_Feedback;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_Feedback.
typedef struct tuos_interfaces__action__CameraSweep_Feedback__Sequence
{
  tuos_interfaces__action__CameraSweep_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tuos_interfaces/action/detail/camera_sweep__struct.h"

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tuos_interfaces__action__CameraSweep_Goal goal;
} tuos_interfaces__action__CameraSweep_SendGoal_Request;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_SendGoal_Request.
typedef struct tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence
{
  tuos_interfaces__action__CameraSweep_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tuos_interfaces__action__CameraSweep_SendGoal_Response;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_SendGoal_Response.
typedef struct tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence
{
  tuos_interfaces__action__CameraSweep_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tuos_interfaces__action__CameraSweep_GetResult_Request;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_GetResult_Request.
typedef struct tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence
{
  tuos_interfaces__action__CameraSweep_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.h"

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_GetResult_Response
{
  int8_t status;
  tuos_interfaces__action__CameraSweep_Result result;
} tuos_interfaces__action__CameraSweep_GetResult_Response;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_GetResult_Response.
typedef struct tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence
{
  tuos_interfaces__action__CameraSweep_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.h"

/// Struct defined in action/CameraSweep in the package tuos_interfaces.
typedef struct tuos_interfaces__action__CameraSweep_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tuos_interfaces__action__CameraSweep_Feedback feedback;
} tuos_interfaces__action__CameraSweep_FeedbackMessage;

// Struct for a sequence of tuos_interfaces__action__CameraSweep_FeedbackMessage.
typedef struct tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence
{
  tuos_interfaces__action__CameraSweep_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__STRUCT_H_
