import sys, time, rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class RetryClient(Node):
    def __init__(self, a, b):
        super().__init__('retry_add_two_ints_client')
        self._req_vals = (a, b)
        self._cli = self.create_client(AddTwoInts, 'add_two_ints')
        self.timer = self.create_timer(1.0, self._tick)

    def _tick(self):
        if not self._cli.service_is_ready():
            self.get_logger().warn('Service not available, retrying…')
            return
        req = AddTwoInts.Request(a=self._req_vals[0], b=self._req_vals[1])
        future = self._cli.call_async(req)
        future.add_done_callback(self._resp_cb)
        self.timer.cancel()            # stop retries once sent

    def _resp_cb(self, future):
        try:
            res = future.result()
            self.get_logger().info(f'Result: {res.sum}')
        finally:
            rclpy.shutdown()

def main(argv=sys.argv):
    rclpy.init()
    a, b = map(int, argv[1:3])
    node = RetryClient(a, b)
    rclpy.spin(node)

if __name__ == '__main__':
    main()
