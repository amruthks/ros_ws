// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from bat_led_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice
#include "bat_led_interfaces/msg/detail/led_state_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "bat_led_interfaces/msg/detail/led_state_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace bat_led_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
cdr_serialize(
  const bat_led_interfaces::msg::LedStateArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led_states
  {
    cdr << ros_message.led_states;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bat_led_interfaces::msg::LedStateArray & ros_message)
{
  // Member: led_states
  {
    cdr >> ros_message.led_states;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
get_serialized_size(
  const bat_led_interfaces::msg::LedStateArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led_states
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.led_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bat_led_interfaces
max_serialized_size_LedStateArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: led_states
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LedStateArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const bat_led_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LedStateArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<bat_led_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LedStateArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const bat_led_interfaces::msg::LedStateArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LedStateArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LedStateArray(full_bounded, 0);
}

static message_type_support_callbacks_t _LedStateArray__callbacks = {
  "bat_led_interfaces::msg",
  "LedStateArray",
  _LedStateArray__cdr_serialize,
  _LedStateArray__cdr_deserialize,
  _LedStateArray__get_serialized_size,
  _LedStateArray__max_serialized_size
};

static rosidl_message_type_support_t _LedStateArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LedStateArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bat_led_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bat_led_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<bat_led_interfaces::msg::LedStateArray>()
{
  return &bat_led_interfaces::msg::typesupport_fastrtps_cpp::_LedStateArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bat_led_interfaces, msg, LedStateArray)() {
  return &bat_led_interfaces::msg::typesupport_fastrtps_cpp::_LedStateArray__handle;
}

#ifdef __cplusplus
}
#endif
