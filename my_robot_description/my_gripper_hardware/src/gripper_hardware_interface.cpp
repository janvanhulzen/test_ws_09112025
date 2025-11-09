#include "gripper_hardware_interface.hpp"

namespace gripper_hardware {

hardware_interface::CallbackReturn GripperHardwareInterface::on_init
    (const hardware_interface::HardwareInfo & info)
{
    if (hardware_interface::SystemInterface::on_init(info) !=
        hardware_interface::CallbackReturn::SUCCESS)
    {
        return hardware_interface::CallbackReturn::ERROR;
    }

    info_ = info;

    joint1_motor_id_ = std::stoi(info_.hardware_parameters["joint1_motor_id"]);
    port_ = info_.hardware_parameters["dynamixel_port"];

    driver_ = std::make_shared<XL330Driver>(port_);

    RCLCPP_INFO(get_logger(), "On init of gripper with ID: %i", joint1_motor_id_);

    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn GripperHardwareInterface::on_configure
    (const rclcpp_lifecycle::State & previous_state)
{
    (void)previous_state;
    if (driver_->init() !=0) {
        return hardware_interface::CallbackReturn::ERROR;
    }
    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn GripperHardwareInterface::on_activate
    (const rclcpp_lifecycle::State & previous_state)
{
    (void)previous_state;
    driver_->activateWithPositionMode(joint1_motor_id_);
    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn GripperHardwareInterface::on_deactivate
    (const rclcpp_lifecycle::State & previous_state)
{
    (void)previous_state;
    driver_->deactivate(joint1_motor_id_);
    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::return_type GripperHardwareInterface::read
    (const rclcpp::Time & time, const rclcpp::Duration & period)
{
    (void)time;
    (void)period;

    set_state("gripper_joint1/position", driver_->getPositionRadian(joint1_motor_id_));

    RCLCPP_INFO(get_logger(), "STATE joint1: %lf",get_state("gripper_joint1/position"));

    return hardware_interface::return_type::OK;
}

hardware_interface::return_type GripperHardwareInterface::write
    (const rclcpp::Time & time, const rclcpp::Duration & period)
{
    (void)time;
    (void)period;

    driver_->setTargetPositionRadian(joint1_motor_id_, get_command("gripper_joint1/position"));

    // RCLCPP_INFO(get_logger(), "COMMAND joint1: %lf, joint2: %lf", 
    //     get_command("gripper_joint1/position"), get_command("gripper_joint2/position"));

    return hardware_interface::return_type::OK;
}

} // namespace gripper_hardware

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(gripper_hardware::GripperHardwareInterface, hardware_interface::SystemInterface)
