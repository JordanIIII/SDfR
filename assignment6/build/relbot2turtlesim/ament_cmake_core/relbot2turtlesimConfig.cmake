# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_relbot2turtlesim_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED relbot2turtlesim_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(relbot2turtlesim_FOUND FALSE)
  elseif(NOT relbot2turtlesim_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(relbot2turtlesim_FOUND FALSE)
  endif()
  return()
endif()
set(_relbot2turtlesim_CONFIG_INCLUDED TRUE)

# output package information
if(NOT relbot2turtlesim_FIND_QUIETLY)
  message(STATUS "Found relbot2turtlesim: 0.0.0 (${relbot2turtlesim_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'relbot2turtlesim' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT relbot2turtlesim_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(relbot2turtlesim_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${relbot2turtlesim_DIR}/${_extra}")
endforeach()
