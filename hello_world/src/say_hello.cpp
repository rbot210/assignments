#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{
  /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line.
   * For programmatic remappings you can use a different version of init() which takes
   * remappings directly, but for most command-line programs, passing argc and argv is
   * the easiest way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */
  ros::init(argc, argv, "say");

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  /**
   * TODO: this object is currently not initialized.  You need to instantiate
   * a publisher object here, with a topic that matches the topic used in receive_hello.cpp.
   */
  ros::Publisher comms_pub;

  ros::Rate loop_rate(1);

  while (ros::ok())
  {
    /**
     * This line will be hit once per second due to the loop_rate variable.
     *
     * Here we create a message object.
     *
     * TODO: fill the msg with a "hello world" string, and publish it using the comms_pub object
     * created above.
     *
     * Hint: this assignment bears a lot in common with the tutorial located here:
     * http://wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
     */
    std_msgs::String msg;

    ROS_WARN("TODO: student has not completed this assignment!");

    ros::spinOnce();

    loop_rate.sleep();
  }


  return 0;
}
