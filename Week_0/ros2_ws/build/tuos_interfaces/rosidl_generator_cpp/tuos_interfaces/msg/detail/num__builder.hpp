// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tuos_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUOS_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tuos_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tuos_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuos_interfaces::msg::Num num(::tuos_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::msg::Num>()
{
  return tuos_interfaces::msg::builder::Init_Num_num();
}

}  // namespace tuos_interfaces

#endif  // TUOS_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
