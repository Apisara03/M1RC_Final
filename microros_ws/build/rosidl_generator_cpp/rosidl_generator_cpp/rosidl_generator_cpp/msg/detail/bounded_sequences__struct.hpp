// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_cpp:msg/BoundedSequences.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__DETAIL__BOUNDED_SEQUENCES__STRUCT_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__DETAIL__BOUNDED_SEQUENCES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'basic_types_values'
#include "rosidl_generator_cpp/msg/detail/basic_types__struct.hpp"
// Member 'constants_values'
#include "rosidl_generator_cpp/msg/detail/constants__struct.hpp"
// Member 'defaults_values'
#include "rosidl_generator_cpp/msg/detail/defaults__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosidl_generator_cpp__msg__BoundedSequences __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_cpp__msg__BoundedSequences __declspec(deprecated)
#endif

namespace rosidl_generator_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundedSequences_
{
  using Type = BoundedSequences_<ContainerAllocator>;

  explicit BoundedSequences_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->bool_values_default.resize(3);
      this->bool_values_default = {{false, true, false}};
      this->byte_values_default.resize(3);
      this->byte_values_default = {{0, 1, 255}};
      this->char_values_default.resize(3);
      this->char_values_default = {{0, 1, 127}};
      this->float32_values_default.resize(3);
      this->float32_values_default = {{1.125f, 0.0f, -1.125f}};
      this->float64_values_default.resize(3);
      this->float64_values_default = {{3.1415, 0.0, -3.1415}};
      this->int8_values_default.resize(3);
      this->int8_values_default = {{0, 127, -128}};
      this->uint8_values_default.resize(3);
      this->uint8_values_default = {{0, 1, 255}};
      this->int16_values_default.resize(3);
      this->int16_values_default = {{0, 32767, -32768}};
      this->uint16_values_default.resize(3);
      this->uint16_values_default = {{0, 1, 65535}};
      this->int32_values_default.resize(3);
      this->int32_values_default = {{0l, 2147483647l, (-2147483647l - 1)}};
      this->uint32_values_default.resize(3);
      this->uint32_values_default = {{0ul, 1ul, 4294967295ul}};
      this->int64_values_default.resize(3);
      this->int64_values_default = {{0ll, 9223372036854775807ll, (-9223372036854775807ll - 1)}};
      this->uint64_values_default.resize(3);
      this->uint64_values_default = {{0ull, 1ull, 18446744073709551615ull}};
      this->string_values_default.resize(3);
      this->string_values_default = {{""}, {"max value"}, {"min value"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->alignment_check = 0l;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alignment_check = 0l;
    }
  }

  explicit BoundedSequences_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->bool_values_default.resize(3);
      this->bool_values_default = {{false, true, false}};
      this->byte_values_default.resize(3);
      this->byte_values_default = {{0, 1, 255}};
      this->char_values_default.resize(3);
      this->char_values_default = {{0, 1, 127}};
      this->float32_values_default.resize(3);
      this->float32_values_default = {{1.125f, 0.0f, -1.125f}};
      this->float64_values_default.resize(3);
      this->float64_values_default = {{3.1415, 0.0, -3.1415}};
      this->int8_values_default.resize(3);
      this->int8_values_default = {{0, 127, -128}};
      this->uint8_values_default.resize(3);
      this->uint8_values_default = {{0, 1, 255}};
      this->int16_values_default.resize(3);
      this->int16_values_default = {{0, 32767, -32768}};
      this->uint16_values_default.resize(3);
      this->uint16_values_default = {{0, 1, 65535}};
      this->int32_values_default.resize(3);
      this->int32_values_default = {{0l, 2147483647l, (-2147483647l - 1)}};
      this->uint32_values_default.resize(3);
      this->uint32_values_default = {{0ul, 1ul, 4294967295ul}};
      this->int64_values_default.resize(3);
      this->int64_values_default = {{0ll, 9223372036854775807ll, (-9223372036854775807ll - 1)}};
      this->uint64_values_default.resize(3);
      this->uint64_values_default = {{0ull, 1ull, 18446744073709551615ull}};
      this->string_values_default.resize(3);
      this->string_values_default = {{""}, {"max value"}, {"min value"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->alignment_check = 0l;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alignment_check = 0l;
    }
  }

