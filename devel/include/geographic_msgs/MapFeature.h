// Generated by gencpp from file geographic_msgs/MapFeature.msg
// DO NOT EDIT!


#ifndef GEOGRAPHIC_MSGS_MESSAGE_MAPFEATURE_H
#define GEOGRAPHIC_MSGS_MESSAGE_MAPFEATURE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <uuid_msgs/UniqueID.h>
#include <uuid_msgs/UniqueID.h>
#include <geographic_msgs/KeyValue.h>

namespace geographic_msgs
{
template <class ContainerAllocator>
struct MapFeature_
{
  typedef MapFeature_<ContainerAllocator> Type;

  MapFeature_()
    : id()
    , components()
    , props()  {
    }
  MapFeature_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , components(_alloc)
    , props(_alloc)  {
  (void)_alloc;
    }



   typedef  ::uuid_msgs::UniqueID_<ContainerAllocator>  _id_type;
  _id_type id;

   typedef std::vector< ::uuid_msgs::UniqueID_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::uuid_msgs::UniqueID_<ContainerAllocator> >::other >  _components_type;
  _components_type components;

   typedef std::vector< ::geographic_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geographic_msgs::KeyValue_<ContainerAllocator> >::other >  _props_type;
  _props_type props;





  typedef boost::shared_ptr< ::geographic_msgs::MapFeature_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geographic_msgs::MapFeature_<ContainerAllocator> const> ConstPtr;

}; // struct MapFeature_

typedef ::geographic_msgs::MapFeature_<std::allocator<void> > MapFeature;

typedef boost::shared_ptr< ::geographic_msgs::MapFeature > MapFeaturePtr;
typedef boost::shared_ptr< ::geographic_msgs::MapFeature const> MapFeatureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geographic_msgs::MapFeature_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geographic_msgs::MapFeature_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace geographic_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geographic_msgs': ['/home/irfan/Desktop/ros_ws/src/geographic_info/geographic_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/home/irfan/Desktop/ros_ws/src/unique_identifier/uuid_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::MapFeature_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::MapFeature_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::MapFeature_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::MapFeature_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::MapFeature_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::MapFeature_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geographic_msgs::MapFeature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2505ace5e8da8a15b610eaf62bdefae";
  }

  static const char* value(const ::geographic_msgs::MapFeature_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2505ace5e8da8a1ULL;
  static const uint64_t static_value2 = 0x5b610eaf62bdefaeULL;
};

template<class ContainerAllocator>
struct DataType< ::geographic_msgs::MapFeature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geographic_msgs/MapFeature";
  }

  static const char* value(const ::geographic_msgs::MapFeature_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geographic_msgs::MapFeature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Geographic map feature.\n"
"#\n"
"# A list of WayPoint IDs for features like streets, highways, hiking\n"
"# trails, the outlines of buildings and parking lots in sequential\n"
"# order.\n"
"#\n"
"# Feature lists may also contain other feature lists as members.\n"
"\n"
"uuid_msgs/UniqueID   id         # Unique feature identifier\n"
"uuid_msgs/UniqueID[] components # Sequence of feature components\n"
"KeyValue[] props                # Key/value properties for this feature\n"
"\n"
"================================================================================\n"
"MSG: uuid_msgs/UniqueID\n"
"# A universally unique identifier (UUID).\n"
"#\n"
"#  http://en.wikipedia.org/wiki/Universally_unique_identifier\n"
"#  http://tools.ietf.org/html/rfc4122.html\n"
"\n"
"uint8[16] uuid\n"
"\n"
"================================================================================\n"
"MSG: geographic_msgs/KeyValue\n"
"# Geographic map tag (key, value) pair\n"
"#\n"
"# This is equivalent to diagnostic_msgs/KeyValue, repeated here to\n"
"# avoid introducing a trivial stack dependency.\n"
"\n"
"string key                     # tag label\n"
"string value                   # corresponding value\n"
;
  }

  static const char* value(const ::geographic_msgs::MapFeature_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geographic_msgs::MapFeature_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.components);
      stream.next(m.props);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapFeature_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geographic_msgs::MapFeature_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geographic_msgs::MapFeature_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    s << std::endl;
    Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "  ", v.id);
    s << indent << "components[]" << std::endl;
    for (size_t i = 0; i < v.components.size(); ++i)
    {
      s << indent << "  components[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::uuid_msgs::UniqueID_<ContainerAllocator> >::stream(s, indent + "    ", v.components[i]);
    }
    s << indent << "props[]" << std::endl;
    for (size_t i = 0; i < v.props.size(); ++i)
    {
      s << indent << "  props[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geographic_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.props[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOGRAPHIC_MSGS_MESSAGE_MAPFEATURE_H
