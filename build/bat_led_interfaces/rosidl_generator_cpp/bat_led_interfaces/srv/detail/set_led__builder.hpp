// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bat_led_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include "bat_led_interfaces/srv/detail/set_led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bat_led_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_state
{
public:
  explicit Init_SetLed_Request_state(::bat_led_interfaces::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::bat_led_interfaces::srv::SetLed_Request state(::bat_led_interfaces::srv::SetLed_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bat_led_interfaces::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_led_number
{
public:
  Init_SetLed_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_state led_number(::bat_led_interfaces::srv::SetLed_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLed_Request_state(msg_);
  }

private:
  ::bat_led_interfaces::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bat_led_interfaces::srv::SetLed_Request>()
{
  return bat_led_interfaces::srv::builder::Init_SetLed_Request_led_number();
}

}  // namespace bat_led_interfaces


namespace bat_led_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  Init_SetLed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bat_led_interfaces::srv::SetLed_Response success(::bat_led_interfaces::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bat_led_interfaces::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bat_led_interfaces::srv::SetLed_Response>()
{
  return bat_led_interfaces::srv::builder::Init_SetLed_Response_success();
}

}  // namespace bat_led_interfaces

#endif  // BAT_LED_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
