// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tuos_interfaces:srv/NumberGame.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__STRUCT_HPP_
#define TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__srv__NumberGame_Request __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__srv__NumberGame_Request __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NumberGame_Request_
{
  using Type = NumberGame_Request_<ContainerAllocator>;

  explicit NumberGame_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guess = 0l;
    }
  }

  explicit NumberGame_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guess = 0l;
    }
  }

  // field types and members
  using _guess_type =
    int32_t;
  _guess_type guess;

  // setters for named parameter idiom
  Type & set__guess(
    const int32_t & _arg)
  {
    this->guess = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__srv__NumberGame_Request
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__srv__NumberGame_Request
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumberGame_Request_ & other) const
  {
    if (this->guess != other.guess) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumberGame_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumberGame_Request_

// alias to use template instance with default allocator
using NumberGame_Request =
  tuos_interfaces::srv::NumberGame_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tuos_interfaces


#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__srv__NumberGame_Response __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__srv__NumberGame_Response __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NumberGame_Response_
{
  using Type = NumberGame_Response_<ContainerAllocator>;

  explicit NumberGame_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guesses = 0l;
      this->hint = "";
      this->success = false;
    }
  }

  explicit NumberGame_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hint(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guesses = 0l;
      this->hint = "";
      this->success = false;
    }
  }

  // field types and members
  using _guesses_type =
    int32_t;
  _guesses_type guesses;
  using _hint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hint_type hint;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__guesses(
    const int32_t & _arg)
  {
    this->guesses = _arg;
    return *this;
  }
  Type & set__hint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hint = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__srv__NumberGame_Response
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__srv__NumberGame_Response
    std::shared_ptr<tuos_interfaces::srv::NumberGame_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumberGame_Response_ & other) const
  {
    if (this->guesses != other.guesses) {
      return false;
    }
    if (this->hint != other.hint) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumberGame_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumberGame_Response_

// alias to use template instance with default allocator
using NumberGame_Response =
  tuos_interfaces::srv::NumberGame_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tuos_interfaces

namespace tuos_interfaces
{

namespace srv
{

struct NumberGame
{
  using Request = tuos_interfaces::srv::NumberGame_Request;
  using Response = tuos_interfaces::srv::NumberGame_Response;
};

}  // namespace srv

}  // namespace tuos_interfaces

#endif  // TUOS_INTERFACES__SRV__DETAIL__NUMBER_GAME__STRUCT_HPP_
