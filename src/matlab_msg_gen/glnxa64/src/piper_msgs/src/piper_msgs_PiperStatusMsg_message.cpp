// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for piper_msgs/PiperStatusMsg
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
#include "piper_msgs/msg/piper_status_msg.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PIPER_MSGS_EXPORT ros2_piper_msgs_msg_PiperStatusMsg_common : public MATLABROS2MsgInterface<piper_msgs::msg::PiperStatusMsg> {
  public:
    virtual ~ros2_piper_msgs_msg_PiperStatusMsg_common(){}
    virtual void copy_from_struct(piper_msgs::msg::PiperStatusMsg* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const piper_msgs::msg::PiperStatusMsg* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_piper_msgs_msg_PiperStatusMsg_common::copy_from_struct(piper_msgs::msg::PiperStatusMsg* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //ctrl_mode
        const matlab::data::TypedArray<uint8_t> ctrl_mode_arr = arr["ctrl_mode"];
        msg->ctrl_mode = ctrl_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ctrl_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ctrl_mode' is wrong type; expected a uint8.");
    }
    try {
        //arm_status
        const matlab::data::TypedArray<uint8_t> arm_status_arr = arr["arm_status"];
        msg->arm_status = arm_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'arm_status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'arm_status' is wrong type; expected a uint8.");
    }
    try {
        //mode_feedback
        const matlab::data::TypedArray<uint8_t> mode_feedback_arr = arr["mode_feedback"];
        msg->mode_feedback = mode_feedback_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode_feedback' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode_feedback' is wrong type; expected a uint8.");
    }
    try {
        //teach_status
        const matlab::data::TypedArray<uint8_t> teach_status_arr = arr["teach_status"];
        msg->teach_status = teach_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'teach_status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'teach_status' is wrong type; expected a uint8.");
    }
    try {
        //motion_status
        const matlab::data::TypedArray<uint8_t> motion_status_arr = arr["motion_status"];
        msg->motion_status = motion_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'motion_status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'motion_status' is wrong type; expected a uint8.");
    }
    try {
        //trajectory_num
        const matlab::data::TypedArray<uint8_t> trajectory_num_arr = arr["trajectory_num"];
        msg->trajectory_num = trajectory_num_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trajectory_num' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'trajectory_num' is wrong type; expected a uint8.");
    }
    try {
        //err_code
        const matlab::data::TypedArray<int64_t> err_code_arr = arr["err_code"];
        msg->err_code = err_code_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'err_code' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'err_code' is wrong type; expected a int64.");
    }
    try {
        //joint_1_angle_limit
        const matlab::data::TypedArray<bool> joint_1_angle_limit_arr = arr["joint_1_angle_limit"];
        msg->joint_1_angle_limit = joint_1_angle_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_1_angle_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'joint_1_angle_limit' is wrong type; expected a logical.");
    }
    try {
        //joint_2_angle_limit
        const matlab::data::TypedArray<bool> joint_2_angle_limit_arr = arr["joint_2_angle_limit"];
        msg->joint_2_angle_limit = joint_2_angle_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_2_angle_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'joint_2_angle_limit' is wrong type; expected a logical.");
    }
    try {
        //joint_3_angle_limit
        const matlab::data::TypedArray<bool> joint_3_angle_limit_arr = arr["joint_3_angle_limit"];
        msg->joint_3_angle_limit = joint_3_angle_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_3_angle_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'joint_3_angle_limit' is wrong type; expected a logical.");
    }
    try {
        //joint_4_angle_limit
        const matlab::data::TypedArray<bool> joint_4_angle_limit_arr = arr["joint_4_angle_limit"];
        msg->joint_4_angle_limit = joint_4_angle_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_4_angle_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'joint_4_angle_limit' is wrong type; expected a logical.");
    }
    try {
        //joint_5_angle_limit
        const matlab::data::TypedArray<bool> joint_5_angle_limit_arr = arr["joint_5_angle_limit"];
        msg->joint_5_angle_limit = joint_5_angle_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_5_angle_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'joint_5_angle_limit' is wrong type; expected a logical.");
    }
    try {
        //joint_6_angle_limit
        const matlab::data::TypedArray<bool> joint_6_angle_limit_arr = arr["joint_6_angle_limit"];
        msg->joint_6_angle_limit = joint_6_angle_limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_6_angle_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'joint_6_angle_limit' is wrong type; expected a logical.");
    }
    try {
        //communication_status_joint_1
        const matlab::data::TypedArray<bool> communication_status_joint_1_arr = arr["communication_status_joint_1"];
        msg->communication_status_joint_1 = communication_status_joint_1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'communication_status_joint_1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'communication_status_joint_1' is wrong type; expected a logical.");
    }
    try {
        //communication_status_joint_2
        const matlab::data::TypedArray<bool> communication_status_joint_2_arr = arr["communication_status_joint_2"];
        msg->communication_status_joint_2 = communication_status_joint_2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'communication_status_joint_2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'communication_status_joint_2' is wrong type; expected a logical.");
    }
    try {
        //communication_status_joint_3
        const matlab::data::TypedArray<bool> communication_status_joint_3_arr = arr["communication_status_joint_3"];
        msg->communication_status_joint_3 = communication_status_joint_3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'communication_status_joint_3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'communication_status_joint_3' is wrong type; expected a logical.");
    }
    try {
        //communication_status_joint_4
        const matlab::data::TypedArray<bool> communication_status_joint_4_arr = arr["communication_status_joint_4"];
        msg->communication_status_joint_4 = communication_status_joint_4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'communication_status_joint_4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'communication_status_joint_4' is wrong type; expected a logical.");
    }
    try {
        //communication_status_joint_5
        const matlab::data::TypedArray<bool> communication_status_joint_5_arr = arr["communication_status_joint_5"];
        msg->communication_status_joint_5 = communication_status_joint_5_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'communication_status_joint_5' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'communication_status_joint_5' is wrong type; expected a logical.");
    }
    try {
        //communication_status_joint_6
        const matlab::data::TypedArray<bool> communication_status_joint_6_arr = arr["communication_status_joint_6"];
        msg->communication_status_joint_6 = communication_status_joint_6_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'communication_status_joint_6' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'communication_status_joint_6' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_piper_msgs_msg_PiperStatusMsg_common::get_arr(MDFactory_T& factory, const piper_msgs::msg::PiperStatusMsg* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","ctrl_mode","arm_status","mode_feedback","teach_status","motion_status","trajectory_num","err_code","joint_1_angle_limit","joint_2_angle_limit","joint_3_angle_limit","joint_4_angle_limit","joint_5_angle_limit","joint_6_angle_limit","communication_status_joint_1","communication_status_joint_2","communication_status_joint_3","communication_status_joint_4","communication_status_joint_5","communication_status_joint_6"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("piper_msgs/PiperStatusMsg");
    // ctrl_mode
    auto currentElement_ctrl_mode = (msg + ctr)->ctrl_mode;
    outArray[ctr]["ctrl_mode"] = factory.createScalar(currentElement_ctrl_mode);
    // arm_status
    auto currentElement_arm_status = (msg + ctr)->arm_status;
    outArray[ctr]["arm_status"] = factory.createScalar(currentElement_arm_status);
    // mode_feedback
    auto currentElement_mode_feedback = (msg + ctr)->mode_feedback;
    outArray[ctr]["mode_feedback"] = factory.createScalar(currentElement_mode_feedback);
    // teach_status
    auto currentElement_teach_status = (msg + ctr)->teach_status;
    outArray[ctr]["teach_status"] = factory.createScalar(currentElement_teach_status);
    // motion_status
    auto currentElement_motion_status = (msg + ctr)->motion_status;
    outArray[ctr]["motion_status"] = factory.createScalar(currentElement_motion_status);
    // trajectory_num
    auto currentElement_trajectory_num = (msg + ctr)->trajectory_num;
    outArray[ctr]["trajectory_num"] = factory.createScalar(currentElement_trajectory_num);
    // err_code
    auto currentElement_err_code = (msg + ctr)->err_code;
    outArray[ctr]["err_code"] = factory.createScalar(currentElement_err_code);
    // joint_1_angle_limit
    auto currentElement_joint_1_angle_limit = (msg + ctr)->joint_1_angle_limit;
    outArray[ctr]["joint_1_angle_limit"] = factory.createScalar(currentElement_joint_1_angle_limit);
    // joint_2_angle_limit
    auto currentElement_joint_2_angle_limit = (msg + ctr)->joint_2_angle_limit;
    outArray[ctr]["joint_2_angle_limit"] = factory.createScalar(currentElement_joint_2_angle_limit);
    // joint_3_angle_limit
    auto currentElement_joint_3_angle_limit = (msg + ctr)->joint_3_angle_limit;
    outArray[ctr]["joint_3_angle_limit"] = factory.createScalar(currentElement_joint_3_angle_limit);
    // joint_4_angle_limit
    auto currentElement_joint_4_angle_limit = (msg + ctr)->joint_4_angle_limit;
    outArray[ctr]["joint_4_angle_limit"] = factory.createScalar(currentElement_joint_4_angle_limit);
    // joint_5_angle_limit
    auto currentElement_joint_5_angle_limit = (msg + ctr)->joint_5_angle_limit;
    outArray[ctr]["joint_5_angle_limit"] = factory.createScalar(currentElement_joint_5_angle_limit);
    // joint_6_angle_limit
    auto currentElement_joint_6_angle_limit = (msg + ctr)->joint_6_angle_limit;
    outArray[ctr]["joint_6_angle_limit"] = factory.createScalar(currentElement_joint_6_angle_limit);
    // communication_status_joint_1
    auto currentElement_communication_status_joint_1 = (msg + ctr)->communication_status_joint_1;
    outArray[ctr]["communication_status_joint_1"] = factory.createScalar(currentElement_communication_status_joint_1);
    // communication_status_joint_2
    auto currentElement_communication_status_joint_2 = (msg + ctr)->communication_status_joint_2;
    outArray[ctr]["communication_status_joint_2"] = factory.createScalar(currentElement_communication_status_joint_2);
    // communication_status_joint_3
    auto currentElement_communication_status_joint_3 = (msg + ctr)->communication_status_joint_3;
    outArray[ctr]["communication_status_joint_3"] = factory.createScalar(currentElement_communication_status_joint_3);
    // communication_status_joint_4
    auto currentElement_communication_status_joint_4 = (msg + ctr)->communication_status_joint_4;
    outArray[ctr]["communication_status_joint_4"] = factory.createScalar(currentElement_communication_status_joint_4);
    // communication_status_joint_5
    auto currentElement_communication_status_joint_5 = (msg + ctr)->communication_status_joint_5;
    outArray[ctr]["communication_status_joint_5"] = factory.createScalar(currentElement_communication_status_joint_5);
    // communication_status_joint_6
    auto currentElement_communication_status_joint_6 = (msg + ctr)->communication_status_joint_6;
    outArray[ctr]["communication_status_joint_6"] = factory.createScalar(currentElement_communication_status_joint_6);
    }
    return std::move(outArray);
  } 
class PIPER_MSGS_EXPORT ros2_piper_msgs_PiperStatusMsg_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_piper_msgs_PiperStatusMsg_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_piper_msgs_PiperStatusMsg_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<piper_msgs::msg::PiperStatusMsg,ros2_piper_msgs_msg_PiperStatusMsg_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_piper_msgs_PiperStatusMsg_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<piper_msgs::msg::PiperStatusMsg,ros2_piper_msgs_msg_PiperStatusMsg_common>>();
  }
  std::shared_ptr<void> ros2_piper_msgs_PiperStatusMsg_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<piper_msgs::msg::PiperStatusMsg>();
    ros2_piper_msgs_msg_PiperStatusMsg_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_piper_msgs_PiperStatusMsg_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_piper_msgs_msg_PiperStatusMsg_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (piper_msgs::msg::PiperStatusMsg*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_msg_PiperStatusMsg_common, MATLABROS2MsgInterface<piper_msgs::msg::PiperStatusMsg>)
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_PiperStatusMsg_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER