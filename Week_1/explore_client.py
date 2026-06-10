#! /usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient 
from rclpy.signals import SignalHandlerOptions

from part5_actions.action import ExploreForward

class ExploreForwardClient(Node):

    def __init__(self):
        super().__init__("explore_forward_client") 
        self.actionclient = ActionClient(
            node=self, 
            action_type=ExploreForward, 
            action_name="explore_forward"
        ) 

        self.goal_succeeded = False
        self.goal_cancelled = False
        self.stop = False

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

        self.goal_succeeded = True
        rclpy.shutdown() #shut down the node once the goal has succeeded (i.e. the action has completed successfully)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        fdbk_current_distance_travelled = feedback.current_distance_travelled

        self.get_logger().info(
            f"\nFEEDBACK:\n"
            f"  - Current distance travelled = {fdbk_current_distance_travelled:.2f} m.\n"
        )

        if fdbk_current_distance_travelled > 2:
            self.get_logger().info("nothing encountered for more than 2 meters, cancelling goal...")
            future = self.goal_handle.cancel_goal_async()
            future.add_done_callback(self.cancel_goal)
            return

        if self.stop: #if the stop flag has been set to True (e.g. by a Ctrl+C), then we want to cancel the goal:
            future = self.goal_handle.cancel_goal_async()
            future.add_done_callback(self.cancel_goal)

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
    while not action_client.goal_succeeded:
        try:
            rclpy.spin_once(action_client)
            if action_client.goal_cancelled:
                break
        except KeyboardInterrupt:
            print("Ctrl+C")
            action_client.stop = True

if __name__ == '__main__':
    main()
