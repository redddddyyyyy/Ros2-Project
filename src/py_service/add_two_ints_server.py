#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts   # built-in service type

class AddTwoIntsServer(Node):
    def __init__(self):
        super().__init__('add_two_ints_server')
        # Advertise a service named 'add_two_ints'
        self.create_service(AddTwoInts, 'add_two_ints', self.handle_request)

    def handle_request(self, request, response):
        self.get_logger().info(f'{request.a} + {request.b}')
        response.sum = request.a + request.b     # put result in response
        return response

def main():
    rclpy.init()
    rclpy.spin(AddTwoIntsServer())   # keep node alive
    rclpy.shutdown()

if __name__ == '__main__':
    main()
