// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:srv/DescribeParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/srv/describe_parameters__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/srv/describe_parameters__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_member_array[1] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__DescribeParameters_Request, names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "DescribeParameters_Request",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__DescribeParameters_Request),
  DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_type_support_handle = {
  0,
  &DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Request)() {
  if (!DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_type_support_handle.typesupport_identifier) {
    DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DescribeParameters_Request__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rcl_interfaces/srv/describe_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rcl_interfaces/srv/describe_parameters__struct.h"


// Include directives for member types
// Member `descriptors`
#include "rcl_interfaces/msg/parameter_descriptor.h"
// Member `descriptors`
#include "rcl_interfaces/msg/parameter_descriptor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t DescribeParameters_Response__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__descriptors(
  const void * untyped_member)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return member->size;
}

const void * DescribeParameters_Response__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__descriptors(
  const void * untyped_member, size_t index)
{
  const rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (const rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DescribeParameters_Response__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__descriptors(
  void * untyped_member, size_t index)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DescribeParameters_Response__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__descriptors(
  void * untyped_member, size_t size)
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence * member =
    (rcl_interfaces__msg__ParameterDescriptor__Sequence *)(untyped_member);
  rcl_interfaces__msg__ParameterDescriptor__Sequence__fini(member);
  return rcl_interfaces__msg__ParameterDescriptor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_member_array[1] = {
  {
    "descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__srv__DescribeParameters_Response, descriptors),  // bytes offset in struct
    NULL,  // default value
    DescribeParameters_Response__rosidl_typesupport_introspection_c__size_function__ParameterDescriptor__descriptors,  // size() function pointer
    DescribeParameters_Response__rosidl_typesupport_introspection_c__get_const_function__ParameterDescriptor__descriptors,  // get_const(index) function pointer
    DescribeParameters_Response__rosidl_typesupport_introspection_c__get_function__ParameterDescriptor__descriptors,  // get(index) function pointer
    DescribeParameters_Response__rosidl_typesupport_introspection_c__resize_function__ParameterDescriptor__descriptors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_members = {
  "rcl_interfaces__srv",  // message namespace
  "DescribeParameters_Response",  // message name
  1,  // number of fields
  sizeof(rcl_interfaces__srv__DescribeParameters_Response),
  DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle = {
  0,
  &DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Response)() {
  DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterDescriptor)();
  if (!DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle.typesupport_identifier) {
    DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DescribeParameters_Response__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/describe_parameters__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_members = {
  "rcl_interfaces__srv",  // service namespace
  "DescribeParameters",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_Request_message_type_support_handle,
  NULL  // response message
  // rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_Response_message_type_support_handle
};

static rosidl_service_type_support_t rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_type_support_handle = {
  0,
  &rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters)() {
  if (!rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_type_support_handle.typesupport_identifier) {
    rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, DescribeParameters_Response)()->data;
  }

  return &rcl_interfaces__srv__describe_parameters__rosidl_typesupport_introspection_c__DescribeParameters_service_type_support_handle;
}
