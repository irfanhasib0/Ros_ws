// Generated by gencpp from file robot_localization/GetStateResponse.msg
// DO NOT EDIT!


#ifndef ROBOT_LOCALIZATION_MESSAGE_GETSTATERESPONSE_H
#define ROBOT_LOCALIZATION_MESSAGE_GETSTATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_localization
{
template <class ContainerAllocator>
struct GetStateResponse_
{
  typedef GetStateResponse_<ContainerAllocator> Type;

  GetStateResponse_()
    : state()
    , covariance()  {
      state.assign(0.0);

      covariance.assign(0.0);
  }
  GetStateResponse_(const ContainerAllocator& _alloc)
    : state()
    , covariance()  {
  (void)_alloc;
      state.assign(0.0);

      covariance.assign(0.0);
  }



   typedef boost::array<double, 15>  _state_type;
  _state_type state;

   typedef boost::array<double, 225>  _covariance_type;
  _covariance_type covariance;





  typedef boost::shared_ptr< ::robot_localization::GetStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_localization::GetStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStateResponse_

typedef ::robot_localization::GetStateResponse_<std::allocator<void> > GetStateResponse;

typedef boost::shared_ptr< ::robot_localization::GetStateResponse > GetStateResponsePtr;
typedef boost::shared_ptr< ::robot_localization::GetStateResponse const> GetStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_localization::GetStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_localization::GetStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_localization

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geographic_msgs': ['/home/irfan/Desktop/ros_ws/src/geographic_info/geographic_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/home/irfan/Desktop/ros_ws/src/unique_identifier/uuid_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_localization::GetStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_localization::GetStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_localization::GetStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_localization::GetStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_localization::GetStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_localization::GetStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_localization::GetStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d49e6249cf8371736e3286b16a7ce83";
  }

  static const char* value(const ::robot_localization::GetStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d49e6249cf83717ULL;
  static const uint64_t static_value2 = 0x36e3286b16a7ce83ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_localization::GetStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_localization/GetStateResponse";
  }

  static const char* value(const ::robot_localization::GetStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_localization::GetStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float64[15] state\n"
"\n"
"\n"
"float64[225] covariance\n"
"\n"
;
  }

  static const char* value(const ::robot_localization::GetStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_localization::GetStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.covariance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_localization::GetStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_localization::GetStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "state[]" << std::endl;
    for (size_t i = 0; i < v.state.size(); ++i)
    {
      s << indent << "  state[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.state[i]);
    }
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_LOCALIZATION_MESSAGE_GETSTATERESPONSE_H
