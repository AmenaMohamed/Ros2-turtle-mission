from turtlesim_interfaces.srv import SetDestination

import rclpy
from rclpy.node import Node


class DestServer(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(SetDestination, 'destination_verification', self.verifyDest)

    def verifyDest(self, request, response):
        response.reply = request.x + request.y
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response


def main(args=None):
    rclpy.init(args=args)

    service = DestServer()

    rclpy.spin(service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()