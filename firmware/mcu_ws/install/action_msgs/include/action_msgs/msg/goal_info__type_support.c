// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_msgs:msg/GoalInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_msgs/msg/goal_info__rosidl_typesupport_introspection_c.h"
#include "action_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_msgs/msg/goal_info__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs__msg__GoalInfo, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs__msg__GoalInfo, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_members = {
  "action_msgs__msg",  // message namespace
  "GoalInfo",  // message name
  2,  // number of fields
  sizeof(action_msgs__msg__GoalInfo),
  GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_type_support_handle = {
  0,
  &GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_msgs, msg, GoalInfo)() {
  GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_type_support_handle.typesupport_identifier) {
    GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalInfo__rosidl_typesupport_introspection_c__GoalInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
