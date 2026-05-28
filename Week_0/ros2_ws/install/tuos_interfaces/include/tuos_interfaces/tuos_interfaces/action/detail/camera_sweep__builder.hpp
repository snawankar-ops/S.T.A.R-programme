// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tuos_interfaces:action/CameraSweep.idl
// generated code does not contain a copyright notice

#ifndef TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__BUILDER_HPP_
#define TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_Goal_image_count
{
public:
  explicit Init_CameraSweep_Goal_image_count(::tuos_interfaces::action::CameraSweep_Goal & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::action::CameraSweep_Goal image_count(::tuos_interfaces::action::CameraSweep_Goal::_image_count_type arg)
  {
    msg_.image_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_Goal msg_;
};

class Init_CameraSweep_Goal_sweep_angle
{
public:
  Init_CameraSweep_Goal_sweep_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSweep_Goal_image_count sweep_angle(::tuos_interfaces::action::CameraSweep_Goal::_sweep_angle_type arg)
  {
    msg_.sweep_angle = std::move(arg);
    return Init_CameraSweep_Goal_image_count(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_Goal>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_Goal_sweep_angle();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_Result_image_paths
{
public:
  Init_CameraSweep_Result_image_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuos_interfaces::action::CameraSweep_Result image_paths(::tuos_interfaces::action::CameraSweep_Result::_image_paths_type arg)
  {
    msg_.image_paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_Result>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_Result_image_paths();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_Feedback_current_angle
{
public:
  explicit Init_CameraSweep_Feedback_current_angle(::tuos_interfaces::action::CameraSweep_Feedback & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::action::CameraSweep_Feedback current_angle(::tuos_interfaces::action::CameraSweep_Feedback::_current_angle_type arg)
  {
    msg_.current_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_Feedback msg_;
};

class Init_CameraSweep_Feedback_current_image
{
public:
  Init_CameraSweep_Feedback_current_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSweep_Feedback_current_angle current_image(::tuos_interfaces::action::CameraSweep_Feedback::_current_image_type arg)
  {
    msg_.current_image = std::move(arg);
    return Init_CameraSweep_Feedback_current_angle(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_Feedback>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_Feedback_current_image();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_SendGoal_Request_goal
{
public:
  explicit Init_CameraSweep_SendGoal_Request_goal(::tuos_interfaces::action::CameraSweep_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::action::CameraSweep_SendGoal_Request goal(::tuos_interfaces::action::CameraSweep_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_SendGoal_Request msg_;
};

class Init_CameraSweep_SendGoal_Request_goal_id
{
public:
  Init_CameraSweep_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSweep_SendGoal_Request_goal goal_id(::tuos_interfaces::action::CameraSweep_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CameraSweep_SendGoal_Request_goal(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_SendGoal_Request>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_SendGoal_Request_goal_id();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_SendGoal_Response_stamp
{
public:
  explicit Init_CameraSweep_SendGoal_Response_stamp(::tuos_interfaces::action::CameraSweep_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::action::CameraSweep_SendGoal_Response stamp(::tuos_interfaces::action::CameraSweep_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_SendGoal_Response msg_;
};

class Init_CameraSweep_SendGoal_Response_accepted
{
public:
  Init_CameraSweep_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSweep_SendGoal_Response_stamp accepted(::tuos_interfaces::action::CameraSweep_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CameraSweep_SendGoal_Response_stamp(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_SendGoal_Response>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_SendGoal_Response_accepted();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_GetResult_Request_goal_id
{
public:
  Init_CameraSweep_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tuos_interfaces::action::CameraSweep_GetResult_Request goal_id(::tuos_interfaces::action::CameraSweep_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_GetResult_Request>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_GetResult_Request_goal_id();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_GetResult_Response_result
{
public:
  explicit Init_CameraSweep_GetResult_Response_result(::tuos_interfaces::action::CameraSweep_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::action::CameraSweep_GetResult_Response result(::tuos_interfaces::action::CameraSweep_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_GetResult_Response msg_;
};

class Init_CameraSweep_GetResult_Response_status
{
public:
  Init_CameraSweep_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSweep_GetResult_Response_result status(::tuos_interfaces::action::CameraSweep_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CameraSweep_GetResult_Response_result(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_GetResult_Response>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_GetResult_Response_status();
}

}  // namespace tuos_interfaces


namespace tuos_interfaces
{

namespace action
{

namespace builder
{

class Init_CameraSweep_FeedbackMessage_feedback
{
public:
  explicit Init_CameraSweep_FeedbackMessage_feedback(::tuos_interfaces::action::CameraSweep_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tuos_interfaces::action::CameraSweep_FeedbackMessage feedback(::tuos_interfaces::action::CameraSweep_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_FeedbackMessage msg_;
};

class Init_CameraSweep_FeedbackMessage_goal_id
{
public:
  Init_CameraSweep_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSweep_FeedbackMessage_feedback goal_id(::tuos_interfaces::action::CameraSweep_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CameraSweep_FeedbackMessage_feedback(msg_);
  }

private:
  ::tuos_interfaces::action::CameraSweep_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tuos_interfaces::action::CameraSweep_FeedbackMessage>()
{
  return tuos_interfaces::action::builder::Init_CameraSweep_FeedbackMessage_goal_id();
}

}  // namespace tuos_interfaces

#endif  // TUOS_INTERFACES__ACTION__DETAIL__CAMERA_SWEEP__BUILDER_HPP_
