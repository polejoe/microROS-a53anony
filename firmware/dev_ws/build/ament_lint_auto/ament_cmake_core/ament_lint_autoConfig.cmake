# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ament_lint_auto_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ament_lint_auto_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ament_lint_auto_FOUND FALSE)
  elseif(NOT ament_lint_auto_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ament_lint_auto_FOUND FALSE)
  endif()
  return()
endif()
set(_ament_lint_auto_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ament_lint_auto_FIND_QUIETLY)
  message(STATUS "Found ament_lint_auto: 0.7.12 (${ament_lint_auto_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ament_lint_auto' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ament_lint_auto_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_lint_auto-extras.cmake")
foreach(_extra ${_extras})
  include("${ament_lint_auto_DIR}/${_extra}")
endforeach()
