// Generated by gencpp from file iiwa_msgs/DesiredForceControlMode.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_DESIREDFORCECONTROLMODE_H
#define IIWA_MSGS_MESSAGE_DESIREDFORCECONTROLMODE_H


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
struct DesiredForceControlMode_
{
  typedef DesiredForceControlMode_<ContainerAllocator> Type;

  DesiredForceControlMode_()
    : cartesian_dof(0)
    , desired_force(0.0)
    , desired_stiffness(0.0)  {
    }
  DesiredForceControlMode_(const ContainerAllocator& _alloc)
    : cartesian_dof(0)
    , desired_force(0.0)
    , desired_stiffness(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _cartesian_dof_type;
  _cartesian_dof_type cartesian_dof;

   typedef double _desired_force_type;
  _desired_force_type desired_force;

   typedef double _desired_stiffness_type;
  _desired_stiffness_type desired_stiffness;





  typedef boost::shared_ptr< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> const> ConstPtr;

}; // struct DesiredForceControlMode_

typedef ::iiwa_msgs::DesiredForceControlMode_<std::allocator<void> > DesiredForceControlMode;

typedef boost::shared_ptr< ::iiwa_msgs::DesiredForceControlMode > DesiredForceControlModePtr;
typedef boost::shared_ptr< ::iiwa_msgs::DesiredForceControlMode const> DesiredForceControlModeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator1> & lhs, const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator2> & rhs)
{
  return lhs.cartesian_dof == rhs.cartesian_dof &&
    lhs.desired_force == rhs.desired_force &&
    lhs.desired_stiffness == rhs.desired_stiffness;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator1> & lhs, const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da11717a4c7e94e66d2e956ead0bf6f3";
  }

  static const char* value(const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda11717a4c7e94e6ULL;
  static const uint64_t static_value2 = 0x6d2e956ead0bf6f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/DesiredForceControlMode";
  }

  static const char* value(const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The degree of freedom on which the desired force\n"
"int32 cartesian_dof\n"
"\n"
"# The value of the desired force. In [N].\n"
"float64 desired_force\n"
"\n"
"# The value of the stiffness. In [N/m].\n"
"float64 desired_stiffness\n"
;
  }

  static const char* value(const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cartesian_dof);
      stream.next(m.desired_force);
      stream.next(m.desired_stiffness);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DesiredForceControlMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::DesiredForceControlMode_<ContainerAllocator>& v)
  {
    s << indent << "cartesian_dof: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cartesian_dof);
    s << indent << "desired_force: ";
    Printer<double>::stream(s, indent + "  ", v.desired_force);
    s << indent << "desired_stiffness: ";
    Printer<double>::stream(s, indent + "  ", v.desired_stiffness);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_DESIREDFORCECONTROLMODE_H
