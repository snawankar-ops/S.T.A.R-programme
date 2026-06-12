#! /usr/bin/env python3

import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient 
from rclpy.signals import SignalHandlerOptions
from geometry_msgs.msg import Twist

import math
from part5_actions.action import ExploreForward

class ExploreForwardClient(Node):

    def __init__(self):
        super().__init__("explore_forward_client") 
        self.actionclient = ActionClient(
            node=self, 
            action_type=ExploreForward, 
            action_name="/explore_forward"
        ) 

        self.cmd_pub = self.create_publisher(Twist, "/cmd_vel", 10)

        self.goal_succeeded = False
        self.goal_cancelled = False
        self.stop = False
        self.goal_done = False

        self.declare_parameters(
            namespace='',
            parameters=[
                ('goal_velocity', 0.0),
                ('goal_stop', 0.0)
            ]
        ) 

    def send_goal(self): 
        velocity = self.get_parameter(
            'goal_velocity' 
        ).get_parameter_value().double_value 
        stop = self.get_parameter(
            'goal_stop'
        ).get_parameter_value().double_value

        goal = ExploreForward.Goal() 
        goal.fwd_velocity = float(velocity)
        goal.stopping_distance = float(stop)

        self.actionclient.wait_for_server() 

        # send the goal to the action server:
        self.send_goal_future = self.actionclient.send_goal_async(goal=goal, feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result() 
        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected :(")
            return #this will exit the callback and not execute the rest of the code in this function #the code goes to rcply.spin() in main() and will keep the node alive, allowing us to send another goal if we want to

        self.get_logger().info("Goal accepted :)")

        self.get_result_future = goal_handle.get_result_async() 
        self.get_result_future.add_done_callback(self.get_result_callback)
        self.goal_handle = goal_handle

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(
            f"The action has completed.\n"
            f"the total distance travelled was {result.total_distance_travelled:.2f} m.\n"
            f"the closest obstacle detected was {result.closest_obstacle:.2f} m away."
        )

        self.goal_done = True

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        fdbk_current_distance_travelled = feedback.current_distance_travelled

        self.get_logger().info(
            f"\nFEEDBACK:\n"
            f"  - Current distance travelled = {fdbk_current_distance_travelled:.2f} m.\n"
        )

        #here we come till stopping distance id reached and then turn by 90 to the left and continue exploration.
        if self.stop: #if the stop flag has been set to True (e.g. by a Ctrl+C), then we want to cancel the goal:
            future = self.goal_handle.cancel_goal_async()
            future.add_done_callback(self.cancel_goal)

    def turn_ninety_degrees(self):
        # Implementation for turning ninety degrees
        self.get_logger().info("Turning ninety degrees...")

        angular_speed =0.5
        angle_to_turn = math.pi / 2  # 90 degrees in radians
        duration = angle_to_turn / angular_speed

        cmd = Twist()
        cmd.angular.z = angular_speed

        start_time = time.time()

        while time.time() - start_time < duration and not self.stop:
            
            self.cmd_pub.publish(cmd)
            rclpy.spin_once(self,timeout_sec=0.5)

            time.sleep(0.1)  # Sleep to maintain the loop rate

        #stop the robot after turning:
        self.cmd_pub.publish(Twist())


    def cancel_goal(self, future):
        cancel_response = future.result()
        if len(cancel_response.goals_canceling) > 0:
            self.get_logger().info("Goal successfully cancelled.")
            self.goal_cancelled = True
        else:
            self.get_logger().info("Goal failed to cancel.")

def main(args=None): 
    rclpy.init(args=args, signal_handler_options=SignalHandlerOptions.NO)
    action_client = ExploreForwardClient()
    action_client.send_goal()
    
    try:
        while rclpy.ok():
            rclpy.spin_once(action_client, timeout_sec=0.1)

            #when the goal is done, we want to turn the robot by 90 degrees and send next goal:

            if action_client.goal_done:
                action_client.turn_ninety_degrees()
                action_client.goal_done = False #reset the flag so that we can send the next goal
                action_client.send_goal() #send the next goal to continue exploration

            if action_client.goal_cancelled:
                break #exit the loop and end the program

    except KeyboardInterrupt:
        action_client.get_logger().info("Ctrl+C detected, cancelling the goal...")
        action_client.stop = True #set the stop flag to True, which will trigger cancellation of the goal in the feedback callback

    finally:
        #make sure to shutdown the node and rclpy properly:
        action_client.get_logger().info("Shutting down the node...")
        action_client.destroy_node()
        rclpy.shutdown()

        

if __name__ == '__main__':
    main()