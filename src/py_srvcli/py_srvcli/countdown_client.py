import sys, rclpy, asyncio
from rclpy.node   import Node
from rclpy.action import ActionClient
from py_srvcli.action import Countdown

class CountdownClient(Node):
    def __init__(self, seconds):
        super().__init__('countdown_client')

        self._ac = ActionClient(self, Countdown, 'countdown')
        self._seconds = seconds
        self._main_task = asyncio.create_task(self._send_goal())

    async def _send_goal(self):
        self.get_logger().info('Waiting for action server…')
        await self._ac.wait_for_server()

        goal_msg = Countdown.Goal(seconds=self._seconds)
        self.get_logger().info(f'Sending goal: {self._seconds}s')

        goal_future = self._ac.send_goal_async(
            goal_msg, feedback_callback=self.feedback_cb)

        goal_handle = await goal_future
        result = await goal_handle.get_result_async()
        self.get_logger().info(f'Finished, success={result.result.success}')
        rclpy.shutdown()

    def feedback_cb(self, fb_msg):
        self.get_logger().info(f'Remaining: {fb_msg.feedback.remaining}s')

def main(argv=sys.argv):
    rclpy.init()
    seconds = int(argv[1]) if len(argv) > 1 else 5
    CountdownClient(seconds)
    rclpy.spin(None)          # spin until rclpy.shutdown()
    # rclpy.shutdown() is called in the client after result

if __name__ == '__main__':
    main()
