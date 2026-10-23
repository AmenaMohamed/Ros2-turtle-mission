import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/mnt/c/Users/Owner/Amena/engineering/mindcloud/Tasks/Navigation-training/Task1-ROS2/Ros2-turtle-mission/turtlesim-ws/src/install/turtle_mission'
