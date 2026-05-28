// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tuos_interfaces:srv/NumberGame.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__BUILDER_HPP_
#define TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tuos_interfaces/srv/detail/number_game__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tuos_interfaces
{

namespace srv
{

namespace builder
{

class Init_NumberGame_Request_guess
{
public:
  Init_NumberGame_Request_guess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuos_interfaces::srv::NumberGame_Request guess(::tuos_interfaces::srv::NumberGame_Request::_guess_type arg)
  {
    msg_.guess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::srv::NumberGame_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::srv::NumberGame_Request>()
{
  return tuos_interfaces::srv::builder::Init_NumberGame_Request_guess();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace srv
{

namespace builder
{

class Init_NumberGame_Response_success
{
public:
  explicit Init_NumberGame_Response_success(::tuos_interfaces::srv::NumberGame_Response & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::srv::NumberGame_Response success(::tuos_interfaces::srv::NumberGame_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::srv::NumberGame_Response msg_;
};

class Init_NumberGame_Response_hint
{
public:
  explicit Init_NumberGame_Response_hint(::tuos_interfaces::srv::NumberGame_Response & msg)
  : msg_(msg)
  {}
  Init_NumberGame_Response_success hint(::tuos_interfaces::srv::NumberGame_Response::_hint_type arg)
  {
    msg_.hint = std::move(arg);
    return Init_NumberGame_Response_success(msg_);
  }

private:
  ::tuos_interfaces::srv::NumberGame_Response msg_;
};

class Init_NumberGame_Response_guesses
{
public:
  Init_NumberGame_Response_guesses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NumberGame_Response_hint guesses(::tuos_interfaces::srv::NumberGame_Response::_guesses_type arg)
  {
    msg_.guesses = std::move(arg);
    return Init_NumberGame_Response_hint(msg_);
  }

private:
  ::tuos_interfaces::srv::NumberGame_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::srv::NumberGame_Response>()
{
  return tuos_interfaces::srv::builder::Init_NumberGame_Response_guesses();
}

}  // namespace tuos_interfaces

#endif  // TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__BUILDER_HPP_
