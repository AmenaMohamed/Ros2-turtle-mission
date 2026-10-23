// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from turtlesim_interfaces:srv/SetDestination.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "turtlesim_interfaces/srv/detail/set_destination__struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim_interfaces/srv/detail/set_destination__functions.h"
#include "turtlesim_interfaces/srv/detail/set_destination__type_support.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  turtlesim_interfaces,
  srv,
  SetDestination
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  turtlesim_interfaces__srv__SetDestination_Event * event_msg = (turtlesim_interfaces__srv__SetDestination_Event *)(allocator->allocate(sizeof(turtlesim_interfaces__srv__SetDestination_Event), allocator->state));
  if (!turtlesim_interfaces__srv__SetDestination_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    turtlesim_interfaces__srv__SetDestination_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!turtlesim_interfaces__srv__SetDestination_Request__copy((const turtlesim_interfaces__srv__SetDestination_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    turtlesim_interfaces__srv__SetDestination_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!turtlesim_interfaces__srv__SetDestination_Response__copy((const turtlesim_interfaces__srv__SetDestination_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  turtlesim_interfaces,
  srv,
  SetDestination
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  turtlesim_interfaces__srv__SetDestination_Event * _event_msg = (turtlesim_interfaces__srv__SetDestination_Event *)(event_msg);

  turtlesim_interfaces__srv__SetDestination_Event__fini((turtlesim_interfaces__srv__SetDestination_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
