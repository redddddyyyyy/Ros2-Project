#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Talker(Node):
    def __init__(self):
        self.declare_parameter('publish_rate', 1.0)
        rate = self.get_parameter('publish_rate').value
	timer_period = 1.0 / rate
	self.publisher_= self.create_publisher(string, "chatter", 10)
	self.timer = self.create_timer(timer_period,self.timer_cb)
	self.counter = 0

    def timer_cb(self):
        msg = String()
        msg.data = f'Howdy ROS 2: {self.counter}'
        self.publisher.publish(msg)
        self.get_logger().info(f'Publishing: {msg.data}')
        self.counter += 1

def main():
    rclpy.init()
    rclpy.spin(Talker())
    rclpy.shutdown()

if __name__ == '__main__':
    main()
