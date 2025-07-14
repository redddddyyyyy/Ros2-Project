#!/usr/bin/env python3
import sys, rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class AddTwoIntsClient(Node):
    def __init__(self):
        super().__init__('add_two_ints_client')
        self.cli = self.create_client(AddTwoInts, 'add_two_ints')
        while not self.cli.wait_for_service(1.0):
            self.get_logger().info('Waiting for service...')
        self.request = AddTwoInts.Request()

    def send_request(self, a, b):
        self.request.a, self.request.b = a, b
        return self.cli.call_async(self.request)

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClient()
    future = node.send_request(int(sys.argv[1]), int(sys.argv[2]))
    rclpy.spin_until_future_complete(node, future)
    print(f'Result: {future.result().sum}')
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
