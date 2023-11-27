// Generated by gencpp from file iiwa_msgs/SinePatternControlMode.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SINEPATTERNCONTROLMODE_H
#define IIWA_MSGS_MESSAGE_SINEPATTERNCONTROLMODE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SinePatternControlMode_
{
  typedef SinePatternControlMode_<ContainerAllocator> Type;

  SinePatternControlMode_()
    : cartesian_dof(0)
    , frequency(0.0)
    , amplitude(0.0)
    , stiffness(0.0)  {
    }
  SinePatternControlMode_(const ContainerAllocator& _alloc)
    : cartesian_dof(0)
    , frequency(0.0)
    , amplitude(0.0)
    , stiffness(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _cartesian_dof_type;
  _cartesian_dof_type cartesian_dof;

   typedef double _frequency_type;
  _frequency_type frequency;

   typedef double _amplitude_type;
  _amplitude_type amplitude;

   typedef double _stiffness_type;
  _stiffness_type stiffness;





  typedef boost::shared_ptr< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> const> ConstPtr;

}; // struct SinePatternControlMode_

typedef ::iiwa_msgs::SinePatternControlMode_<std::allocator<void> > SinePatternControlMode;

typedef boost::shared_ptr< ::iiwa_msgs::SinePatternControlMode > SinePatternControlModePtr;
typedef boost::shared_ptr< ::iiwa_msgs::SinePatternControlMode const> SinePatternControlModeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator2> & rhs)
{
  return lhs.cartesian_dof == rhs.cartesian_dof &&
    lhs.frequency == rhs.frequency &&
    lhs.amplitude == rhs.amplitude &&
    lhs.stiffness == rhs.stiffness;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e72785e47bec423cb99a63dd32ae2a54";
  }

  static const char* value(const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe72785e47bec423cULL;
  static const uint64_t static_value2 = 0xb99a63dd32ae2a54ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SinePatternControlMode";
  }

  static const char* value(const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The degree of freedom for performing the sine oscillation.\n"
"int32 cartesian_dof\n"
"\n"
"# The value of the frequency for the sine oscillation [Hz].\n"
"float64 frequency\n"
"\n"
"# The value of the amplitude. In [N].\n"
"float64 amplitude\n"
"\n"
"# The value of the stiffness. In [N/m].\n"
"float64 stiffness\n"
;
  }

  static const char* value(const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cartesian_dof);
      stream.next(m.frequency);
      stream.next(m.amplitude);
      stream.next(m.stiffness);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SinePatternControlMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SinePatternControlMode_<ContainerAllocator>& v)
  {
    s << indent << "cartesian_dof: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cartesian_dof);
    s << indent << "frequency: ";
    Printer<double>::stream(s, indent + "  ", v.frequency);
    s << indent << "amplitude: ";
    Printer<double>::stream(s, indent + "  ", v.amplitude);
    s << indent << "stiffness: ";
    Printer<double>::stream(s, indent + "  ", v.stiffness);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SINEPATTERNCONTROLMODE_H
