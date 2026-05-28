# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tuos_interfaces:srv/NumberGame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NumberGame_Request(type):
    """Metaclass of message 'NumberGame_Request'."""

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
                'tuos_interfaces.srv.NumberGame_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__number_game__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__number_game__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__number_game__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__number_game__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__number_game__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NumberGame_Request(metaclass=Metaclass_NumberGame_Request):
    """Message class 'NumberGame_Request'."""

    __slots__ = [
        '_guess',
    ]

    _fields_and_field_types = {
        'guess': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.guess = kwargs.get('guess', int())

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
        if self.guess != other.guess:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def guess(self):
        """Message field 'guess'."""
        return self._guess

    @guess.setter
    def guess(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'guess' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'guess' field must be an integer in [-2147483648, 2147483647]"
        self._guess = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NumberGame_Response(type):
    """Metaclass of message 'NumberGame_Response'."""

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
                'tuos_interfaces.srv.NumberGame_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__number_game__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__number_game__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__number_game__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__number_game__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__number_game__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NumberGame_Response(metaclass=Metaclass_NumberGame_Response):
    """Message class 'NumberGame_Response'."""

    __slots__ = [
        '_guesses',
        '_hint',
        '_success',
    ]

    _fields_and_field_types = {
        'guesses': 'int32',
        'hint': 'string',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.guesses = kwargs.get('guesses', int())
        self.hint = kwargs.get('hint', str())
        self.success = kwargs.get('success', bool())

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
        if self.guesses != other.guesses:
            return False
        if self.hint != other.hint:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def guesses(self):
        """Message field 'guesses'."""
        return self._guesses

    @guesses.setter
    def guesses(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'guesses' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'guesses' field must be an integer in [-2147483648, 2147483647]"
        self._guesses = value

    @builtins.property
    def hint(self):
        """Message field 'hint'."""
        return self._hint

    @hint.setter
    def hint(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hint' field must be of type 'str'"
        self._hint = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_NumberGame(type):
    """Metaclass of service 'NumberGame'."""

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
                'tuos_interfaces.srv.NumberGame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__number_game

            from tuos_interfaces.srv import _number_game
            if _number_game.Metaclass_NumberGame_Request._TYPE_SUPPORT is None:
                _number_game.Metaclass_NumberGame_Request.__import_type_support__()
            if _number_game.Metaclass_NumberGame_Response._TYPE_SUPPORT is None:
                _number_game.Metaclass_NumberGame_Response.__import_type_support__()


class NumberGame(metaclass=Metaclass_NumberGame):
    from tuos_interfaces.srv._number_game import NumberGame_Request as Request
    from tuos_interfaces.srv._number_game import NumberGame_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
