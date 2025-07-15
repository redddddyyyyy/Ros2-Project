import asyncio
import rclpy
from rclpy.node   import Node
from rclpy.action import ActionServer
from py_srvcli.action import Countdown   # auto-generated at build time

class CountdownServer(Node):
    def __init__(self):
        super().__init__('countdown_server')

        self._server = ActionServer(
            self,
            Countdown,
            'countdown',
            self.execute_cb
        )

    async def execute_cb(self, goal_handle):
        seconds = goal_handle.request.seconds
        self.get_logger().info(f'Starting {seconds}s countdown')

        # Publish feedback every second
        for remaining in range(seconds, 0, -1):
            goal_handle.publish_feedback(
                Countdown.Feedback(remaining=remaining))
            await asyncio.sleep(1.0)

        goal_handle.succeed()
        return Countdown.Result(success=True)

def main(args=None):
    rclpy.init(args=args)
    rclpy.spin(CountdownServer())
    rclpy.shutdown()

if __name__ == '__main__':
    main()
