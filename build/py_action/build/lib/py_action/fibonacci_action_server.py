import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from py_action.action import Fibonacci  # auto-generated from .action file
from rclpy.callback_groups import ReentrantCallbackGroup
from py_action_interfaces.action import Fibonacci

class FibonacciActionServer(Node):
    def __init__(self):
        super().__init__('fibonacci_action_server')
        self._action_server = ActionServer(
            self,
            Fibonacci,
            'fibonacci',
            self.execute_callback,
            callback_group=ReentrantCallbackGroup()
        )

    async def execute_callback(self, goal_handle):
        self.get_logger().info(f'Received goal request: order = {goal_handle.request.order}')

        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        for i in range(2, goal_handle.request.order):
            feedback_msg.partial_sequence.append(
                feedback_msg.partial_sequence[i - 1] + feedback_msg.partial_sequence[i - 2]
            )
            self.get_logger().info(f'Feedback: {feedback_msg.partial_sequence}')
            goal_handle.publish_feedback(feedback_msg)
            await rclpy.sleep(1.0)  # simulate work with delay

        goal_handle.succeed()

        result = Fibonacci.Result()
        result.sequence = feedback_msg.partial_sequence
        return result

def main(args=None):
    rclpy.init(args=args)
    action_server = FibonacciActionServer()
    rclpy.spin(action_server)

    action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
