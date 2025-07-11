// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_msgs/msg/goal_status_array__rosidl_typesupport_introspection_c.h"
#include "action_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_msgs/msg/goal_status_array__struct.h"


// Include directives for member types
// Member `status_list`
#include "action_msgs/msg/goal_status.h"
// Member `status_list`
#include "action_msgs/msg/goal_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t GoalStatusArray__rosidl_typesupport_introspection_c__size_function__GoalStatus__status_list(
  const void * untyped_member)
{
  const action_msgs__msg__GoalStatus__Sequence * member =
    (const action_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * GoalStatusArray__rosidl_typesupport_introspection_c__get_const_function__GoalStatus__status_list(
  const void * untyped_member, size_t index)
{
  const action_msgs__msg__GoalStatus__Sequence * member =
    (const action_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GoalStatusArray__rosidl_typesupport_introspection_c__get_function__GoalStatus__status_list(
  void * untyped_member, size_t index)
{
  action_msgs__msg__GoalStatus__Sequence * member =
    (action_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GoalStatusArray__rosidl_typesupport_introspection_c__resize_function__GoalStatus__status_list(
  void * untyped_member, size_t size)
{
  action_msgs__msg__GoalStatus__Sequence * member =
    (action_msgs__msg__GoalStatus__Sequence *)(untyped_member);
  action_msgs__msg__GoalStatus__Sequence__fini(member);
  return action_msgs__msg__GoalStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[1] = {
  {
    "status_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_msgs__msg__GoalStatusArray, status_list),  // bytes offset in struct
    NULL,  // default value
    GoalStatusArray__rosidl_typesupport_introspection_c__size_function__GoalStatus__status_list,  // size() function pointer
    GoalStatusArray__rosidl_typesupport_introspection_c__get_const_function__GoalStatus__status_list,  // get_const(index) function pointer
    GoalStatusArray__rosidl_typesupport_introspection_c__get_function__GoalStatus__status_list,  // get(index) function pointer
    GoalStatusArray__rosidl_typesupport_introspection_c__resize_function__GoalStatus__status_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_members = {
  "action_msgs__msg",  // message namespace
  "GoalStatusArray",  // message name
  1,  // number of fields
  sizeof(action_msgs__msg__GoalStatusArray),
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle = {
  0,
  &GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_msgs, msg, GoalStatusArray)() {
  GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_msgs, msg, GoalStatus)();
  if (!GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle.typesupport_identifier) {
    GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalStatusArray__rosidl_typesupport_introspection_c__GoalStatusArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
