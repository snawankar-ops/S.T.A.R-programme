// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tuos_interfaces:action/CameraSweep.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__TRAITS_HPP_
#define TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: sweep_angle
  {
    out << "sweep_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sweep_angle, out);
    out << ", ";
  }

  // member: image_count
  {
    out << "image_count: ";
    rosidl_generator_traits::value_to_yaml(msg.image_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sweep_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sweep_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sweep_angle, out);
    out << "\n";
  }

  // member: image_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_count: ";
    rosidl_generator_traits::value_to_yaml(msg.image_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_Goal & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_Goal>()
{
  return "tuos_interfaces::action::CameraSweep_Goal";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_Goal>()
{
  return "tuos_interfaces/action/CameraSweep_Goal";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_paths
  {
    if (msg.image_paths.size() == 0) {
      out << "image_paths: []";
    } else {
      out << "image_paths: [";
      size_t pending_items = msg.image_paths.size();
      for (auto item : msg.image_paths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_paths.size() == 0) {
      out << "image_paths: []\n";
    } else {
      out << "image_paths:\n";
      for (auto item : msg.image_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_Result & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_Result>()
{
  return "tuos_interfaces::action::CameraSweep_Result";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_Result>()
{
  return "tuos_interfaces/action/CameraSweep_Result";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_image
  {
    out << "current_image: ";
    rosidl_generator_traits::value_to_yaml(msg.current_image, out);
    out << ", ";
  }

  // member: current_angle
  {
    out << "current_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_image: ";
    rosidl_generator_traits::value_to_yaml(msg.current_image, out);
    out << "\n";
  }

  // member: current_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_Feedback & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_Feedback>()
{
  return "tuos_interfaces::action::CameraSweep_Feedback";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_Feedback>()
{
  return "tuos_interfaces/action/CameraSweep_Feedback";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tuos_interfaces/action/detail/camera_sweep__traits.hpp"

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_SendGoal_Request & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_SendGoal_Request>()
{
  return "tuos_interfaces::action::CameraSweep_SendGoal_Request";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_SendGoal_Request>()
{
  return "tuos_interfaces/action/CameraSweep_SendGoal_Request";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tuos_interfaces::action::CameraSweep_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tuos_interfaces::action::CameraSweep_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_SendGoal_Response & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_SendGoal_Response>()
{
  return "tuos_interfaces::action::CameraSweep_SendGoal_Response";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_SendGoal_Response>()
{
  return "tuos_interfaces/action/CameraSweep_SendGoal_Response";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_SendGoal>()
{
  return "tuos_interfaces::action::CameraSweep_SendGoal";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_SendGoal>()
{
  return "tuos_interfaces/action/CameraSweep_SendGoal";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tuos_interfaces::action::CameraSweep_SendGoal_Request>::value &&
    has_fixed_size<tuos_interfaces::action::CameraSweep_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tuos_interfaces::action::CameraSweep_SendGoal_Request>::value &&
    has_bounded_size<tuos_interfaces::action::CameraSweep_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tuos_interfaces::action::CameraSweep_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tuos_interfaces::action::CameraSweep_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tuos_interfaces::action::CameraSweep_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_GetResult_Request & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_GetResult_Request>()
{
  return "tuos_interfaces::action::CameraSweep_GetResult_Request";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_GetResult_Request>()
{
  return "tuos_interfaces/action/CameraSweep_GetResult_Request";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__traits.hpp"

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_GetResult_Response & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_GetResult_Response>()
{
  return "tuos_interfaces::action::CameraSweep_GetResult_Response";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_GetResult_Response>()
{
  return "tuos_interfaces/action/CameraSweep_GetResult_Response";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tuos_interfaces::action::CameraSweep_Result>::value> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tuos_interfaces::action::CameraSweep_Result>::value> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_GetResult>()
{
  return "tuos_interfaces::action::CameraSweep_GetResult";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_GetResult>()
{
  return "tuos_interfaces/action/CameraSweep_GetResult";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tuos_interfaces::action::CameraSweep_GetResult_Request>::value &&
    has_fixed_size<tuos_interfaces::action::CameraSweep_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tuos_interfaces::action::CameraSweep_GetResult_Request>::value &&
    has_bounded_size<tuos_interfaces::action::CameraSweep_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tuos_interfaces::action::CameraSweep_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tuos_interfaces::action::CameraSweep_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tuos_interfaces::action::CameraSweep_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__traits.hpp"

namespace tuos_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CameraSweep_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSweep_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSweep_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::action::CameraSweep_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::action::CameraSweep_FeedbackMessage & msg)
{
  return tuos_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::action::CameraSweep_FeedbackMessage>()
{
  return "tuos_interfaces::action::CameraSweep_FeedbackMessage";
}

template<>
inline const char * name<tuos_interfaces::action::CameraSweep_FeedbackMessage>()
{
  return "tuos_interfaces/action/CameraSweep_FeedbackMessage";
}

template<>
struct has_fixed_size<tuos_interfaces::action::CameraSweep_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tuos_interfaces::action::CameraSweep_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tuos_interfaces::action::CameraSweep_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tuos_interfaces::action::CameraSweep_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tuos_interfaces::action::CameraSweep_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tuos_interfaces::action::CameraSweep>
  : std::true_type
{
};

template<>
struct is_action_goal<tuos_interfaces::action::CameraSweep_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tuos_interfaces::action::CameraSweep_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tuos_interfaces::action::CameraSweep_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__TRAITS_HPP_
