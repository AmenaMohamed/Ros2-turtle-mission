// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_interfaces:srv/SetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_interfaces/srv/set_destination.hpp"


#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__TRAITS_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_interfaces/srv/detail/set_destination__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDestination_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDestination_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDestination_Request & msg, bool use_flow_style = false)
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

}  // namespace turtlesim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_interfaces::srv::SetDestination_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_interfaces::srv::SetDestination_Request & msg)
{
  return turtlesim_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_interfaces::srv::SetDestination_Request>()
{
  return "turtlesim_interfaces::srv::SetDestination_Request";
}

template<>
inline const char * name<turtlesim_interfaces::srv::SetDestination_Request>()
{
  return "turtlesim_interfaces/srv/SetDestination_Request";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::SetDestination_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::SetDestination_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_interfaces::srv::SetDestination_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDestination_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reply
  {
    out << "reply: ";
    rosidl_generator_traits::value_to_yaml(msg.reply, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDestination_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reply
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reply: ";
    rosidl_generator_traits::value_to_yaml(msg.reply, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDestination_Response & msg, bool use_flow_style = false)
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

}  // namespace turtlesim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_interfaces::srv::SetDestination_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_interfaces::srv::SetDestination_Response & msg)
{
  return turtlesim_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_interfaces::srv::SetDestination_Response>()
{
  return "turtlesim_interfaces::srv::SetDestination_Response";
}

template<>
inline const char * name<turtlesim_interfaces::srv::SetDestination_Response>()
{
  return "turtlesim_interfaces/srv/SetDestination_Response";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::SetDestination_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::SetDestination_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_interfaces::srv::SetDestination_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace turtlesim_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDestination_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SetDestination_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDestination_Event & msg, bool use_flow_style = false)
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

}  // namespace turtlesim_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_interfaces::srv::SetDestination_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_interfaces::srv::SetDestination_Event & msg)
{
  return turtlesim_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_interfaces::srv::SetDestination_Event>()
{
  return "turtlesim_interfaces::srv::SetDestination_Event";
}

template<>
inline const char * name<turtlesim_interfaces::srv::SetDestination_Event>()
{
  return "turtlesim_interfaces/srv/SetDestination_Event";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::SetDestination_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::SetDestination_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<turtlesim_interfaces::srv::SetDestination_Request>::value && has_bounded_size<turtlesim_interfaces::srv::SetDestination_Response>::value> {};

template<>
struct is_message<turtlesim_interfaces::srv::SetDestination_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::SetDestination>()
{
  return "turtlesim_interfaces::srv::SetDestination";
}

template<>
inline const char * name<turtlesim_interfaces::srv::SetDestination>()
{
  return "turtlesim_interfaces/srv/SetDestination";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::SetDestination>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_interfaces::srv::SetDestination_Request>::value &&
    has_fixed_size<turtlesim_interfaces::srv::SetDestination_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::SetDestination>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_interfaces::srv::SetDestination_Request>::value &&
    has_bounded_size<turtlesim_interfaces::srv::SetDestination_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_interfaces::srv::SetDestination>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_interfaces::srv::SetDestination_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_interfaces::srv::SetDestination_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__TRAITS_HPP_
