#!/usr/bin/env python3
"""
ConfigurableTalker
------------------
• Publishes a text string on topic `param_chatter`.
• Two runtime-tunable parameters:
    1. msg_text (string) – text to publish
    2. rate_hz  (double) – publish frequency in Hz
• Parameters can be set from the CLI, a YAML file, or a launch file.
"""

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter               # singular “parameter”
from rcl_interfaces.msg import SetParametersResult
from std_msgs.msg import String


class ConfigurableTalker(Node):
    def __init__(self) -> None:
        super().__init__("configurable_talker")

        # ---- 1. declare parameters (with defaults) -------------------------
        self.declare_parameter("msg_text", "hello from parameter")
        self.declare_parameter("rate_hz", 2.0)

        # ---- 2. fetch initial values --------------------------------------
        self.msg_text: str = (
            self.get_parameter("msg_text").get_parameter_value().string_value
        )
        self.rate_hz: float = (
            self.get_parameter("rate_hz").get_parameter_value().double_value
        )

        # ---- 3. create publisher & timer ----------------------------------
        self.publisher = self.create_publisher(String, "param_chatter", 10)
        self.timer = self.create_timer(1.0 / self.rate_hz, self._timer_cb)

        # ---- 4. enable live parameter updates -----------------------------
        self.add_on_set_parameters_callback(self._on_param_change)

        self.get_logger().info(
            f"ConfigurableTalker ready: msg_text='{self.msg_text}', rate_hz={self.rate_hz}"
        )

    # --------------------------------------------------------------------- #
    # Callbacks
    # --------------------------------------------------------------------- #
    def _timer_cb(self) -> None:
        """Publish the current message text at the configured rate."""
        self.publisher.publish(String(data=self.msg_text))
        self.get_logger().info(f'Publishing: "{self.msg_text}"')

    def _on_param_change(self, params) -> SetParametersResult:
        """
        Update internal state when parameters are changed at runtime.
        Return success=False if any value is invalid (ROS will reject the set).
        """
        success = True
        for p in params:
            if p.name == "msg_text" and p.type_ == Parameter.Type.STRING:
                self.msg_text = p.value
            elif p.name == "rate_hz" and p.type_ in (
                Parameter.Type.DOUBLE,
                Parameter.Type.INTEGER,
            ):
                if p.value <= 0.0:
                    success = False  # negative or zero rate is invalid
                else:
                    self.rate_hz = float(p.value)
                    # cancel old timer and start a new one with the new period
                    self.timer.cancel()
                    self.timer = self.create_timer(1.0 / self.rate_hz, self._timer_cb)

        return SetParametersResult(successful=success)


# ------------------------------------------------------------------------- #
# main entry-point
# ------------------------------------------------------------------------- #
def main(args=None) -> None:
    rclpy.init(args=args)
    node = ConfigurableTalker()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
