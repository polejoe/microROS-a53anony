// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from composition_interfaces:srv/UnloadNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "composition_interfaces/srv/unload_node__rosidl_typesupport_introspection_c.h"
#include "composition_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "composition_interfaces/srv/unload_node__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_member_array[1] = {
  {
    "unique_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition_interfaces__srv__UnloadNode_Request, unique_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_members = {
  "composition_interfaces__srv",  // message namespace
  "UnloadNode_Request",  // message name
  1,  // number of fields
  sizeof(composition_interfaces__srv__UnloadNode_Request),
  UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_type_support_handle = {
  0,
  &UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode_Request)() {
  if (!UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_type_support_handle.typesupport_identifier) {
    UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnloadNode_Request__rosidl_typesupport_introspection_c__UnloadNode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "composition_interfaces/srv/unload_node__rosidl_typesupport_introspection_c.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "composition_interfaces/srv/unload_node__struct.h"


// Include directives for member types
// Member `error_message`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition_interfaces__srv__UnloadNode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(composition_interfaces__srv__UnloadNode_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_members = {
  "composition_interfaces__srv",  // message namespace
  "UnloadNode_Response",  // message name
  2,  // number of fields
  sizeof(composition_interfaces__srv__UnloadNode_Response),
  UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_type_support_handle = {
  0,
  &UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode_Response)() {
  if (!UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_type_support_handle.typesupport_identifier) {
    UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnloadNode_Response__rosidl_typesupport_introspection_c__UnloadNode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/unload_node__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_members = {
  "composition_interfaces__srv",  // service namespace
  "UnloadNode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_Request_message_type_support_handle,
  NULL  // response message
  // composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_Response_message_type_support_handle
};

static rosidl_service_type_support_t composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_type_support_handle = {
  0,
  &composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_composition_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode)() {
  if (!composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_type_support_handle.typesupport_identifier) {
    composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, composition_interfaces, srv, UnloadNode_Response)()->data;
  }

  return &composition_interfaces__srv__unload_node__rosidl_typesupport_introspection_c__UnloadNode_service_type_support_handle;
}
