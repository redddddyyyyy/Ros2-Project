import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/reddy/ros2_ws/src/py_srvcli/install/py_srvcli'
