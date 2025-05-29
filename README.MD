# Piper Torque Controller for PAT Platform

Forked from Piper ROS (https://github.com/agilexrobotics/Piper_ros)

## 1. Changes to original repo

### 1.1 Torque Control

Torque control is enabled by creating the **TorqueCmd** topic. For standardisation, `geometry_msgs/Vector3` is used. X = motor number, Y = Torque value, Z is unused.  Specify the joint number and reference torque and publish.

### 1.2 Current Feedback

Motor current with timestamp is replacing the effort section in the `joint_states_single` topic.

### 1.3 Joint and positional control

Joint and positional controls functions are deleted for safety, meaning **TORQUE CONTROL ONLY**

### 1.4 PAT specific safety feature

Only joint 2, 3, and 5 are allowed for MIT control. All of the other joints will **stay at the same position upon enable/initialisation**


## 2 To use

Setup and prereq of this package is the same as Piper ROS. The new features are introduced:

### 2.1 Send torque message

Example: To give motor #2 a 0.5 Nm of force:

` ros2 topic pub -1 /torque_cmd geometry_msgs/Vector3 "{X: 2, Y: 0.5, Z: 0}" `