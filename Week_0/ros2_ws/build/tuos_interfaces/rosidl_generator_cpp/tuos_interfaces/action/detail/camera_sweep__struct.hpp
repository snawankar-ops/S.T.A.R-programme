// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tuos_interfaces:action/CameraSweep.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__STRUCT_HPP_
#define TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_Goal __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_Goal_
{
  using Type = CameraSweep_Goal_<ContainerAllocator>;

  explicit CameraSweep_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sweep_angle = 0.0f;
      this->image_count = 0l;
    }
  }

  explicit CameraSweep_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sweep_angle = 0.0f;
      this->image_count = 0l;
    }
  }

  // field types and members
  using _sweep_angle_type =
    float;
  _sweep_angle_type sweep_angle;
  using _image_count_type =
    int32_t;
  _image_count_type image_count;

  // setters for named parameter idiom
  Type & set__sweep_angle(
    const float & _arg)
  {
    this->sweep_angle = _arg;
    return *this;
  }
  Type & set__image_count(
    const int32_t & _arg)
  {
    this->image_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_Goal
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_Goal
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_Goal_ & other) const
  {
    if (this->sweep_angle != other.sweep_angle) {
      return false;
    }
    if (this->image_count != other.image_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_Goal_

// alias to use template instance with default allocator
using CameraSweep_Goal =
  tuos_interfaces::action::CameraSweep_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces


#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_Result __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_Result __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_Result_
{
  using Type = CameraSweep_Result_<ContainerAllocator>;

  explicit CameraSweep_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CameraSweep_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _image_paths_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _image_paths_type image_paths;

  // setters for named parameter idiom
  Type & set__image_paths(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->image_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_Result
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_Result
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_Result_ & other) const
  {
    if (this->image_paths != other.image_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_Result_

// alias to use template instance with default allocator
using CameraSweep_Result =
  tuos_interfaces::action::CameraSweep_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces


#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_Feedback __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_Feedback_
{
  using Type = CameraSweep_Feedback_<ContainerAllocator>;

  explicit CameraSweep_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_image = 0l;
      this->current_angle = 0.0f;
    }
  }

  explicit CameraSweep_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_image = 0l;
      this->current_angle = 0.0f;
    }
  }

  // field types and members
  using _current_image_type =
    int32_t;
  _current_image_type current_image;
  using _current_angle_type =
    float;
  _current_angle_type current_angle;

  // setters for named parameter idiom
  Type & set__current_image(
    const int32_t & _arg)
  {
    this->current_image = _arg;
    return *this;
  }
  Type & set__current_angle(
    const float & _arg)
  {
    this->current_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_Feedback
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_Feedback
    std::shared_ptr<tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_Feedback_ & other) const
  {
    if (this->current_image != other.current_image) {
      return false;
    }
    if (this->current_angle != other.current_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_Feedback_

// alias to use template instance with default allocator
using CameraSweep_Feedback =
  tuos_interfaces::action::CameraSweep_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Request __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_SendGoal_Request_
{
  using Type = CameraSweep_SendGoal_Request_<ContainerAllocator>;

  explicit CameraSweep_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CameraSweep_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tuos_interfaces::action::CameraSweep_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Request
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Request
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_SendGoal_Request_

// alias to use template instance with default allocator
using CameraSweep_SendGoal_Request =
  tuos_interfaces::action::CameraSweep_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Response __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_SendGoal_Response_
{
  using Type = CameraSweep_SendGoal_Response_<ContainerAllocator>;

  explicit CameraSweep_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CameraSweep_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Response
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_SendGoal_Response
    std::shared_ptr<tuos_interfaces::action::CameraSweep_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_SendGoal_Response_

// alias to use template instance with default allocator
using CameraSweep_SendGoal_Response =
  tuos_interfaces::action::CameraSweep_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces

namespace tuos_interfaces
{

namespace action
{

struct CameraSweep_SendGoal
{
  using Request = tuos_interfaces::action::CameraSweep_SendGoal_Request;
  using Response = tuos_interfaces::action::CameraSweep_SendGoal_Response;
};

}  // namespace action

}  // namespace tuos_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Request __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_GetResult_Request_
{
  using Type = CameraSweep_GetResult_Request_<ContainerAllocator>;

  explicit CameraSweep_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CameraSweep_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Request
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Request
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_GetResult_Request_

// alias to use template instance with default allocator
using CameraSweep_GetResult_Request =
  tuos_interfaces::action::CameraSweep_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Response __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_GetResult_Response_
{
  using Type = CameraSweep_GetResult_Response_<ContainerAllocator>;

  explicit CameraSweep_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CameraSweep_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tuos_interfaces::action::CameraSweep_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Response
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_GetResult_Response
    std::shared_ptr<tuos_interfaces::action::CameraSweep_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_GetResult_Response_

// alias to use template instance with default allocator
using CameraSweep_GetResult_Response =
  tuos_interfaces::action::CameraSweep_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces

namespace tuos_interfaces
{

namespace action
{

struct CameraSweep_GetResult
{
  using Request = tuos_interfaces::action::CameraSweep_GetResult_Request;
  using Response = tuos_interfaces::action::CameraSweep_GetResult_Response;
};

}  // namespace action

}  // namespace tuos_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tuos_interfaces__action__CameraSweep_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tuos_interfaces__action__CameraSweep_FeedbackMessage __declspec(deprecated)
#endif

namespace tuos_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CameraSweep_FeedbackMessage_
{
  using Type = CameraSweep_FeedbackMessage_<ContainerAllocator>;

  explicit CameraSweep_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CameraSweep_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tuos_interfaces::action::CameraSweep_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_FeedbackMessage
    std::shared_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tuos_interfaces__action__CameraSweep_FeedbackMessage
    std::shared_ptr<tuos_interfaces::action::CameraSweep_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSweep_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSweep_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSweep_FeedbackMessage_

// alias to use template instance with default allocator
using CameraSweep_FeedbackMessage =
  tuos_interfaces::action::CameraSweep_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tuos_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tuos_interfaces
{

namespace action
{

struct CameraSweep
{
  /// The goal message defined in the action definition.
  using Goal = tuos_interfaces::action::CameraSweep_Goal;
  /// The result message defined in the action definition.
  using Result = tuos_interfaces::action::CameraSweep_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tuos_interfaces::action::CameraSweep_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tuos_interfaces::action::CameraSweep_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tuos_interfaces::action::CameraSweep_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tuos_interfaces::action::CameraSweep_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CameraSweep CameraSweep;

}  // namespace action

}  // namespace tuos_interfaces

#endif  // TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__STRUCT_HPP_
