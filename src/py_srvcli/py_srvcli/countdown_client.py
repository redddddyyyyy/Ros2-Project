import rclpy, asyncio
from rclpy.node import Node
from rclpy.action import ActionServer
from countdown_interfaces.action import Countdown

class CountdownServer(Node):
    def __init__(self):
        super().__init__('countdown_server')
        self._srv = ActionServer(
            self, Countdown, 'countdown', self.execute_cb)

    async def execute_cb(self, goal_handle):
        sec = goal_handle.request.seconds
        self.get_logger().info(f'Starting {sec}s countdown')
        if sec <= 0:
            goal_handle.abort()
            return Countdown.Result(success=False)

        for remaining in range(sec, 0, -1):
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

