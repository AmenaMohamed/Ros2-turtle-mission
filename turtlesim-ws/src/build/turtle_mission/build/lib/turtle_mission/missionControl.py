#source codes : https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html
import sys

from turtlesim_interfaces.srv import SetDestination
import rclpy
from rclpy.node import Node


class DestClient(Node):

    def __init__(self):
        super().__init__('DestClient')
        self.cli = self.create_client(SetDestination, 'destination_verification')

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetDestination.Request()

    def send_request(self, x, y):
        self.req.x = x
        self.req.y = y
        self.reply= self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.reply)
        return self.reply.result()


def main(args=None):
    rclpy.init(args=args)

    client = DestClient()
    coord = [r for r in input("Enter your name: ").split(",")]
    response = client.send_request(coord[1]), int(coord[2])
    client.get_logger().info(
        'Result of add_two_ints: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))

    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()