# src/py_pubsub/py_pubsub/talker.py
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Talker(Node):
    def __init__(self):
        super().__init__('talker')

        # ── parameter ─────────────────────────────────
        self.declare_parameter('publish_rate', 2.0)
        rate = self.get_parameter('publish_rate').value        # float

        # ── timer & publisher ─────────────────────────
        timer_period = 1.0 / rate                             # seconds
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer      = self.create_timer(timer_period, self.timer_cb)
        self.i = 0

    def timer_cb(self):
        msg = String()
        msg.data = f"Hello, world! {self.i}"
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    node = Talker()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

