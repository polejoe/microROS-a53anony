// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lifecycle_msgs:srv/GetState.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/get_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
lifecycle_msgs__srv__GetState_Request__init(lifecycle_msgs__srv__GetState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
lifecycle_msgs__srv__GetState_Request__fini(lifecycle_msgs__srv__GetState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

lifecycle_msgs__srv__GetState_Request *
lifecycle_msgs__srv__GetState_Request__create()
{
  lifecycle_msgs__srv__GetState_Request * msg = (lifecycle_msgs__srv__GetState_Request *)malloc(sizeof(lifecycle_msgs__srv__GetState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__srv__GetState_Request));
  bool success = lifecycle_msgs__srv__GetState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__srv__GetState_Request__destroy(lifecycle_msgs__srv__GetState_Request * msg)
{
  if (msg) {
    lifecycle_msgs__srv__GetState_Request__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__srv__GetState_Request__Sequence__init(lifecycle_msgs__srv__GetState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__srv__GetState_Request * data = NULL;
  if (size) {
    data = (lifecycle_msgs__srv__GetState_Request *)calloc(size, sizeof(lifecycle_msgs__srv__GetState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__srv__GetState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__srv__GetState_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lifecycle_msgs__srv__GetState_Request__Sequence__fini(lifecycle_msgs__srv__GetState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__srv__GetState_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lifecycle_msgs__srv__GetState_Request__Sequence *
lifecycle_msgs__srv__GetState_Request__Sequence__create(size_t size)
{
  lifecycle_msgs__srv__GetState_Request__Sequence * array = (lifecycle_msgs__srv__GetState_Request__Sequence *)malloc(sizeof(lifecycle_msgs__srv__GetState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__srv__GetState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__srv__GetState_Request__Sequence__destroy(lifecycle_msgs__srv__GetState_Request__Sequence * array)
{
  if (array) {
    lifecycle_msgs__srv__GetState_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `current_state`
#include "lifecycle_msgs/msg/state__functions.h"

bool
lifecycle_msgs__srv__GetState_Response__init(lifecycle_msgs__srv__GetState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // current_state
  if (!lifecycle_msgs__msg__State__init(&msg->current_state)) {
    lifecycle_msgs__srv__GetState_Response__fini(msg);
    return false;
  }
  return true;
}

void
lifecycle_msgs__srv__GetState_Response__fini(lifecycle_msgs__srv__GetState_Response * msg)
{
  if (!msg) {
    return;
  }
  // current_state
  lifecycle_msgs__msg__State__fini(&msg->current_state);
}

lifecycle_msgs__srv__GetState_Response *
lifecycle_msgs__srv__GetState_Response__create()
{
  lifecycle_msgs__srv__GetState_Response * msg = (lifecycle_msgs__srv__GetState_Response *)malloc(sizeof(lifecycle_msgs__srv__GetState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__srv__GetState_Response));
  bool success = lifecycle_msgs__srv__GetState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__srv__GetState_Response__destroy(lifecycle_msgs__srv__GetState_Response * msg)
{
  if (msg) {
    lifecycle_msgs__srv__GetState_Response__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__srv__GetState_Response__Sequence__init(lifecycle_msgs__srv__GetState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__srv__GetState_Response * data = NULL;
  if (size) {
    data = (lifecycle_msgs__srv__GetState_Response *)calloc(size, sizeof(lifecycle_msgs__srv__GetState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__srv__GetState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__srv__GetState_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lifecycle_msgs__srv__GetState_Response__Sequence__fini(lifecycle_msgs__srv__GetState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__srv__GetState_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lifecycle_msgs__srv__GetState_Response__Sequence *
lifecycle_msgs__srv__GetState_Response__Sequence__create(size_t size)
{
  lifecycle_msgs__srv__GetState_Response__Sequence * array = (lifecycle_msgs__srv__GetState_Response__Sequence *)malloc(sizeof(lifecycle_msgs__srv__GetState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__srv__GetState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__srv__GetState_Response__Sequence__destroy(lifecycle_msgs__srv__GetState_Response__Sequence * array)
{
  if (array) {
    lifecycle_msgs__srv__GetState_Response__Sequence__fini(array);
  }
  free(array);
}
