// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tuos_interfaces:srv/NumberGame.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__TRAITS_HPP_
#define TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tuos_interfaces/srv/detail/number_game__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tuos_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NumberGame_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: guess
  {
    out << "guess: ";
    rosidl_generator_traits::value_to_yaml(msg.guess, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NumberGame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: guess
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guess: ";
    rosidl_generator_traits::value_to_yaml(msg.guess, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NumberGame_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::srv::NumberGame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::srv::NumberGame_Request & msg)
{
  return tuos_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::srv::NumberGame_Request>()
{
  return "tuos_interfaces::srv::NumberGame_Request";
}

template<>
inline const char * name<tuos_interfaces::srv::NumberGame_Request>()
{
  return "tuos_interfaces/srv/NumberGame_Request";
}

template<>
struct has_fixed_size<tuos_interfaces::srv::NumberGame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tuos_interfaces::srv::NumberGame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tuos_interfaces::srv::NumberGame_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tuos_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NumberGame_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: guesses
  {
    out << "guesses: ";
    rosidl_generator_traits::value_to_yaml(msg.guesses, out);
    out << ", ";
  }

  // member: hint
  {
    out << "hint: ";
    rosidl_generator_traits::value_to_yaml(msg.hint, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NumberGame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: guesses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guesses: ";
    rosidl_generator_traits::value_to_yaml(msg.guesses, out);
    out << "\n";
  }

  // member: hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hint: ";
    rosidl_generator_traits::value_to_yaml(msg.hint, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NumberGame_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tuos_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tuos_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tuos_interfaces::srv::NumberGame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tuos_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tuos_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tuos_interfaces::srv::NumberGame_Response & msg)
{
  return tuos_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tuos_interfaces::srv::NumberGame_Response>()
{
  return "tuos_interfaces::srv::NumberGame_Response";
}

template<>
inline const char * name<tuos_interfaces::srv::NumberGame_Response>()
{
  return "tuos_interfaces/srv/NumberGame_Response";
}

template<>
struct has_fixed_size<tuos_interfaces::srv::NumberGame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tuos_interfaces::srv::NumberGame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tuos_interfaces::srv::NumberGame_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tuos_interfaces::srv::NumberGame>()
{
  return "tuos_interfaces::srv::NumberGame";
}

template<>
inline const char * name<tuos_interfaces::srv::NumberGame>()
{
  return "tuos_interfaces/srv/NumberGame";
}

template<>
struct has_fixed_size<tuos_interfaces::srv::NumberGame>
  : std::integral_constant<
    bool,
    has_fixed_size<tuos_interfaces::srv::NumberGame_Request>::value &&
    has_fixed_size<tuos_interfaces::srv::NumberGame_Response>::value
  >
{
};

template<>
struct has_bounded_size<tuos_interfaces::srv::NumberGame>
  : std::integral_constant<
    bool,
    has_bounded_size<tuos_interfaces::srv::NumberGame_Request>::value &&
    has_bounded_size<tuos_interfaces::srv::NumberGame_Response>::value
  >
{
};

template<>
struct is_service<tuos_interfaces::srv::NumberGame>
  : std::true_type
{
};

template<>
struct is_service_request<tuos_interfaces::srv::NumberGame_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tuos_interfaces::srv::NumberGame_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__TRAITS_HPP_
