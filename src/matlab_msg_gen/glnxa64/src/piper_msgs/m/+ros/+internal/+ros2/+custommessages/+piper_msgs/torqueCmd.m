function [data, info] = torqueCmd
%TorqueCmd gives an empty data for piper_msgs/TorqueCmd
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'piper_msgs/TorqueCmd';
[data.motor_num, info.motor_num] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.t_ref, info.t_ref] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'piper_msgs/TorqueCmd';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'motor_num';
info.MatPath{2} = 't_ref';
