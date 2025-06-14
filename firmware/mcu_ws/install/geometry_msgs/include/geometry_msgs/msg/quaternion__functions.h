// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__QUATERNION__FUNCTIONS_H_
#define GEOMETRY_MSGS__MSG__QUATERNION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "geometry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geometry_msgs/msg/quaternion__struct.h"

/// Initialize msg/Quaternion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geometry_msgs__msg__Quaternion
 * )) before or use
 * geometry_msgs__msg__Quaternion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__Quaternion__init(geometry_msgs__msg__Quaternion * msg);

/// Finalize msg/Quaternion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Quaternion__fini(geometry_msgs__msg__Quaternion * msg);

/// Create msg/Quaternion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geometry_msgs__msg__Quaternion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__Quaternion *
geometry_msgs__msg__Quaternion__create();

/// Destroy msg/Quaternion message.
/**
 * It calls
 * geometry_msgs__msg__Quaternion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Quaternion__destroy(geometry_msgs__msg__Quaternion * msg);


/// Initialize array of msg/Quaternion messages.
/**
 * It allocates the memory for the number of elements and calls
 * geometry_msgs__msg__Quaternion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
bool
geometry_msgs__msg__Quaternion__Sequence__init(geometry_msgs__msg__Quaternion__Sequence * array, size_t size);

/// Finalize array of msg/Quaternion messages.
/**
 * It calls
 * geometry_msgs__msg__Quaternion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Quaternion__Sequence__fini(geometry_msgs__msg__Quaternion__Sequence * array);

/// Create array of msg/Quaternion messages.
/**
 * It allocates the memory for the array and calls
 * geometry_msgs__msg__Quaternion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
geometry_msgs__msg__Quaternion__Sequence *
geometry_msgs__msg__Quaternion__Sequence__create(size_t size);

/// Destroy array of msg/Quaternion messages.
/**
 * It calls
 * geometry_msgs__msg__Quaternion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geometry_msgs
void
geometry_msgs__msg__Quaternion__Sequence__destroy(geometry_msgs__msg__Quaternion__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__QUATERNION__FUNCTIONS_H_
