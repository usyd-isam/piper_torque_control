// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for piper_msgs/PosCmd
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
#include "piper_msgs/msg/pos_cmd.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class PIPER_MSGS_EXPORT ros2_piper_msgs_msg_PosCmd_common : public MATLABROS2MsgInterface<piper_msgs::msg::PosCmd> {
  public:
    virtual ~ros2_piper_msgs_msg_PosCmd_common(){}
    virtual void copy_from_struct(piper_msgs::msg::PosCmd* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const piper_msgs::msg::PosCmd* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_piper_msgs_msg_PosCmd_common::copy_from_struct(piper_msgs::msg::PosCmd* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //x
        const matlab::data::TypedArray<double> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    try {
        //y
        const matlab::data::TypedArray<double> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    try {
        //z
        const matlab::data::TypedArray<double> z_arr = arr["z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
    try {
        //roll
        const matlab::data::TypedArray<double> roll_arr = arr["roll"];
        msg->roll = roll_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'roll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'roll' is wrong type; expected a double.");
    }
    try {
        //pitch
        const matlab::data::TypedArray<double> pitch_arr = arr["pitch"];
        msg->pitch = pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pitch' is wrong type; expected a double.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<double> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a double.");
    }
    try {
        //gripper
        const matlab::data::TypedArray<double> gripper_arr = arr["gripper"];
        msg->gripper = gripper_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gripper' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gripper' is wrong type; expected a double.");
    }
    try {
        //mode1
        const matlab::data::TypedArray<int32_t> mode1_arr = arr["mode1"];
        msg->mode1 = mode1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode1' is wrong type; expected a int32.");
    }
    try {
        //mode2
        const matlab::data::TypedArray<int32_t> mode2_arr = arr["mode2"];
        msg->mode2 = mode2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode2' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_piper_msgs_msg_PosCmd_common::get_arr(MDFactory_T& factory, const piper_msgs::msg::PosCmd* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","x","y","z","roll","pitch","yaw","gripper","mode1","mode2"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("piper_msgs/PosCmd");
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createScalar(currentElement_z);
    // roll
    auto currentElement_roll = (msg + ctr)->roll;
    outArray[ctr]["roll"] = factory.createScalar(currentElement_roll);
    // pitch
    auto currentElement_pitch = (msg + ctr)->pitch;
    outArray[ctr]["pitch"] = factory.createScalar(currentElement_pitch);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // gripper
    auto currentElement_gripper = (msg + ctr)->gripper;
    outArray[ctr]["gripper"] = factory.createScalar(currentElement_gripper);
    // mode1
    auto currentElement_mode1 = (msg + ctr)->mode1;
    outArray[ctr]["mode1"] = factory.createScalar(currentElement_mode1);
    // mode2
    auto currentElement_mode2 = (msg + ctr)->mode2;
    outArray[ctr]["mode2"] = factory.createScalar(currentElement_mode2);
    }
    return std::move(outArray);
  } 
class PIPER_MSGS_EXPORT ros2_piper_msgs_PosCmd_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_piper_msgs_PosCmd_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_piper_msgs_PosCmd_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<piper_msgs::msg::PosCmd,ros2_piper_msgs_msg_PosCmd_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_piper_msgs_PosCmd_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<piper_msgs::msg::PosCmd,ros2_piper_msgs_msg_PosCmd_common>>();
  }
  std::shared_ptr<void> ros2_piper_msgs_PosCmd_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<piper_msgs::msg::PosCmd>();
    ros2_piper_msgs_msg_PosCmd_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_piper_msgs_PosCmd_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_piper_msgs_msg_PosCmd_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (piper_msgs::msg::PosCmd*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_msg_PosCmd_common, MATLABROS2MsgInterface<piper_msgs::msg::PosCmd>)
CLASS_LOADER_REGISTER_CLASS(ros2_piper_msgs_PosCmd_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER