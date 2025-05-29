function [data, info] = enableRequest
%Enable gives an empty data for piper_msgs/EnableRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'piper_msgs/EnableRequest';
[data.enable_request, info.enable_request] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'piper_msgs/EnableRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'enable_request';
