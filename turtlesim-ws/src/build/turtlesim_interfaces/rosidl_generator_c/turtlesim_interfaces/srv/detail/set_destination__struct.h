// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_interfaces:srv/SetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_interfaces/srv/set_destination.h"


#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__STRUCT_H_
#define TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetDestination in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__srv__SetDestination_Request
{
  float x;
  float y;
} turtlesim_interfaces__srv__SetDestination_Request;

// Struct for a sequence of turtlesim_interfaces__srv__SetDestination_Request.
typedef struct turtlesim_interfaces__srv__SetDestination_Request__Sequence
{
  turtlesim_interfaces__srv__SetDestination_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__srv__SetDestination_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetDestination in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__srv__SetDestination_Response
{
  bool reply;
} turtlesim_interfaces__srv__SetDestination_Response;

// Struct for a sequence of turtlesim_interfaces__srv__SetDestination_Response.
typedef struct turtlesim_interfaces__srv__SetDestination_Response__Sequence
{
  turtlesim_interfaces__srv__SetDestination_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__srv__SetDestination_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim_interfaces__srv__SetDestination_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim_interfaces__srv__SetDestination_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetDestination in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__srv__SetDestination_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim_interfaces__srv__SetDestination_Request__Sequence request;
  turtlesim_interfaces__srv__SetDestination_Response__Sequence response;
} turtlesim_interfaces__srv__SetDestination_Event;

// Struct for a sequence of turtlesim_interfaces__srv__SetDestination_Event.
typedef struct turtlesim_interfaces__srv__SetDestination_Event__Sequence
{
  turtlesim_interfaces__srv__SetDestination_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__srv__SetDestination_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__SET_DESTINATION__STRUCT_H_
