// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from builtin_interfaces:msg/Duration.idl
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__DURATION__FUNCTIONS_H_
#define BUILTIN_INTERFACES__MSG__DURATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "builtin_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "builtin_interfaces/msg/duration__struct.h"

/// Initialize msg/Duration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * builtin_interfaces__msg__Duration
 * )) before or use
 * builtin_interfaces__msg__Duration__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
bool
builtin_interfaces__msg__Duration__init(builtin_interfaces__msg__Duration * msg);

/// Finalize msg/Duration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
void
builtin_interfaces__msg__Duration__fini(builtin_interfaces__msg__Duration * msg);

/// Create msg/Duration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * builtin_interfaces__msg__Duration__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
builtin_interfaces__msg__Duration *
builtin_interfaces__msg__Duration__create();

/// Destroy msg/Duration message.
/**
 * It calls
 * builtin_interfaces__msg__Duration__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
void
builtin_interfaces__msg__Duration__destroy(builtin_interfaces__msg__Duration * msg);


/// Initialize array of msg/Duration messages.
/**
 * It allocates the memory for the number of elements and calls
 * builtin_interfaces__msg__Duration__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
bool
builtin_interfaces__msg__Duration__Sequence__init(builtin_interfaces__msg__Duration__Sequence * array, size_t size);

/// Finalize array of msg/Duration messages.
/**
 * It calls
 * builtin_interfaces__msg__Duration__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
void
builtin_interfaces__msg__Duration__Sequence__fini(builtin_interfaces__msg__Duration__Sequence * array);

/// Create array of msg/Duration messages.
/**
 * It allocates the memory for the array and calls
 * builtin_interfaces__msg__Duration__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
builtin_interfaces__msg__Duration__Sequence *
builtin_interfaces__msg__Duration__Sequence__create(size_t size);

/// Destroy array of msg/Duration messages.
/**
 * It calls
 * builtin_interfaces__msg__Duration__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_builtin_interfaces
void
builtin_interfaces__msg__Duration__Sequence__destroy(builtin_interfaces__msg__Duration__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BUILTIN_INTERFACES__MSG__DURATION__FUNCTIONS_H_
