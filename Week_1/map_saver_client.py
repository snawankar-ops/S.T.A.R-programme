
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from nav2_msgs.srv import SaveMap

class MapSaverClient(Node):

    def __init__(self):
        super().__init__('map_saver_client')

        self.client = self.create_client(
            srv_type=SaveMap, 
            srv_name='/map_saver/save_map'
        ) 

        self.declare_parameters(
            namespace='',
            parameters=[
                ('map_file', 'map'),
            ]
        ) 

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(
                "Waiting for service..."
            ) 

    def send_request(self): 

        request = SaveMap.Request()

        file_name = self.get_parameter(
            'map_file' 
        ).get_parameter_value().string_value

        request.map_topic = "/map"
        request.map_url = file_name
        request.image_format = "png"
        request.map_mode = "trinary"
        request.free_thresh = 0.25
        request.occupied_thresh = 0.65

        return self.client.call_async(request) 

def main():
    rclpy.init()
    client = MapSaverClient()

    future = client.send_request() 
    rclpy.spin_until_future_complete(client, future) 
    response = future.result() 

    client.get_logger().info(
        f" - {'success! map saved' if response.result else 'sorry error! :('}\n"
    ) 

    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()