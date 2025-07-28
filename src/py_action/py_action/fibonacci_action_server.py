#!/usr/bin/env python3
"""
ROS 2 Fibonacci Action Server (synchronous version)
"""

import time                                    # <-- NEW
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup

from py_action_interfaces.action import Fibonacci


class FibonacciActionServer(Node):
    def __init__(self):
        super().__init__('fibonacci_action_server')

        self._action_server = ActionServer(
            self,
            Fibonacci,                      # interface type
            'fibonacci',                    # action name
            self.execute_callback,          # sync callback
            callback_group=ReentrantCallbackGroup()
        )

        self.get_logger().info('✅ Fibonacci Action Server is ready.')

    # ------------------------------------------------------------------
    def execute_callback(self, goal_handle):
        """Compute the Fibonacci sequence synchronously and stream feedback."""
        order = goal_handle.request.order
        self.get_logger().info(f'Received goal: order = {order}')

        # initial two numbers
        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        # build the sequence
        for i in range(2, order):
            next_val = (
                feedback_msg.partial_sequence[i-1]
                + feedback_msg.partial_sequence[i-2]
            )
            feedback_msg.partial_sequence.append(next_val)

            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Feedback: {feedback_msg.partial_sequence}')

            time.sleep(1.0)                # simulate work (no asyncio)

        goal_handle.succeed()

        result = Fibonacci.Result()
        result.sequence = feedback_msg.partial_sequence
        return result
    # ------------------------------------------------------------------


def main(args=None):
    rclpy.init(args=args)
    server = FibonacciActionServer()
    rclpy.spin(server)
    server.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

