// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:msg/Constants.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__DETAIL__CONSTANTS__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__DETAIL__CONSTANTS__TRAITS_HPP_

#include "rosidl_generator_cpp/msg/detail/constants__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::msg::Constants>()
{
  return "rosidl_generator_cpp::msg::Constants";
}

template<>
inline const char * name<rosidl_generator_cpp::msg::Constants>()
{
  return "rosidl_generator_cpp/msg/Constants";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::msg::Constants>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::msg::Constants>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosidl_generator_cpp::msg::Constants>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__MSG__DETAIL__CONSTANTS__TRAITS_HPP_
