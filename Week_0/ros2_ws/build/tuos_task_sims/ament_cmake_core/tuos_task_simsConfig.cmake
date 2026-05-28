# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tuos_task_sims_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tuos_task_sims_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tuos_task_sims_FOUND FALSE)
  elseif(NOT tuos_task_sims_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tuos_task_sims_FOUND FALSE)
  endif()
  return()
endif()
set(_tuos_task_sims_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tuos_task_sims_FIND_QUIETLY)
  message(STATUS "Found tuos_task_sims: 0.0.1 (${tuos_task_sims_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tuos_task_sims' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tuos_task_sims_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tuos_task_sims_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${tuos_task_sims_DIR}/${_extra}")
endforeach()
