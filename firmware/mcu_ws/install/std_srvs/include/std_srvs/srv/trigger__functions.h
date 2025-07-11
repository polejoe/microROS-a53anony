// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__TRIGGER__FUNCTIONS_H_
#define STD_SRVS__SRV__TRIGGER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "std_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "std_srvs/srv/trigger__struct.h"

/// Initialize srv/Trigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * std_srvs__srv__Trigger_Request
 * )) before or use
 * std_srvs__srv__Trigger_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
bool
std_srvs__srv__Trigger_Request__init(std_srvs__srv__Trigger_Request * msg);

/// Finalize srv/Trigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Request__fini(std_srvs__srv__Trigger_Request * msg);

/// Create srv/Trigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * std_srvs__srv__Trigger_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
std_srvs__srv__Trigger_Request *
std_srvs__srv__Trigger_Request__create();

/// Destroy srv/Trigger message.
/**
 * It calls
 * std_srvs__srv__Trigger_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Request__destroy(std_srvs__srv__Trigger_Request * msg);


/// Initialize array of srv/Trigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * std_srvs__srv__Trigger_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
bool
std_srvs__srv__Trigger_Request__Sequence__init(std_srvs__srv__Trigger_Request__Sequence * array, size_t size);

/// Finalize array of srv/Trigger messages.
/**
 * It calls
 * std_srvs__srv__Trigger_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Request__Sequence__fini(std_srvs__srv__Trigger_Request__Sequence * array);

/// Create array of srv/Trigger messages.
/**
 * It allocates the memory for the array and calls
 * std_srvs__srv__Trigger_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
std_srvs__srv__Trigger_Request__Sequence *
std_srvs__srv__Trigger_Request__Sequence__create(size_t size);

/// Destroy array of srv/Trigger messages.
/**
 * It calls
 * std_srvs__srv__Trigger_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Request__Sequence__destroy(std_srvs__srv__Trigger_Request__Sequence * array);

/// Initialize srv/Trigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * std_srvs__srv__Trigger_Response
 * )) before or use
 * std_srvs__srv__Trigger_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
bool
std_srvs__srv__Trigger_Response__init(std_srvs__srv__Trigger_Response * msg);

/// Finalize srv/Trigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Response__fini(std_srvs__srv__Trigger_Response * msg);

/// Create srv/Trigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * std_srvs__srv__Trigger_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
std_srvs__srv__Trigger_Response *
std_srvs__srv__Trigger_Response__create();

/// Destroy srv/Trigger message.
/**
 * It calls
 * std_srvs__srv__Trigger_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Response__destroy(std_srvs__srv__Trigger_Response * msg);


/// Initialize array of srv/Trigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * std_srvs__srv__Trigger_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
bool
std_srvs__srv__Trigger_Response__Sequence__init(std_srvs__srv__Trigger_Response__Sequence * array, size_t size);

/// Finalize array of srv/Trigger messages.
/**
 * It calls
 * std_srvs__srv__Trigger_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Response__Sequence__fini(std_srvs__srv__Trigger_Response__Sequence * array);

/// Create array of srv/Trigger messages.
/**
 * It allocates the memory for the array and calls
 * std_srvs__srv__Trigger_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
std_srvs__srv__Trigger_Response__Sequence *
std_srvs__srv__Trigger_Response__Sequence__create(size_t size);

/// Destroy array of srv/Trigger messages.
/**
 * It calls
 * std_srvs__srv__Trigger_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Trigger_Response__Sequence__destroy(std_srvs__srv__Trigger_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__TRIGGER__FUNCTIONS_H_
