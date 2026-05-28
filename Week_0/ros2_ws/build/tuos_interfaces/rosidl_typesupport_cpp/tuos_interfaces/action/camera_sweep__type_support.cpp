// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tuos_interfaces:action/CameraSweep.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tuos_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_Goal_type_support_ids_t;

static const _CameraSweep_Goal_type_support_ids_t _CameraSweep_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_Goal_type_support_symbol_names_t _CameraSweep_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_Goal)),
  }
};

typedef struct _CameraSweep_Goal_type_support_data_t
{
  void * data[2];
} _CameraSweep_Goal_type_support_data_t;

static _CameraSweep_Goal_type_support_data_t _CameraSweep_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_Goal_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_Goal>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_Goal)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_Goal>();
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
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_Result_type_support_ids_t;

static const _CameraSweep_Result_type_support_ids_t _CameraSweep_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_Result_type_support_symbol_names_t _CameraSweep_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_Result)),
  }
};

typedef struct _CameraSweep_Result_type_support_data_t
{
  void * data[2];
} _CameraSweep_Result_type_support_data_t;

static _CameraSweep_Result_type_support_data_t _CameraSweep_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_Result_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_Result_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_Result_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_Result>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_Result)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_Result>();
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
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_Feedback_type_support_ids_t;

static const _CameraSweep_Feedback_type_support_ids_t _CameraSweep_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_Feedback_type_support_symbol_names_t _CameraSweep_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_Feedback)),
  }
};

typedef struct _CameraSweep_Feedback_type_support_data_t
{
  void * data[2];
} _CameraSweep_Feedback_type_support_data_t;

static _CameraSweep_Feedback_type_support_data_t _CameraSweep_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_Feedback_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_Feedback>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_Feedback)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_Feedback>();
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
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_SendGoal_Request_type_support_ids_t;

static const _CameraSweep_SendGoal_Request_type_support_ids_t _CameraSweep_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_SendGoal_Request_type_support_symbol_names_t _CameraSweep_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_SendGoal_Request)),
  }
};

typedef struct _CameraSweep_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _CameraSweep_SendGoal_Request_type_support_data_t;

static _CameraSweep_SendGoal_Request_type_support_data_t _CameraSweep_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_SendGoal_Request_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_SendGoal_Request>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_SendGoal_Request)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_SendGoal_Request>();
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
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_SendGoal_Response_type_support_ids_t;

static const _CameraSweep_SendGoal_Response_type_support_ids_t _CameraSweep_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_SendGoal_Response_type_support_symbol_names_t _CameraSweep_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_SendGoal_Response)),
  }
};

typedef struct _CameraSweep_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _CameraSweep_SendGoal_Response_type_support_data_t;

static _CameraSweep_SendGoal_Response_type_support_data_t _CameraSweep_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_SendGoal_Response_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_SendGoal_Response>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_SendGoal_Response)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_SendGoal_type_support_ids_t;

static const _CameraSweep_SendGoal_type_support_ids_t _CameraSweep_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_SendGoal_type_support_symbol_names_t _CameraSweep_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_SendGoal)),
  }
};

typedef struct _CameraSweep_SendGoal_type_support_data_t
{
  void * data[2];
} _CameraSweep_SendGoal_type_support_data_t;

static _CameraSweep_SendGoal_type_support_data_t _CameraSweep_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_SendGoal_service_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CameraSweep_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tuos_interfaces::action::CameraSweep_SendGoal>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tuos_interfaces::action::CameraSweep_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_GetResult_Request_type_support_ids_t;

static const _CameraSweep_GetResult_Request_type_support_ids_t _CameraSweep_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_GetResult_Request_type_support_symbol_names_t _CameraSweep_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_GetResult_Request)),
  }
};

typedef struct _CameraSweep_GetResult_Request_type_support_data_t
{
  void * data[2];
} _CameraSweep_GetResult_Request_type_support_data_t;

static _CameraSweep_GetResult_Request_type_support_data_t _CameraSweep_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_GetResult_Request_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_GetResult_Request>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_GetResult_Request)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_GetResult_Request>();
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
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_GetResult_Response_type_support_ids_t;

static const _CameraSweep_GetResult_Response_type_support_ids_t _CameraSweep_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_GetResult_Response_type_support_symbol_names_t _CameraSweep_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_GetResult_Response)),
  }
};

typedef struct _CameraSweep_GetResult_Response_type_support_data_t
{
  void * data[2];
} _CameraSweep_GetResult_Response_type_support_data_t;

static _CameraSweep_GetResult_Response_type_support_data_t _CameraSweep_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_GetResult_Response_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_GetResult_Response>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_GetResult_Response)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tuos_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_GetResult_type_support_ids_t;

static const _CameraSweep_GetResult_type_support_ids_t _CameraSweep_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_GetResult_type_support_symbol_names_t _CameraSweep_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_GetResult)),
  }
};

typedef struct _CameraSweep_GetResult_type_support_data_t
{
  void * data[2];
} _CameraSweep_GetResult_type_support_data_t;

static _CameraSweep_GetResult_type_support_data_t _CameraSweep_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_GetResult_service_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CameraSweep_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tuos_interfaces::action::CameraSweep_GetResult>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tuos_interfaces::action::CameraSweep_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraSweep_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraSweep_FeedbackMessage_type_support_ids_t;

static const _CameraSweep_FeedbackMessage_type_support_ids_t _CameraSweep_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraSweep_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraSweep_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraSweep_FeedbackMessage_type_support_symbol_names_t _CameraSweep_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tuos_interfaces, action, CameraSweep_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tuos_interfaces, action, CameraSweep_FeedbackMessage)),
  }
};

typedef struct _CameraSweep_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _CameraSweep_FeedbackMessage_type_support_data_t;

static _CameraSweep_FeedbackMessage_type_support_data_t _CameraSweep_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraSweep_FeedbackMessage_message_typesupport_map = {
  2,
  "tuos_interfaces",
  &_CameraSweep_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_CameraSweep_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_CameraSweep_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraSweep_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraSweep_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tuos_interfaces::action::CameraSweep_FeedbackMessage>()
{
  return &::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep_FeedbackMessage)() {
  return get_message_type_support_handle<tuos_interfaces::action::CameraSweep_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "tuos_interfaces/action/detail/camera_sweep__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace tuos_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t CameraSweep_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace tuos_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<tuos_interfaces::action::CameraSweep>()
{
  using ::tuos_interfaces::action::rosidl_typesupport_cpp::CameraSweep_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  CameraSweep_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::tuos_interfaces::action::CameraSweep::Impl::SendGoalService>();
  CameraSweep_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::tuos_interfaces::action::CameraSweep::Impl::GetResultService>();
  CameraSweep_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::tuos_interfaces::action::CameraSweep::Impl::CancelGoalService>();
  CameraSweep_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::tuos_interfaces::action::CameraSweep::Impl::FeedbackMessage>();
  CameraSweep_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::tuos_interfaces::action::CameraSweep::Impl::GoalStatusMessage>();
  return &CameraSweep_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, tuos_interfaces, action, CameraSweep)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<tuos_interfaces::action::CameraSweep>();
}

#ifdef __cplusplus
}
#endif
