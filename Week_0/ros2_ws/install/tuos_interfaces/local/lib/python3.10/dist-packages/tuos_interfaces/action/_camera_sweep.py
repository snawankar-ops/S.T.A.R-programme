# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tuos_interfaces:action/CameraSweep.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraSweep_Goal(type):
    """Metaclass of message 'CameraSweep_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_Goal(metaclass=Metaclass_CameraSweep_Goal):
    """Message class 'CameraSweep_Goal'."""

    __slots__ = [
        '_sweep_angle',
        '_image_count',
    ]

    _fields_and_field_types = {
        'sweep_angle': 'float',
        'image_count': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sweep_angle = kwargs.get('sweep_angle', float())
        self.image_count = kwargs.get('image_count', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sweep_angle != other.sweep_angle:
            return False
        if self.image_count != other.image_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sweep_angle(self):
        """Message field 'sweep_angle'."""
        return self._sweep_angle

    @sweep_angle.setter
    def sweep_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sweep_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sweep_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sweep_angle = value

    @builtins.property
    def image_count(self):
        """Message field 'image_count'."""
        return self._image_count

    @image_count.setter
    def image_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'image_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'image_count' field must be an integer in [-2147483648, 2147483647]"
        self._image_count = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_Result(type):
    """Metaclass of message 'CameraSweep_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_Result(metaclass=Metaclass_CameraSweep_Result):
    """Message class 'CameraSweep_Result'."""

    __slots__ = [
        '_image_paths',
    ]

    _fields_and_field_types = {
        'image_paths': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.image_paths = kwargs.get('image_paths', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.image_paths != other.image_paths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image_paths(self):
        """Message field 'image_paths'."""
        return self._image_paths

    @image_paths.setter
    def image_paths(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'image_paths' field must be a set or sequence and each value of type 'str'"
        self._image_paths = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_Feedback(type):
    """Metaclass of message 'CameraSweep_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_Feedback(metaclass=Metaclass_CameraSweep_Feedback):
    """Message class 'CameraSweep_Feedback'."""

    __slots__ = [
        '_current_image',
        '_current_angle',
    ]

    _fields_and_field_types = {
        'current_image': 'int32',
        'current_angle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_image = kwargs.get('current_image', int())
        self.current_angle = kwargs.get('current_angle', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_image != other.current_image:
            return False
        if self.current_angle != other.current_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_image(self):
        """Message field 'current_image'."""
        return self._current_image

    @current_image.setter
    def current_image(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_image' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_image' field must be an integer in [-2147483648, 2147483647]"
        self._current_image = value

    @builtins.property
    def current_angle(self):
        """Message field 'current_angle'."""
        return self._current_angle

    @current_angle.setter
    def current_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_SendGoal_Request(type):
    """Metaclass of message 'CameraSweep_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__send_goal__request

            from tuos_interfaces.action import CameraSweep
            if CameraSweep.Goal.__class__._TYPE_SUPPORT is None:
                CameraSweep.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_SendGoal_Request(metaclass=Metaclass_CameraSweep_SendGoal_Request):
    """Message class 'CameraSweep_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'tuos_interfaces/CameraSweep_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tuos_interfaces', 'action'], 'CameraSweep_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from tuos_interfaces.action._camera_sweep import CameraSweep_Goal
        self.goal = kwargs.get('goal', CameraSweep_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from tuos_interfaces.action._camera_sweep import CameraSweep_Goal
            assert \
                isinstance(value, CameraSweep_Goal), \
                "The 'goal' field must be a sub message of type 'CameraSweep_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_SendGoal_Response(type):
    """Metaclass of message 'CameraSweep_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_SendGoal_Response(metaclass=Metaclass_CameraSweep_SendGoal_Response):
    """Message class 'CameraSweep_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_CameraSweep_SendGoal(type):
    """Metaclass of service 'CameraSweep_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__camera_sweep__send_goal

            from tuos_interfaces.action import _camera_sweep
            if _camera_sweep.Metaclass_CameraSweep_SendGoal_Request._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_SendGoal_Request.__import_type_support__()
            if _camera_sweep.Metaclass_CameraSweep_SendGoal_Response._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_SendGoal_Response.__import_type_support__()


class CameraSweep_SendGoal(metaclass=Metaclass_CameraSweep_SendGoal):
    from tuos_interfaces.action._camera_sweep import CameraSweep_SendGoal_Request as Request
    from tuos_interfaces.action._camera_sweep import CameraSweep_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_GetResult_Request(type):
    """Metaclass of message 'CameraSweep_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_GetResult_Request(metaclass=Metaclass_CameraSweep_GetResult_Request):
    """Message class 'CameraSweep_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_GetResult_Response(type):
    """Metaclass of message 'CameraSweep_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__get_result__response

            from tuos_interfaces.action import CameraSweep
            if CameraSweep.Result.__class__._TYPE_SUPPORT is None:
                CameraSweep.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_GetResult_Response(metaclass=Metaclass_CameraSweep_GetResult_Response):
    """Message class 'CameraSweep_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'tuos_interfaces/CameraSweep_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tuos_interfaces', 'action'], 'CameraSweep_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from tuos_interfaces.action._camera_sweep import CameraSweep_Result
        self.result = kwargs.get('result', CameraSweep_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from tuos_interfaces.action._camera_sweep import CameraSweep_Result
            assert \
                isinstance(value, CameraSweep_Result), \
                "The 'result' field must be a sub message of type 'CameraSweep_Result'"
        self._result = value


class Metaclass_CameraSweep_GetResult(type):
    """Metaclass of service 'CameraSweep_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__camera_sweep__get_result

            from tuos_interfaces.action import _camera_sweep
            if _camera_sweep.Metaclass_CameraSweep_GetResult_Request._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_GetResult_Request.__import_type_support__()
            if _camera_sweep.Metaclass_CameraSweep_GetResult_Response._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_GetResult_Response.__import_type_support__()


class CameraSweep_GetResult(metaclass=Metaclass_CameraSweep_GetResult):
    from tuos_interfaces.action._camera_sweep import CameraSweep_GetResult_Request as Request
    from tuos_interfaces.action._camera_sweep import CameraSweep_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraSweep_FeedbackMessage(type):
    """Metaclass of message 'CameraSweep_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__camera_sweep__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__camera_sweep__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__camera_sweep__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__camera_sweep__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__camera_sweep__feedback_message

            from tuos_interfaces.action import CameraSweep
            if CameraSweep.Feedback.__class__._TYPE_SUPPORT is None:
                CameraSweep.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraSweep_FeedbackMessage(metaclass=Metaclass_CameraSweep_FeedbackMessage):
    """Message class 'CameraSweep_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'tuos_interfaces/CameraSweep_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tuos_interfaces', 'action'], 'CameraSweep_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from tuos_interfaces.action._camera_sweep import CameraSweep_Feedback
        self.feedback = kwargs.get('feedback', CameraSweep_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from tuos_interfaces.action._camera_sweep import CameraSweep_Feedback
            assert \
                isinstance(value, CameraSweep_Feedback), \
                "The 'feedback' field must be a sub message of type 'CameraSweep_Feedback'"
        self._feedback = value


class Metaclass_CameraSweep(type):
    """Metaclass of action 'CameraSweep'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tuos_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tuos_interfaces.action.CameraSweep')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__camera_sweep

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from tuos_interfaces.action import _camera_sweep
            if _camera_sweep.Metaclass_CameraSweep_SendGoal._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_SendGoal.__import_type_support__()
            if _camera_sweep.Metaclass_CameraSweep_GetResult._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_GetResult.__import_type_support__()
            if _camera_sweep.Metaclass_CameraSweep_FeedbackMessage._TYPE_SUPPORT is None:
                _camera_sweep.Metaclass_CameraSweep_FeedbackMessage.__import_type_support__()


class CameraSweep(metaclass=Metaclass_CameraSweep):

    # The goal message defined in the action definition.
    from tuos_interfaces.action._camera_sweep import CameraSweep_Goal as Goal
    # The result message defined in the action definition.
    from tuos_interfaces.action._camera_sweep import CameraSweep_Result as Result
    # The feedback message defined in the action definition.
    from tuos_interfaces.action._camera_sweep import CameraSweep_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from tuos_interfaces.action._camera_sweep import CameraSweep_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from tuos_interfaces.action._camera_sweep import CameraSweep_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from tuos_interfaces.action._camera_sweep import CameraSweep_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