  // field types and members
  using _bool_values_type =
    rosidl_runtime_cpp::BoundedVector<bool, 3, typename ContainerAllocator::template rebind<bool>::other>;
  _bool_values_type bool_values;
  using _byte_values_type =
    rosidl_runtime_cpp::BoundedVector<unsigned char, 3, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _byte_values_type byte_values;
  using _char_values_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _char_values_type char_values;
  using _float32_values_type =
    rosidl_runtime_cpp::BoundedVector<float, 3, typename ContainerAllocator::template rebind<float>::other>;
  _float32_values_type float32_values;
  using _float64_values_type =
    rosidl_runtime_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other>;
  _float64_values_type float64_values;
  using _int8_values_type =
    rosidl_runtime_cpp::BoundedVector<int8_t, 3, typename ContainerAllocator::template rebind<int8_t>::other>;
  _int8_values_type int8_values;
  using _uint8_values_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _uint8_values_type uint8_values;
  using _int16_values_type =
    rosidl_runtime_cpp::BoundedVector<int16_t, 3, typename ContainerAllocator::template rebind<int16_t>::other>;
  _int16_values_type int16_values;
  using _uint16_values_type =
    rosidl_runtime_cpp::BoundedVector<uint16_t, 3, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _uint16_values_type uint16_values;
  using _int32_values_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 3, typename ContainerAllocator::template rebind<int32_t>::other>;
  _int32_values_type int32_values;
  using _uint32_values_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 3, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _uint32_values_type uint32_values;
  using _int64_values_type =
    rosidl_runtime_cpp::BoundedVector<int64_t, 3, typename ContainerAllocator::template rebind<int64_t>::other>;
  _int64_values_type int64_values;
  using _uint64_values_type =
    rosidl_runtime_cpp::BoundedVector<uint64_t, 3, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _uint64_values_type uint64_values;
  using _string_values_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _string_values_type string_values;
  using _basic_types_values_type =
    rosidl_runtime_cpp::BoundedVector<rosidl_generator_cpp::msg::BasicTypes_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::BasicTypes_<ContainerAllocator>>::other>;
  _basic_types_values_type basic_types_values;
  using _constants_values_type =
    rosidl_runtime_cpp::BoundedVector<rosidl_generator_cpp::msg::Constants_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Constants_<ContainerAllocator>>::other>;
  _constants_values_type constants_values;
  using _defaults_values_type =
    rosidl_runtime_cpp::BoundedVector<rosidl_generator_cpp::msg::Defaults_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Defaults_<ContainerAllocator>>::other>;
  _defaults_values_type defaults_values;
  using _bool_values_default_type =
    rosidl_runtime_cpp::BoundedVector<bool, 3, typename ContainerAllocator::template rebind<bool>::other>;
  _bool_values_default_type bool_values_default;
  using _byte_values_default_type =
    rosidl_runtime_cpp::BoundedVector<unsigned char, 3, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _byte_values_default_type byte_values_default;
  using _char_values_default_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _char_values_default_type char_values_default;
  using _float32_values_default_type =
    rosidl_runtime_cpp::BoundedVector<float, 3, typename ContainerAllocator::template rebind<float>::other>;
  _float32_values_default_type float32_values_default;
  using _float64_values_default_type =
    rosidl_runtime_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other>;
  _float64_values_default_type float64_values_default;
  using _int8_values_default_type =
    rosidl_runtime_cpp::BoundedVector<int8_t, 3, typename ContainerAllocator::template rebind<int8_t>::other>;
  _int8_values_default_type int8_values_default;
  using _uint8_values_default_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _uint8_values_default_type uint8_values_default;
  using _int16_values_default_type =
    rosidl_runtime_cpp::BoundedVector<int16_t, 3, typename ContainerAllocator::template rebind<int16_t>::other>;
  _int16_values_default_type int16_values_default;
  using _uint16_values_default_type =
    rosidl_runtime_cpp::BoundedVector<uint16_t, 3, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _uint16_values_default_type uint16_values_default;
  using _int32_values_default_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 3, typename ContainerAllocator::template rebind<int32_t>::other>;
  _int32_values_default_type int32_values_default;
  using _uint32_values_default_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 3, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _uint32_values_default_type uint32_values_default;
  using _int64_values_default_type =
    rosidl_runtime_cpp::BoundedVector<int64_t, 3, typename ContainerAllocator::template rebind<int64_t>::other>;
  _int64_values_default_type int64_values_default;
  using _uint64_values_default_type =
    rosidl_runtime_cpp::BoundedVector<uint64_t, 3, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _uint64_values_default_type uint64_values_default;
  using _string_values_default_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _string_values_default_type string_values_default;
  using _alignment_check_type =
    int32_t;
  _alignment_check_type alignment_check;

