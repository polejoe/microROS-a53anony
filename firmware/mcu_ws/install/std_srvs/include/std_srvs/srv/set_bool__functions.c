// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from std_srvs:srv/SetBool.idl
// generated code does not contain a copyright notice
#include "std_srvs/srv/set_bool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
std_srvs__srv__SetBool_Request__init(std_srvs__srv__SetBool_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
std_srvs__srv__SetBool_Request__fini(std_srvs__srv__SetBool_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
}

std_srvs__srv__SetBool_Request *
std_srvs__srv__SetBool_Request__create()
{
  std_srvs__srv__SetBool_Request * msg = (std_srvs__srv__SetBool_Request *)malloc(sizeof(std_srvs__srv__SetBool_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_srvs__srv__SetBool_Request));
  bool success = std_srvs__srv__SetBool_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_srvs__srv__SetBool_Request__destroy(std_srvs__srv__SetBool_Request * msg)
{
  if (msg) {
    std_srvs__srv__SetBool_Request__fini(msg);
  }
  free(msg);
}


bool
std_srvs__srv__SetBool_Request__Sequence__init(std_srvs__srv__SetBool_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_srvs__srv__SetBool_Request * data = NULL;
  if (size) {
    data = (std_srvs__srv__SetBool_Request *)calloc(size, sizeof(std_srvs__srv__SetBool_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_srvs__srv__SetBool_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_srvs__srv__SetBool_Request__fini(&data[i - 1]);
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
std_srvs__srv__SetBool_Request__Sequence__fini(std_srvs__srv__SetBool_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_srvs__srv__SetBool_Request__fini(&array->data[i]);
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

std_srvs__srv__SetBool_Request__Sequence *
std_srvs__srv__SetBool_Request__Sequence__create(size_t size)
{
  std_srvs__srv__SetBool_Request__Sequence * array = (std_srvs__srv__SetBool_Request__Sequence *)malloc(sizeof(std_srvs__srv__SetBool_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_srvs__srv__SetBool_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_srvs__srv__SetBool_Request__Sequence__destroy(std_srvs__srv__SetBool_Request__Sequence * array)
{
  if (array) {
    std_srvs__srv__SetBool_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `message`
#include "rosidl_generator_c/string_functions.h"

bool
std_srvs__srv__SetBool_Response__init(std_srvs__srv__SetBool_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_generator_c__String__init(&msg->message)) {
    std_srvs__srv__SetBool_Response__fini(msg);
    return false;
  }
  return true;
}

void
std_srvs__srv__SetBool_Response__fini(std_srvs__srv__SetBool_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_generator_c__String__fini(&msg->message);
}

std_srvs__srv__SetBool_Response *
std_srvs__srv__SetBool_Response__create()
{
  std_srvs__srv__SetBool_Response * msg = (std_srvs__srv__SetBool_Response *)malloc(sizeof(std_srvs__srv__SetBool_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_srvs__srv__SetBool_Response));
  bool success = std_srvs__srv__SetBool_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_srvs__srv__SetBool_Response__destroy(std_srvs__srv__SetBool_Response * msg)
{
  if (msg) {
    std_srvs__srv__SetBool_Response__fini(msg);
  }
  free(msg);
}


bool
std_srvs__srv__SetBool_Response__Sequence__init(std_srvs__srv__SetBool_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_srvs__srv__SetBool_Response * data = NULL;
  if (size) {
    data = (std_srvs__srv__SetBool_Response *)calloc(size, sizeof(std_srvs__srv__SetBool_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_srvs__srv__SetBool_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_srvs__srv__SetBool_Response__fini(&data[i - 1]);
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
std_srvs__srv__SetBool_Response__Sequence__fini(std_srvs__srv__SetBool_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_srvs__srv__SetBool_Response__fini(&array->data[i]);
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

std_srvs__srv__SetBool_Response__Sequence *
std_srvs__srv__SetBool_Response__Sequence__create(size_t size)
{
  std_srvs__srv__SetBool_Response__Sequence * array = (std_srvs__srv__SetBool_Response__Sequence *)malloc(sizeof(std_srvs__srv__SetBool_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = std_srvs__srv__SetBool_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_srvs__srv__SetBool_Response__Sequence__destroy(std_srvs__srv__SetBool_Response__Sequence * array)
{
  if (array) {
    std_srvs__srv__SetBool_Response__Sequence__fini(array);
  }
  free(array);
}
