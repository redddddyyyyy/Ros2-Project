#!/usr/bin/env python3
"""
Simple ROS 2 action client that sends a goal of N seconds and prints feedback.
Assumes you already have a compatible countdown action server running.
"""

import sys
import rclpy
from rclpy.node import Node
from example_interfaces.action import Fibonacci   # Replace with your Countdown action type
from rclpy.action import ActionClient

class CountdownClient(Node):
    def __init__(self, seconds):
        super().__init__('countdown_client')
        self._action_client = ActionClient(self, Fibonacci, 'countdown')  # change to your action name
        self._goal_seconds  = seconds
        self._send_goal()

    def _send_goal(self):
        goal_msg = Fibonacci.Goal()        # change to your Goal message
        goal_msg.order = self._goal_seconds
        self.get_logger().info(f'Sending goal: {self._goal_seconds}s')
        self._action_client.wait_for_server()
        self._goal_handle_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_cb
        )
        self._goal_handle_future.add_done_callback(self.goal_response_cb)

    def feedback_cb(self, feedback_msg):
        self.get_logger().info(f'Remaining: {feedback_msg.feedback.sequence[-1]}s')

    def goal_response_cb(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('Goal rejected')
            rclpy.shutdown()
            return
        self.get_logger().info('Goal accepted')
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_cb)

    def result_cb(self, future):
        status = future.result().status
        self.get_logger().info(f'Finished, success={status == 4}')
        rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    secs = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    CountdownClient(secs)
    rclpy.spin(rclpy.get_default_context().get_nodes()[0])  # spin the one node created

if __name__ == '__main__':
    main()
