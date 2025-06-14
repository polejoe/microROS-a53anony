// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"
// Member 'id'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/GoalID in the package actionlib_msgs.
typedef struct actionlib_msgs__msg__GoalID
{
  builtin_interfaces__msg__Time stamp;
  rosidl_generator_c__String id;
} actionlib_msgs__msg__GoalID;

// Struct for a sequence of actionlib_msgs__msg__GoalID.
typedef struct actionlib_msgs__msg__GoalID__Sequence
{
  actionlib_msgs__msg__GoalID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_H_
