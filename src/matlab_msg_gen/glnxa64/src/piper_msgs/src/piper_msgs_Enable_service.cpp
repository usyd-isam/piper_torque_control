// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for piper_msgs/EnableRequest
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "piper_msgs/srv/enable.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ServiceTemplates.hpp"
class PIPER_MSGS_EXPORT ros2_piper_msgs_msg_EnableRequest_common : public MATLABROS2MsgInterface<piper_msgs::srv::Enable::Request> {
  public:
    virtual ~ros2_piper_msgs_msg_EnableRequest_common(){}
    virtual void copy_from_struct(piper_msgs::srv::Enable::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const piper_msgs::srv::Enable::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_piper_msgs_msg_EnableRequest_common::copy_from_struct(piper_msgs::srv::Enable::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //enable_request
        const matlab::data::TypedArray<bool> enable_request_arr = arr["enable_request"];
        msg->enable_request = enable_request_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'enable_request' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'enable_request' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_piper_msgs_msg_EnableRequest_common::get_arr(MDFactory_T& factory, const piper_msgs::srv::Enable::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","enable_request"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("piper_msgs/EnableRequest");
    // enable_request
    auto currentElement_enable_request = (msg + ctr)->enable_request;
    outArray[ctr]["enable_request"] = factory.createScalar(currentElement_enable_request);
    }
    return std::move(outArray);
  }
class PIPER_MSGS_EXPORT ros2_piper_msgs_msg_EnableResponse_common : public MATLABROS2MsgInterface<piper_msgs::srv::Enable::Response> {
  public:
    virtual ~ros2_piper_msgs_msg_EnableResponse_common(){}
    virtual void copy_from_struct(piper_msgs::srv::Enable::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const piper_msgs::srv::Enable::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_piper_msgs_msg_EnableResponse_common::copy_from_struct(piper_msgs::srv::Enable::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //enable_response
        const matlab::data::TypedArray<bool> enable_response_arr = arr["enable_response"];
        msg->enable_response = enable_response_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'enable_response' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'enable_response' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_piper_msgs_msg_EnableResponse_common::get_arr(MDFactory_T& factory, const piper_msgs::srv::Enable::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","enable_response"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("piper_msgs/EnableResponse");
    // enable_response
    auto currentElement_enable_response = (msg + ctr)->enable_response;
    outArray[ctr]["enable_response"] = factory.createScalar(currentElement_enable_response);
    }
    return std::move(outArray);
  } 
class PIPER_MSGS_EXPORT ros2_piper_msgs_Enable_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_piper_msgs_Enable_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_piper_msgs_Enable_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<piper_msgs::srv::Enable::Request,ros2_piper_msgs_msg_EnableRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<piper_msgs::srv::Enable::Response,ros2_piper_msgs_msg_EnableResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_piper_msgs_Enable_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<piper_msgs::srv::Enable::Request,ros2_piper_msgs_msg_EnableRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<piper_msgs::srv::Enable::Response,ros2_piper_msgs_msg_EnableResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_piper_msgs_Enable_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<piper_msgs::srv::Enable::Request>();
        ros2_piper_msgs_msg_EnableRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<piper_msgs::srv::Enable::Response>();
        ros2_piper_msgs_msg_EnableResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_piper_msgs_Enable_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<piper_msgs::srv::Enable,piper_msgs::srv::Enable::Request,piper_msgs::srv::Enable::Response,ros2_piper_msgs_msg_EnableRequest_common,ros2_piper_msgs_msg_EnableResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_piper_msgs_Enable_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<piper_msgs::srv::Enable,piper_msgs::srv::Enable::Request,piper_msgs::srv::Enable::Response,ros2_piper_msgs_msg_EnableRequest_common,ros2_piper_msgs_msg_EnableResponse_common,rclcpp::Client<piper_msgs::srv::Enable>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_piper_msgs_Enable_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_piper_msgs_msg_EnableRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (piper_msgs::srv::Enable::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_piper_msgs_msg_EnableResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (piper_msgs::srv::Enable::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_msg_EnableRequest_common, MATLABROS2MsgInterface<piper_msgs::srv::Enable::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_msg_EnableResponse_common, MATLABROS2MsgInterface<piper_msgs::srv::Enable::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_Enable_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
