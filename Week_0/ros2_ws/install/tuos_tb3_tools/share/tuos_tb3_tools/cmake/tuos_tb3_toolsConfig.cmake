# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tuos_tb3_tools_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tuos_tb3_tools_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tuos_tb3_tools_FOUND FALSE)
  elseif(NOT tuos_tb3_tools_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tuos_tb3_tools_FOUND FALSE)
  endif()
  return()
endif()
set(_tuos_tb3_tools_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tuos_tb3_tools_FIND_QUIETLY)
  message(STATUS "Found tuos_tb3_tools: 0.0.0 (${tuos_tb3_tools_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tuos_tb3_tools' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tuos_tb3_tools_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tuos_tb3_tools_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tuos_tb3_tools_DIR}/${_extra}")
endforeach()
