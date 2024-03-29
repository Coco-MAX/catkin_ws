// Generated by gencpp from file duckiepond/SetValue.msg
// DO NOT EDIT!


#ifndef DUCKIEPOND_MESSAGE_SETVALUE_H
#define DUCKIEPOND_MESSAGE_SETVALUE_H

#include <ros/service_traits.h>


#include <duckiepond/SetValueRequest.h>
#include <duckiepond/SetValueResponse.h>


namespace duckiepond
{

struct SetValue
{

typedef SetValueRequest Request;
typedef SetValueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetValue
} // namespace duckiepond


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::duckiepond::SetValue > {
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::duckiepond::SetValue&) { return value(); }
};

template<>
struct DataType< ::duckiepond::SetValue > {
  static const char* value()
  {
    return "duckiepond/SetValue";
  }

  static const char* value(const ::duckiepond::SetValue&) { return value(); }
};


// service_traits::MD5Sum< ::duckiepond::SetValueRequest> should match 
// service_traits::MD5Sum< ::duckiepond::SetValue > 
template<>
struct MD5Sum< ::duckiepond::SetValueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::duckiepond::SetValue >::value();
  }
  static const char* value(const ::duckiepond::SetValueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::duckiepond::SetValueRequest> should match 
// service_traits::DataType< ::duckiepond::SetValue > 
template<>
struct DataType< ::duckiepond::SetValueRequest>
{
  static const char* value()
  {
    return DataType< ::duckiepond::SetValue >::value();
  }
  static const char* value(const ::duckiepond::SetValueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::duckiepond::SetValueResponse> should match 
// service_traits::MD5Sum< ::duckiepond::SetValue > 
template<>
struct MD5Sum< ::duckiepond::SetValueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::duckiepond::SetValue >::value();
  }
  static const char* value(const ::duckiepond::SetValueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::duckiepond::SetValueResponse> should match 
// service_traits::DataType< ::duckiepond::SetValue > 
template<>
struct DataType< ::duckiepond::SetValueResponse>
{
  static const char* value()
  {
    return DataType< ::duckiepond::SetValue >::value();
  }
  static const char* value(const ::duckiepond::SetValueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DUCKIEPOND_MESSAGE_SETVALUE_H
