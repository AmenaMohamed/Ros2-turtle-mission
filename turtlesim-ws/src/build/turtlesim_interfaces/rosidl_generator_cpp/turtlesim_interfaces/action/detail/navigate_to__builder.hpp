// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_interfaces:action/NavigateTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_interfaces/action/navigate_to.hpp"


#ifndef TURTLESIM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO__BUILDER_HPP_
#define TURTLESIM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_interfaces/action/detail/navigate_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_Goal_y
{
public:
  explicit Init_NavigateTo_Goal_y(::turtlesim_interfaces::action::NavigateTo_Goal & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_Goal y(::turtlesim_interfaces::action::NavigateTo_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_Goal msg_;
};

class Init_NavigateTo_Goal_x
{
public:
  Init_NavigateTo_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_Goal_y x(::turtlesim_interfaces::action::NavigateTo_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NavigateTo_Goal_y(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_Goal>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_Goal_x();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_Result_state
{
public:
  Init_NavigateTo_Result_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_interfaces::action::NavigateTo_Result state(::turtlesim_interfaces::action::NavigateTo_Result::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_Result>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_Result_state();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_Feedback_y
{
public:
  explicit Init_NavigateTo_Feedback_y(::turtlesim_interfaces::action::NavigateTo_Feedback & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_Feedback y(::turtlesim_interfaces::action::NavigateTo_Feedback::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_Feedback msg_;
};

class Init_NavigateTo_Feedback_x
{
public:
  Init_NavigateTo_Feedback_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_Feedback_y x(::turtlesim_interfaces::action::NavigateTo_Feedback::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NavigateTo_Feedback_y(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_Feedback>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_Feedback_x();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_SendGoal_Request_goal
{
public:
  explicit Init_NavigateTo_SendGoal_Request_goal(::turtlesim_interfaces::action::NavigateTo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Request goal(::turtlesim_interfaces::action::NavigateTo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Request msg_;
};

class Init_NavigateTo_SendGoal_Request_goal_id
{
public:
  Init_NavigateTo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_SendGoal_Request_goal goal_id(::turtlesim_interfaces::action::NavigateTo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateTo_SendGoal_Request_goal(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_SendGoal_Request>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_SendGoal_Request_goal_id();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_SendGoal_Response_stamp
{
public:
  explicit Init_NavigateTo_SendGoal_Response_stamp(::turtlesim_interfaces::action::NavigateTo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Response stamp(::turtlesim_interfaces::action::NavigateTo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Response msg_;
};

class Init_NavigateTo_SendGoal_Response_accepted
{
public:
  Init_NavigateTo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_SendGoal_Response_stamp accepted(::turtlesim_interfaces::action::NavigateTo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavigateTo_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_SendGoal_Response>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_SendGoal_Response_accepted();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_SendGoal_Event_response
{
public:
  explicit Init_NavigateTo_SendGoal_Event_response(::turtlesim_interfaces::action::NavigateTo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Event response(::turtlesim_interfaces::action::NavigateTo_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Event msg_;
};

class Init_NavigateTo_SendGoal_Event_request
{
public:
  explicit Init_NavigateTo_SendGoal_Event_request(::turtlesim_interfaces::action::NavigateTo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_NavigateTo_SendGoal_Event_response request(::turtlesim_interfaces::action::NavigateTo_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_NavigateTo_SendGoal_Event_response(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Event msg_;
};

class Init_NavigateTo_SendGoal_Event_info
{
public:
  Init_NavigateTo_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_SendGoal_Event_request info(::turtlesim_interfaces::action::NavigateTo_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_NavigateTo_SendGoal_Event_request(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_SendGoal_Event>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_SendGoal_Event_info();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_GetResult_Request_goal_id
{
public:
  Init_NavigateTo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Request goal_id(::turtlesim_interfaces::action::NavigateTo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_GetResult_Request>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_GetResult_Request_goal_id();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_GetResult_Response_result
{
public:
  explicit Init_NavigateTo_GetResult_Response_result(::turtlesim_interfaces::action::NavigateTo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Response result(::turtlesim_interfaces::action::NavigateTo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Response msg_;
};

class Init_NavigateTo_GetResult_Response_status
{
public:
  Init_NavigateTo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_GetResult_Response_result status(::turtlesim_interfaces::action::NavigateTo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavigateTo_GetResult_Response_result(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_GetResult_Response>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_GetResult_Response_status();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_GetResult_Event_response
{
public:
  explicit Init_NavigateTo_GetResult_Event_response(::turtlesim_interfaces::action::NavigateTo_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Event response(::turtlesim_interfaces::action::NavigateTo_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Event msg_;
};

class Init_NavigateTo_GetResult_Event_request
{
public:
  explicit Init_NavigateTo_GetResult_Event_request(::turtlesim_interfaces::action::NavigateTo_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_NavigateTo_GetResult_Event_response request(::turtlesim_interfaces::action::NavigateTo_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_NavigateTo_GetResult_Event_response(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Event msg_;
};

class Init_NavigateTo_GetResult_Event_info
{
public:
  Init_NavigateTo_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_GetResult_Event_request info(::turtlesim_interfaces::action::NavigateTo_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_NavigateTo_GetResult_Event_request(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_GetResult_Event>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_GetResult_Event_info();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace action
{

namespace builder
{

class Init_NavigateTo_FeedbackMessage_feedback
{
public:
  explicit Init_NavigateTo_FeedbackMessage_feedback(::turtlesim_interfaces::action::NavigateTo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::action::NavigateTo_FeedbackMessage feedback(::turtlesim_interfaces::action::NavigateTo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_FeedbackMessage msg_;
};

class Init_NavigateTo_FeedbackMessage_goal_id
{
public:
  Init_NavigateTo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigateTo_FeedbackMessage_feedback goal_id(::turtlesim_interfaces::action::NavigateTo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavigateTo_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtlesim_interfaces::action::NavigateTo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::action::NavigateTo_FeedbackMessage>()
{
  return turtlesim_interfaces::action::builder::Init_NavigateTo_FeedbackMessage_goal_id();
}

}  // namespace turtlesim_interfaces

#endif  // TURTLESIM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO__BUILDER_HPP_
