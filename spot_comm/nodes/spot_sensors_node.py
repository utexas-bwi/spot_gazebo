#!/usr/bin/env python3

import rospy
import sensor_msgs

from nav_msgs.msg import Odometry
from sensor_msgs.msg import LaserScan

from spot_comm.client import SpotClient
from spot_comm.client import RobotClient

class RobotSensorNode:

    def __init__(self, client, poll_rate=10):
        self.client = client
        self.odom_pub = None
        self.scan_pub = None
        self.poll_rate = poll_rate

    def initialize_node(self):
        rospy.init_node('robot_sensor_node', anonymous=False)
        rospy.loginfo("robot_sensor_node started")

        self.odom_pub = rospy.Publisher('/odom', Odometry, queue_size=10)
        self.scan_pub = rospy.Publisher('/scan', LaserScan, queue_size=10)
    
    def poll(self):
        r = rospy.Rate(self.poll_rate)
        while not rospy.is_shutdown():
            self.scan_pub.publish(self.client.get_laserscan())
            self.odom_pub.publish(self.client.get_odom())
            
            r.sleep()

        rospy.loginfo("Polling of Client sensor data stopped.")

if __name__ == '__main__':
    try:
        spot_client = SpotClient()
        robot_sensor_node = RobotSensorNode(spot_client)
        robot_sensor_node.initialize_node()
        robot_sensor_node.poll()
    except rospy.ROSInterruptException:
        pass