  // setters for named parameter idiom
  Type & set__bool_values(
    const rosidl_runtime_cpp::BoundedVector<bool, 3, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->bool_values = _arg;
    return *this;
  }
  Type & set__byte_values(
    const rosidl_runtime_cpp::BoundedVector<unsigned char, 3, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->byte_values = _arg;
    return *this;
  }
  Type & set__char_values(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->char_values = _arg;
    return *this;
  }
  Type & set__float32_values(
    const rosidl_runtime_cpp::BoundedVector<float, 3, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->float32_values = _arg;
    return *this;
  }
  Type & set__float64_values(
    const rosidl_runtime_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->float64_values = _arg;
    return *this;
  }
  Type & set__int8_values(
    const rosidl_runtime_cpp::BoundedVector<int8_t, 3, typename ContainerAllocator::template rebind<int8_t>::other> & _arg)
  {
    this->int8_values = _arg;
    return *this;
  }
  Type & set__uint8_values(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->uint8_values = _arg;
    return *this;
  }
  Type & set__int16_values(
    const rosidl_runtime_cpp::BoundedVector<int16_t, 3, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->int16_values = _arg;
    return *this;
  }
  Type & set__uint16_values(
    const rosidl_runtime_cpp::BoundedVector<uint16_t, 3, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->uint16_values = _arg;
    return *this;
  }
  Type & set__int32_values(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 3, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->int32_values = _arg;
    return *this;
  }
  Type & set__uint32_values(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 3, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->uint32_values = _arg;
    return *this;
  }
  Type & set__int64_values(
    const rosidl_runtime_cpp::BoundedVector<int64_t, 3, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->int64_values = _arg;
    return *this;
  }
  Type & set__uint64_values(
    const rosidl_runtime_cpp::BoundedVector<uint64_t, 3, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->uint64_values = _arg;
    return *this;
  }
  Type & set__string_values(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->string_values = _arg;
    return *this;
  }
  Type & set__basic_types_values(
    const rosidl_runtime_cpp::BoundedVector<rosidl_generator_cpp::msg::BasicTypes_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::BasicTypes_<ContainerAllocator>>::other> & _arg)
  {
    this->basic_types_values = _arg;
    return *this;
  }
  Type & set__constants_values(
    const rosidl_runtime_cpp::BoundedVector<rosidl_generator_cpp::msg::Constants_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Constants_<ContainerAllocator>>::other> & _arg)
  {
    this->constants_values = _arg;
    return *this;
  }
  Type & set__defaults_values(
    const rosidl_runtime_cpp::BoundedVector<rosidl_generator_cpp::msg::Defaults_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Defaults_<ContainerAllocator>>::other> & _arg)
  {
    this->defaults_values = _arg;
    return *this;
  }
  Type & set__bool_values_default(
    const rosidl_runtime_cpp::BoundedVector<bool, 3, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->bool_values_default = _arg;
    return *this;
  }
  Type & set__byte_values_default(
    const rosidl_runtime_cpp::BoundedVector<unsigned char, 3, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->byte_values_default = _arg;
    return *this;
  }
  Type & set__char_values_default(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->char_values_default = _arg;
    return *this;
  }
  Type & set__float32_values_default(
    const rosidl_runtime_cpp::BoundedVector<float, 3, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->float32_values_default = _arg;
    return *this;
  }
  Type & set__float64_values_default(
    const rosidl_runtime_cpp::BoundedVector<double, 3, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->float64_values_default = _arg;
    return *this;
  }
  Type & set__int8_values_default(
    const rosidl_runtime_cpp::BoundedVector<int8_t, 3, typename ContainerAllocator::template rebind<int8_t>::other> & _arg)
  {
    this->int8_values_default = _arg;
    return *this;
  }
  Type & set__uint8_values_default(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 3, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->uint8_values_default = _arg;
    return *this;
  }
  Type & set__int16_values_default(
    const rosidl_runtime_cpp::BoundedVector<int16_t, 3, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->int16_values_default = _arg;
    return *this;
  }
  Type & set__uint16_values_default(
    const rosidl_runtime_cpp::BoundedVector<uint16_t, 3, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->uint16_values_default = _arg;
    return *this;
  }
  Type & set__int32_values_default(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 3, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->int32_values_default = _arg;
    return *this;
  }
  Type & set__uint32_values_default(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 3, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->uint32_values_default = _arg;
    return *this;
  }
  Type & set__int64_values_default(
    const rosidl_runtime_cpp::BoundedVector<int64_t, 3, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->int64_values_default = _arg;
    return *this;
  }
  Type & set__uint64_values_default(
    const rosidl_runtime_cpp::BoundedVector<uint64_t, 3, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->uint64_values_default = _arg;
    return *this;
  }
  Type & set__string_values_default(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->string_values_default = _arg;
    return *this;
  }
  Type & set__alignment_check(
    const int32_t & _arg)
  {
    this->alignment_check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_cpp__msg__BoundedSequences
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_cpp__msg__BoundedSequences
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundedSequences_ & other) const
  {
    if (this->bool_values != other.bool_values) {
      return false;
    }
    if (this->byte_values != other.byte_values) {
      return false;
    }
    if (this->char_values != other.char_values) {
      return false;
    }
    if (this->float32_values != other.float32_values) {
      return false;
    }
    if (this->float64_values != other.float64_values) {
      return false;
    }
    if (this->int8_values != other.int8_values) {
      return false;
    }
    if (this->uint8_values != other.uint8_values) {
      return false;
    }
    if (this->int16_values != other.int16_values) {
      return false;
    }
    if (this->uint16_values != other.uint16_values) {
      return false;
    }
    if (this->int32_values != other.int32_values) {
      return false;
    }
    if (this->uint32_values != other.uint32_values) {
      return false;
    }
    if (this->int64_values != other.int64_values) {
      return false;
    }
    if (this->uint64_values != other.uint64_values) {
      return false;
    }
    if (this->string_values != other.string_values) {
      return false;
    }
    if (this->basic_types_values != other.basic_types_values) {
      return false;
    }
    if (this->constants_values != other.constants_values) {
      return false;
    }
    if (this->defaults_values != other.defaults_values) {
      return false;
    }
    if (this->bool_values_default != other.bool_values_default) {
      return false;
    }
    if (this->byte_values_default != other.byte_values_default) {
      return false;
    }
    if (this->char_values_default != other.char_values_default) {
      return false;
    }
    if (this->float32_values_default != other.float32_values_default) {
      return false;
    }
    if (this->float64_values_default != other.float64_values_default) {
      return false;
    }
    if (this->int8_values_default != other.int8_values_default) {
      return false;
    }
    if (this->uint8_values_default != other.uint8_values_default) {
      return false;
    }
    if (this->int16_values_default != other.int16_values_default) {
      return false;
    }
    if (this->uint16_values_default != other.uint16_values_default) {
      return false;
    }
    if (this->int32_values_default != other.int32_values_default) {
      return false;
    }
    if (this->uint32_values_default != other.uint32_values_default) {
      return false;
    }
    if (this->int64_values_default != other.int64_values_default) {
      return false;
    }
    if (this->uint64_values_default != other.uint64_values_default) {
      return false;
    }
    if (this->string_values_default != other.string_values_default) {
      return false;
    }
    if (this->alignment_check != other.alignment_check) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundedSequences_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundedSequences_

// alias to use template instance with default allocator
using BoundedSequences =
  rosidl_generator_cpp::msg::BoundedSequences_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_generator_cpp

#endif  // ROSIDL_GENERATOR_CPP__MSG__DETAIL__BOUNDED_SEQUENCES__STRUCT_HPP_
