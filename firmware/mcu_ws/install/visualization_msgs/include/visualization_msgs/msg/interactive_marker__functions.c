// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/interactive_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose__functions.h"
// Member `name`
// Member `description`
#include "rosidl_generator_c/string_functions.h"
// Member `menu_entries`
#include "visualization_msgs/msg/menu_entry__functions.h"
// Member `controls`
#include "visualization_msgs/msg/interactive_marker_control__functions.h"

bool
visualization_msgs__msg__InteractiveMarker__init(visualization_msgs__msg__InteractiveMarker * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
    return false;
  }
  // description
  if (!rosidl_generator_c__String__init(&msg->description)) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
    return false;
  }
  // scale
  // menu_entries
  if (!visualization_msgs__msg__MenuEntry__Sequence__init(&msg->menu_entries, 0)) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
    return false;
  }
  // controls
  if (!visualization_msgs__msg__InteractiveMarkerControl__Sequence__init(&msg->controls, 0)) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
    return false;
  }
  return true;
}

void
visualization_msgs__msg__InteractiveMarker__fini(visualization_msgs__msg__InteractiveMarker * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // description
  rosidl_generator_c__String__fini(&msg->description);
  // scale
  // menu_entries
  visualization_msgs__msg__MenuEntry__Sequence__fini(&msg->menu_entries);
  // controls
  visualization_msgs__msg__InteractiveMarkerControl__Sequence__fini(&msg->controls);
}

visualization_msgs__msg__InteractiveMarker *
visualization_msgs__msg__InteractiveMarker__create()
{
  visualization_msgs__msg__InteractiveMarker * msg = (visualization_msgs__msg__InteractiveMarker *)malloc(sizeof(visualization_msgs__msg__InteractiveMarker));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(visualization_msgs__msg__InteractiveMarker));
  bool success = visualization_msgs__msg__InteractiveMarker__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
visualization_msgs__msg__InteractiveMarker__destroy(visualization_msgs__msg__InteractiveMarker * msg)
{
  if (msg) {
    visualization_msgs__msg__InteractiveMarker__fini(msg);
  }
  free(msg);
}


bool
visualization_msgs__msg__InteractiveMarker__Sequence__init(visualization_msgs__msg__InteractiveMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  visualization_msgs__msg__InteractiveMarker * data = NULL;
  if (size) {
    data = (visualization_msgs__msg__InteractiveMarker *)calloc(size, sizeof(visualization_msgs__msg__InteractiveMarker));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = visualization_msgs__msg__InteractiveMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        visualization_msgs__msg__InteractiveMarker__fini(&data[i - 1]);
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
visualization_msgs__msg__InteractiveMarker__Sequence__fini(visualization_msgs__msg__InteractiveMarker__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      visualization_msgs__msg__InteractiveMarker__fini(&array->data[i]);
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

visualization_msgs__msg__InteractiveMarker__Sequence *
visualization_msgs__msg__InteractiveMarker__Sequence__create(size_t size)
{
  visualization_msgs__msg__InteractiveMarker__Sequence * array = (visualization_msgs__msg__InteractiveMarker__Sequence *)malloc(sizeof(visualization_msgs__msg__InteractiveMarker__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = visualization_msgs__msg__InteractiveMarker__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
visualization_msgs__msg__InteractiveMarker__Sequence__destroy(visualization_msgs__msg__InteractiveMarker__Sequence * array)
{
  if (array) {
    visualization_msgs__msg__InteractiveMarker__Sequence__fini(array);
  }
  free(array);
}
