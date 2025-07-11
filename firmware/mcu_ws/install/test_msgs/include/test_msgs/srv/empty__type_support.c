// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/srv/empty__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/srv/empty__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__srv__Empty_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_members = {
  "test_msgs__srv",  // message namespace
  "Empty_Request",  // message name
  1,  // number of fields
  sizeof(test_msgs__srv__Empty_Request),
  Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_type_support_handle = {
  0,
  &Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty_Request)() {
  if (!Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_type_support_handle.typesupport_identifier) {
    Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_Request__rosidl_typesupport_introspection_c__Empty_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "test_msgs/srv/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "test_msgs/srv/empty__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__srv__Empty_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_members = {
  "test_msgs__srv",  // message namespace
  "Empty_Response",  // message name
  1,  // number of fields
  sizeof(test_msgs__srv__Empty_Response),
  Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_type_support_handle = {
  0,
  &Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty_Response)() {
  if (!Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_type_support_handle.typesupport_identifier) {
    Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_Response__rosidl_typesupport_introspection_c__Empty_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "test_msgs/srv/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_members = {
  "test_msgs__srv",  // service namespace
  "Empty",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_Request_message_type_support_handle,
  NULL  // response message
  // test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_Response_message_type_support_handle
};

static rosidl_service_type_support_t test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_type_support_handle = {
  0,
  &test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty)() {
  if (!test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_type_support_handle.typesupport_identifier) {
    test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Empty_Response)()->data;
  }

  return &test_msgs__srv__empty__rosidl_typesupport_introspection_c__Empty_service_type_support_handle;
}
