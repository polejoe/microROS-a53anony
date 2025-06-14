# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosidl_typesupport_microxrcedds_c_tests_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rosidl_typesupport_microxrcedds_c_tests_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rosidl_typesupport_microxrcedds_c_tests_FOUND FALSE)
  elseif(NOT rosidl_typesupport_microxrcedds_c_tests_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rosidl_typesupport_microxrcedds_c_tests_FOUND FALSE)
  endif()
  return()
endif()
set(_rosidl_typesupport_microxrcedds_c_tests_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosidl_typesupport_microxrcedds_c_tests_FIND_QUIETLY)
  message(STATUS "Found rosidl_typesupport_microxrcedds_c_tests: 0.1.0 (${rosidl_typesupport_microxrcedds_c_tests_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosidl_typesupport_microxrcedds_c_tests' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosidl_typesupport_microxrcedds_c_tests_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rosidl_typesupport_microxrcedds_c_tests_DIR}/${_extra}")
endforeach()
