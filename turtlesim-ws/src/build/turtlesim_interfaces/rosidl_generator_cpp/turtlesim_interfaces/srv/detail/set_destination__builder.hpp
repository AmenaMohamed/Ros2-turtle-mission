// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_interfaces:srv/SetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_interfaces/srv/set_destination.hpp"


#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__BUILDER_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_interfaces/srv/detail/set_destination__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDestination_Request_y
{
public:
  explicit Init_SetDestination_Request_y(::turtlesim_interfaces::srv::SetDestination_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::srv::SetDestination_Request y(::turtlesim_interfaces::srv::SetDestination_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetDestination_Request msg_;
};

class Init_SetDestination_Request_x
{
public:
  Init_SetDestination_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDestination_Request_y x(::turtlesim_interfaces::srv::SetDestination_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetDestination_Request_y(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetDestination_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::SetDestination_Request>()
{
  return turtlesim_interfaces::srv::builder::Init_SetDestination_Request_x();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDestination_Response_reply
{
public:
  Init_SetDestination_Response_reply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_interfaces::srv::SetDestination_Response reply(::turtlesim_interfaces::srv::SetDestination_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetDestination_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::SetDestination_Response>()
{
  return turtlesim_interfaces::srv::builder::Init_SetDestination_Response_reply();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDestination_Event_response
{
public:
  explicit Init_SetDestination_Event_response(::turtlesim_interfaces::srv::SetDestination_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim_interfaces::srv::SetDestination_Event response(::turtlesim_interfaces::srv::SetDestination_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetDestination_Event msg_;
};

class Init_SetDestination_Event_request
{
public:
  explicit Init_SetDestination_Event_request(::turtlesim_interfaces::srv::SetDestination_Event & msg)
  : msg_(msg)
  {}
  Init_SetDestination_Event_response request(::turtlesim_interfaces::srv::SetDestination_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetDestination_Event_response(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetDestination_Event msg_;
};

class Init_SetDestination_Event_info
{
public:
  Init_SetDestination_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDestination_Event_request info(::turtlesim_interfaces::srv::SetDestination_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetDestination_Event_request(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetDestination_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::SetDestination_Event>()
{
  return turtlesim_interfaces::srv::builder::Init_SetDestination_Event_info();
}

}  // namespace turtlesim_interfaces

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__BUILDER_HPP_
