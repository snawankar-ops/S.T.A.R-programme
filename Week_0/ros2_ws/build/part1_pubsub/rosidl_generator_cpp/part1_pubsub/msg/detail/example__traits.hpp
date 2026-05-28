// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from part1_pubsub:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef PART1_PUBSUB__MSG__DETAIL__EXAMPLE__TRAITS_HPP_
#define PART1_PUBSUB__MSG__DETAIL__EXAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "part1_pubsub/msg/detail/example__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace part1_pubsub
{

namespace msg
{

inline void to_flow_style_yaml(
  const Example & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Example & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Example & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace part1_pubsub

namespace rosidl_generator_traits
{

[[deprecated("use part1_pubsub::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const part1_pubsub::msg::Example & msg,
  std::ostream & out, size_t indentation = 0)
{
  part1_pubsub::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use part1_pubsub::msg::to_yaml() instead")]]
inline std::string to_yaml(const part1_pubsub::msg::Example & msg)
{
  return part1_pubsub::msg::to_yaml(msg);
}

template<>
inline const char * data_type<part1_pubsub::msg::Example>()
{
  return "part1_pubsub::msg::Example";
}

template<>
inline const char * name<part1_pubsub::msg::Example>()
{
  return "part1_pubsub/msg/Example";
}

template<>
struct has_fixed_size<part1_pubsub::msg::Example>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<part1_pubsub::msg::Example>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<part1_pubsub::msg::Example>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PART1_PUBSUB__MSG__DETAIL__EXAMPLE__TRAITS_HPP_
