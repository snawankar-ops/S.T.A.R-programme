// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tuos_interfaces:srv/NumberGame.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tuos_interfaces/srv/detail/number_game__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tuos_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _NumberGame_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NumberGame_Request_type_support_ids_t;

static const _NumberGame_Request_type_support_ids_t _NumberGame_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NumberGame_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NumberGame_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NumberGame_Request_type_support_symbol_names_t _NumberGame_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, srv, NumberGame_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, srv, NumberGame_Request)),
  }
};

typedef struct _NumberGame_Request_type_support_data_t
{
  void * data[2];
} _NumberGame_Request_type_support_data_t;

static _NumberGame_Request_type_support_data_t _NumberGame_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NumberGame_Request_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_NumberGame_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NumberGame_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NumberGame_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NumberGame_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NumberGame_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::srv::NumberGame_Request>()
{
  return &::tuos_interfaces::srv::rosidl_typesupport_cpp::NumberGame_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, srv, NumberGame_Request)() {
  return get_message_type_support_handle<tuos_interfaces::srv::NumberGame_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuos_interfaces/srv/detail/number_game__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuos_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _NumberGame_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NumberGame_Response_type_support_ids_t;

static const _NumberGame_Response_type_support_ids_t _NumberGame_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NumberGame_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NumberGame_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NumberGame_Response_type_support_symbol_names_t _NumberGame_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, srv, NumberGame_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, srv, NumberGame_Response)),
  }
};

typedef struct _NumberGame_Response_type_support_data_t
{
  void * data[2];
} _NumberGame_Response_type_support_data_t;

static _NumberGame_Response_type_support_data_t _NumberGame_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NumberGame_Response_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_NumberGame_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NumberGame_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NumberGame_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NumberGame_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NumberGame_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::srv::NumberGame_Response>()
{
  return &::tuos_interfaces::srv::rosidl_typesupport_cpp::NumberGame_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, srv, NumberGame_Response)() {
  return get_message_type_support_handle<tuos_interfaces::srv::NumberGame_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tuos_interfaces/srv/detail/number_game__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuos_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _NumberGame_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NumberGame_type_support_ids_t;

static const _NumberGame_type_support_ids_t _NumberGame_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NumberGame_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NumberGame_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NumberGame_type_support_symbol_names_t _NumberGame_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, srv, NumberGame)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, srv, NumberGame)),
  }
};

typedef struct _NumberGame_type_support_data_t
{
  void * data[2];
} _NumberGame_type_support_data_t;

static _NumberGame_type_support_data_t _NumberGame_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NumberGame_service_typesupport_map = {
  2,
  "tuos_interfaces",
  &_NumberGame_service_typesupport_ids.typesupport_identifier[0],
  &_NumberGame_service_typesupport_symbol_names.symbol_name[0],
  &_NumberGame_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NumberGame_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NumberGame_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tuos_interfaces::srv::NumberGame>()
{
  return &::tuos_interfaces::srv::rosidl_typesupport_cpp::NumberGame_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, srv, NumberGame)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tuos_interfaces::srv::NumberGame>();
}

#ifdef __cplusplus
}
#endif
