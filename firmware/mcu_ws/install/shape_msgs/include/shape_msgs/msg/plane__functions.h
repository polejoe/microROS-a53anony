// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__PLANE__FUNCTIONS_H_
#define SHAPE_MSGS__MSG__PLANE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "shape_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "shape_msgs/msg/plane__struct.h"

/// Initialize msg/Plane message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * shape_msgs__msg__Plane
 * )) before or use
 * shape_msgs__msg__Plane__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__init(shape_msgs__msg__Plane * msg);

/// Finalize msg/Plane message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__fini(shape_msgs__msg__Plane * msg);

/// Create msg/Plane message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * shape_msgs__msg__Plane__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__Plane *
shape_msgs__msg__Plane__create();

/// Destroy msg/Plane message.
/**
 * It calls
 * shape_msgs__msg__Plane__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__destroy(shape_msgs__msg__Plane * msg);


/// Initialize array of msg/Plane messages.
/**
 * It allocates the memory for the number of elements and calls
 * shape_msgs__msg__Plane__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
bool
shape_msgs__msg__Plane__Sequence__init(shape_msgs__msg__Plane__Sequence * array, size_t size);

/// Finalize array of msg/Plane messages.
/**
 * It calls
 * shape_msgs__msg__Plane__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__Sequence__fini(shape_msgs__msg__Plane__Sequence * array);

/// Create array of msg/Plane messages.
/**
 * It allocates the memory for the array and calls
 * shape_msgs__msg__Plane__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
shape_msgs__msg__Plane__Sequence *
shape_msgs__msg__Plane__Sequence__create(size_t size);

/// Destroy array of msg/Plane messages.
/**
 * It calls
 * shape_msgs__msg__Plane__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_shape_msgs
void
shape_msgs__msg__Plane__Sequence__destroy(shape_msgs__msg__Plane__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__PLANE__FUNCTIONS_H_
