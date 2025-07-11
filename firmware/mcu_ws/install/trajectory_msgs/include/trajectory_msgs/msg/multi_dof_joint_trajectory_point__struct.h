// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/transform__struct.h"
// Member 'velocities'
// Member 'accelerations'
#include "geometry_msgs/msg/twist__struct.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/duration__struct.h"

// Struct defined in msg/MultiDOFJointTrajectoryPoint in the package trajectory_msgs.
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectoryPoint
{
  geometry_msgs__msg__Transform__Sequence transforms;
  geometry_msgs__msg__Twist__Sequence velocities;
  geometry_msgs__msg__Twist__Sequence accelerations;
  builtin_interfaces__msg__Duration time_from_start;
} trajectory_msgs__msg__MultiDOFJointTrajectoryPoint;

// Struct for a sequence of trajectory_msgs__msg__MultiDOFJointTrajectoryPoint.
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence
{
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_
