// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for piper_msgs/JointCurrent
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
#include "piper_msgs/msg/joint_current.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PIPER_MSGS_EXPORT ros2_piper_msgs_msg_JointCurrent_common : public MATLABROS2MsgInterface<piper_msgs::msg::JointCurrent> {
  public:
    virtual ~ros2_piper_msgs_msg_JointCurrent_common(){}
    virtual void copy_from_struct(piper_msgs::msg::JointCurrent* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const piper_msgs::msg::JointCurrent* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_piper_msgs_msg_JointCurrent_common::copy_from_struct(piper_msgs::msg::JointCurrent* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["header"];
        auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //j1
        const matlab::data::TypedArray<int64_t> j1_arr = arr["j1"];
        msg->j1 = j1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'j1' is wrong type; expected a int64.");
    }
    try {
        //j2
        const matlab::data::TypedArray<int64_t> j2_arr = arr["j2"];
        msg->j2 = j2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'j2' is wrong type; expected a int64.");
    }
    try {
        //j3
        const matlab::data::TypedArray<int64_t> j3_arr = arr["j3"];
        msg->j3 = j3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'j3' is wrong type; expected a int64.");
    }
    try {
        //j4
        const matlab::data::TypedArray<int64_t> j4_arr = arr["j4"];
        msg->j4 = j4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'j4' is wrong type; expected a int64.");
    }
    try {
        //j5
        const matlab::data::TypedArray<int64_t> j5_arr = arr["j5"];
        msg->j5 = j5_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j5' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'j5' is wrong type; expected a int64.");
    }
    try {
        //j6
        const matlab::data::TypedArray<int64_t> j6_arr = arr["j6"];
        msg->j6 = j6_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'j6' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'j6' is wrong type; expected a int64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_piper_msgs_msg_JointCurrent_common::get_arr(MDFactory_T& factory, const piper_msgs::msg::JointCurrent* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","j1","j2","j3","j4","j5","j6"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("piper_msgs/JointCurrent");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // j1
    auto currentElement_j1 = (msg + ctr)->j1;
    outArray[ctr]["j1"] = factory.createScalar(currentElement_j1);
    // j2
    auto currentElement_j2 = (msg + ctr)->j2;
    outArray[ctr]["j2"] = factory.createScalar(currentElement_j2);
    // j3
    auto currentElement_j3 = (msg + ctr)->j3;
    outArray[ctr]["j3"] = factory.createScalar(currentElement_j3);
    // j4
    auto currentElement_j4 = (msg + ctr)->j4;
    outArray[ctr]["j4"] = factory.createScalar(currentElement_j4);
    // j5
    auto currentElement_j5 = (msg + ctr)->j5;
    outArray[ctr]["j5"] = factory.createScalar(currentElement_j5);
    // j6
    auto currentElement_j6 = (msg + ctr)->j6;
    outArray[ctr]["j6"] = factory.createScalar(currentElement_j6);
    }
    return std::move(outArray);
  } 
class PIPER_MSGS_EXPORT ros2_piper_msgs_JointCurrent_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_piper_msgs_JointCurrent_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_piper_msgs_JointCurrent_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<piper_msgs::msg::JointCurrent,ros2_piper_msgs_msg_JointCurrent_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_piper_msgs_JointCurrent_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<piper_msgs::msg::JointCurrent,ros2_piper_msgs_msg_JointCurrent_common>>();
  }
  std::shared_ptr<void> ros2_piper_msgs_JointCurrent_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<piper_msgs::msg::JointCurrent>();
    ros2_piper_msgs_msg_JointCurrent_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_piper_msgs_JointCurrent_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_piper_msgs_msg_JointCurrent_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (piper_msgs::msg::JointCurrent*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_msg_JointCurrent_common, MATLABROS2MsgInterface<piper_msgs::msg::JointCurrent>)
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_JointCurrent_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER