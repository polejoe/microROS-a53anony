// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lifecycle_msgs:srv/GetAvailableStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lifecycle_msgs/srv/get_available_states__rosidl_typesupport_introspection_c.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lifecycle_msgs/srv/get_available_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs__srv__GetAvailableStates_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_members = {
  "lifecycle_msgs__srv",  // message namespace
  "GetAvailableStates_Request",  // message name
  1,  // number of fields
  sizeof(lifecycle_msgs__srv__GetAvailableStates_Request),
  GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_type_support_handle = {
  0,
  &GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates_Request)() {
  if (!GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_type_support_handle.typesupport_identifier) {
    GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAvailableStates_Request__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lifecycle_msgs/srv/get_available_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lifecycle_msgs/srv/get_available_states__struct.h"


// Include directives for member types
// Member `available_states`
#include "lifecycle_msgs/msg/state.h"
// Member `available_states`
#include "lifecycle_msgs/msg/state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t GetAvailableStates_Response__rosidl_typesupport_introspection_c__size_function__State__available_states(
  const void * untyped_member)
{
  const lifecycle_msgs__msg__State__Sequence * member =
    (const lifecycle_msgs__msg__State__Sequence *)(untyped_member);
  return member->size;
}

const void * GetAvailableStates_Response__rosidl_typesupport_introspection_c__get_const_function__State__available_states(
  const void * untyped_member, size_t index)
{
  const lifecycle_msgs__msg__State__Sequence * member =
    (const lifecycle_msgs__msg__State__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetAvailableStates_Response__rosidl_typesupport_introspection_c__get_function__State__available_states(
  void * untyped_member, size_t index)
{
  lifecycle_msgs__msg__State__Sequence * member =
    (lifecycle_msgs__msg__State__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetAvailableStates_Response__rosidl_typesupport_introspection_c__resize_function__State__available_states(
  void * untyped_member, size_t size)
{
  lifecycle_msgs__msg__State__Sequence * member =
    (lifecycle_msgs__msg__State__Sequence *)(untyped_member);
  lifecycle_msgs__msg__State__Sequence__fini(member);
  return lifecycle_msgs__msg__State__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_member_array[1] = {
  {
    "available_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs__srv__GetAvailableStates_Response, available_states),  // bytes offset in struct
    NULL,  // default value
    GetAvailableStates_Response__rosidl_typesupport_introspection_c__size_function__State__available_states,  // size() function pointer
    GetAvailableStates_Response__rosidl_typesupport_introspection_c__get_const_function__State__available_states,  // get_const(index) function pointer
    GetAvailableStates_Response__rosidl_typesupport_introspection_c__get_function__State__available_states,  // get(index) function pointer
    GetAvailableStates_Response__rosidl_typesupport_introspection_c__resize_function__State__available_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_members = {
  "lifecycle_msgs__srv",  // message namespace
  "GetAvailableStates_Response",  // message name
  1,  // number of fields
  sizeof(lifecycle_msgs__srv__GetAvailableStates_Response),
  GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_type_support_handle = {
  0,
  &GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates_Response)() {
  GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, msg, State)();
  if (!GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_type_support_handle.typesupport_identifier) {
    GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAvailableStates_Response__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lifecycle_msgs/srv/get_available_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_members = {
  "lifecycle_msgs__srv",  // service namespace
  "GetAvailableStates",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_Request_message_type_support_handle,
  NULL  // response message
  // lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_Response_message_type_support_handle
};

static rosidl_service_type_support_t lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_type_support_handle = {
  0,
  &lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lifecycle_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates)() {
  if (!lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_type_support_handle.typesupport_identifier) {
    lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableStates_Response)()->data;
  }

  return &lifecycle_msgs__srv__get_available_states__rosidl_typesupport_introspection_c__GetAvailableStates_service_type_support_handle;
}
