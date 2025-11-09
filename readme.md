Steps taken to test the results so far: 3.55/26

open terminator window:

cd /home/jan/skyentific_hardware_ws
colcon build
source install/setup.bash
ros2 launch my_robot_bringup my_robot.launch.xml

output:

[INFO] [launch]: All log files can be found below /home/jan/.ros/log/2025-08-07-19-20-39-934964-T490-27700
[INFO] [launch]: Default logging verbosity is set to INFO
[INFO] [robot_state_publisher-1]: process started with pid [27704]
[INFO] [ros2_control_node-2]: process started with pid [27705]
[INFO] [spawner-3]: process started with pid [27706]
[INFO] [spawner-4]: process started with pid [27707]
[INFO] [rviz2-5]: process started with pid [27708]
[robot_state_publisher-1] [INFO] [1754587241.942090453] [robot_state_publisher]: Robot initialized
[ros2_control_node-2] [INFO] [1754587242.189317490] [controller_manager]: Using Steady (Monotonic) clock for triggering controller manager cycles.
[ros2_control_node-2] [INFO] [1754587242.277163728] [controller_manager]: Subscribing to '/robot_description' topic for robot description.
[ros2_control_node-2] [INFO] [1754587242.385495031] [controller_manager]: update rate is 10 Hz
[ros2_control_node-2] [INFO] [1754587242.385709371] [controller_manager]: Spawning controller_manager RT thread with scheduler priority: 50
[ros2_control_node-2] [WARN] [1754587242.388245014] [controller_manager]: Could not enable FIFO RT scheduling policy: with error number <1>(Operation not permitted). See [https://control.ros.org/master/doc/ros2_control/controller_manager/doc/userdoc.html] for details on how to enable realtime scheduling.
[ros2_control_node-2] [INFO] [1754587242.393059726] [controller_manager]: Received robot description from topic.
[ros2_control_node-2] [INFO] [1754587242.469190546] [controller_manager]: Loading hardware 'MobileBase' 
[ros2_control_node-2] [INFO] [1754587242.477846224] [controller_manager]: Loaded hardware 'MobileBase' from plugin 'mobile_base_hardware/MobileBaseHardwareInterface'
[ros2_control_node-2] [INFO] [1754587242.478166459] [controller_manager]: Initialize hardware 'MobileBase' 
[ros2_control_node-2] [INFO] [1754587242.479757616] [controller_manager]: Successful initialization of hardware 'MobileBase'
[ros2_control_node-2] [INFO] [1754587242.482558258] [resource_manager]: 'configure' hardware 'MobileBase' 
[ros2_control_node-2] [INFO] [1754587242.486602580] [resource_manager]: Successful 'configure' of hardware 'MobileBase'
[ros2_control_node-2] [INFO] [1754587242.486714774] [resource_manager]: 'activate' hardware 'MobileBase' 
[ros2_control_node-2] [INFO] [1754587242.569939025] [resource_manager]: Successful 'activate' of hardware 'MobileBase'
[ros2_control_node-2] [INFO] [1754587242.570191551] [controller_manager]: Resource Manager has been successfully initialized. Starting Controller Manager services...
[rviz2-5] [INFO] [1754587243.117899741] [rviz2]: Stereo is NOT SUPPORTED
[rviz2-5] [INFO] [1754587243.118344409] [rviz2]: OpenGl version: 4.6 (GLSL 4.6)
[rviz2-5] [INFO] [1754587243.222609127] [rviz2]: Stereo is NOT SUPPORTED
[ros2_control_node-2] [INFO] [1754587244.154336284] [controller_manager]: Loading controller : 'joint_state_broadcaster' of type 'joint_state_broadcaster/JointStateBroadcaster'
[ros2_control_node-2] [INFO] [1754587244.154613714] [controller_manager]: Loading controller 'joint_state_broadcaster'
[ros2_control_node-2] [INFO] [1754587244.209500253] [controller_manager]: Controller 'joint_state_broadcaster' node arguments: --ros-args --params-file /home/jan/skyentific_hardware_ws/install/my_robot_bringup/share/my_robot_bringup/config/my_robot_controllers.yaml 
[spawner-3] [INFO] [1754587244.470730619] [spawner_joint_state_broadcaster]: Loaded joint_state_broadcaster
[ros2_control_node-2] [INFO] [1754587244.475705518] [controller_manager]: Configuring controller: 'joint_state_broadcaster'
[ros2_control_node-2] [INFO] [1754587244.477047510] [joint_state_broadcaster]: 'joints' or 'interfaces' parameter is empty. All available state interfaces will be published
[ros2_control_node-2] [INFO] [1754587244.540170541] [controller_manager]: Activating controllers: [ joint_state_broadcaster ]
[ros2_control_node-2] [INFO] [1754587244.632597616] [controller_manager]: Successfully switched controllers!
[spawner-3] [INFO] [1754587244.742111002] [spawner_joint_state_broadcaster]: Configured and activated joint_state_broadcaster
[INFO] [spawner-3]: process has finished cleanly [pid 27706]
[ros2_control_node-2] [INFO] [1754587245.417287333] [controller_manager]: Loading controller : 'diff_drive_controller' of type 'diff_drive_controller/DiffDriveController'
[ros2_control_node-2] [INFO] [1754587245.417510055] [controller_manager]: Loading controller 'diff_drive_controller'
[ros2_control_node-2] [INFO] [1754587245.439629727] [controller_manager]: Controller 'diff_drive_controller' node arguments: --ros-args --params-file /home/jan/skyentific_hardware_ws/install/my_robot_bringup/share/my_robot_bringup/config/my_robot_controllers.yaml 
[spawner-4] [INFO] [1754587245.629664611] [spawner_diff_drive_controller]: Loaded diff_drive_controller
[ros2_control_node-2] [INFO] [1754587245.633248987] [controller_manager]: Configuring controller: 'diff_drive_controller'
[ros2_control_node-2] [INFO] [1754587245.738185675] [controller_manager]: Activating controllers: [ diff_drive_controller ]
[ros2_control_node-2] [INFO] [1754587245.832320537] [controller_manager]: Successfully switched controllers!
[spawner-4] [INFO] [1754587245.938753810] [spawner_diff_drive_controller]: Configured and activated diff_drive_controller
[INFO] [spawner-4]: process has finished cleanly [pid 27707]


=================================================

open window2 shift+ctrl-o

ros2 topic list

dit geeft:

/clicked_point
/controller_manager/activity
/controller_manager/introspection_data/full
/controller_manager/introspection_data/names
/controller_manager/introspection_data/values
/diagnostics
/diff_drive_controller/cmd_vel
/diff_drive_controller/odom
/diff_drive_controller/transition_event
/dynamic_joint_states
/goal_pose
/initialpose
/joint_state_broadcaster/transition_event
/joint_states
/parameter_events
/robot_description
/rosout
/tf
/tf_static

Test het uit met:

ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/diff_drive_controller/cmd_vel -p stamped:=true

als dit niet werkt:

sudo apt-get install ros-jazzy-teleop-twist-keyboard

Reading from the keyboard  and Publishing to Twist!
---------------------------
Moving around:
   u    i    o
   j    k    l
   m    ,    .

q/z : increase/decrease max speeds by 10%
w/x : increase/decrease only linear speed by 10%
e/c : increase/decrease only angular speed by 10%
anything else : stop

CTRL-C to quit

===========================================================================

<!--GROUP STATES: Purpose: Define a named state for a particular group, in terms of joint values. This is useful to define states like 'folded arms'-->
    <group_state name="home" group="arm">
        <joint name="joint_1" value="0"/>
        <joint name="joint_2" value="0"/>
        <joint name="joint_3" value="0"/>
        <joint name="joint_4" value="0"/>
        <joint name="joint_5" value="0"/>
    </group_state>
    <group_state name="pose_1" group="arm">
        <joint name="joint_1" value="-0.5235"/>
        <joint name="joint_2" value="-0.786"/>
        <joint name="joint_3" value="-0.786"/>
        <joint name="joint_4" value="-1.571"/>
        <joint name="joint_5" value="-0.5235"/>
    </group_state>
    <group_state name="pose_2" group="arm">
        <joint name="joint_1" value="-0.2682"/>
        <joint name="joint_2" value="-0.786"/>
        <joint name="joint_3" value="-0.786"/>
        <joint name="joint_4" value="-1.571"/>
        <joint name="joint_5" value="-0.2682"/>
    </group_state>
    <group_state name="pose_3" group="arm">
        <joint name="joint_1" value="0.2682"/>
        <joint name="joint_2" value="-0.786"/>
        <joint name="joint_3" value="-0.786"/>
        <joint name="joint_4" value="-1.571"/>
        <joint name="joint_5" value="0.2682"/>
    </group_state>
    <group_state name="pose_4" group="arm">
        <joint name="joint_1" value="0.5235"/>
        <joint name="joint_2" value="-0.786"/>
        <joint name="joint_3" value="-0.786"/>
        <joint name="joint_4" value="-1.571"/>
        <joint name="joint_5" value="0.5235"/>
    </group_state>
    <group_state name="open" group="gripper">
        <joint name="joint_6" value="0.0055"/>
    </group_state>
    <group_state name="closed" group="gripper">
        <joint name="joint_6" value="-0.0125"/>
    </group_state>

===========================================================================

ompl planner

https://ompl.kavrakilab.org/

===========================================================================

different launch commands

moveit setup assistant:

ros2 launch moveit_setup_assistant setup_assistant.launch.py

demo run:

ros2 launch robot_moveit_config demo.launch.py

----------------------------------------------------------------------------------
robot state publisher:
----------------------------------------------------------------------------------

ros2 run robot_state_publisher robot_state_publisher --ros-args -p robot_description:="$(xacro /home/jan/minor_ws/src/robot_description/urdf/skyentific_robot.urdf.xacro)"

----------------------------------------------------------------------------------
controller manager:
----------------------------------------------------------------------------------

https://control.ros.org/jazzy/doc/ros2_control/controller_manager/doc/userdoc.html

type this correctly! faulty arguments are ignored without warning...

ros2 run controller_manager ros2_control_node --ros-args --params-file /home/jan/minor_ws/src/robot_bringup/config/skyentific_robot_controllers.yaml

ros2 param list /controller_manager
ros2 param get /controller_manager use_sim_time

----------------------------------------------------------------------------------
now spawn the controllers:
----------------------------------------------------------------------------------

ros2 run controller_manager spawner joint_state_broadcaster

ros2 run controller_manager spawner arm_controller

ros2 run controller_manager spawner gripper_controller

----------------------------------------------------------------------------------
start moveit:
----------------------------------------------------------------------------------

ros2 launch robot_moveit_config move_group.launch.py


ros2 param list /move_group
ros2 param get /move_group robot_description_planning.joint_limits.joint_1.has_acceleration_limits
ros2 param get /move_group robot_description_planning.joint_limits.joint_1.max_acceleration

----------------------------------------------------------------------------------
start rviz:
----------------------------------------------------------------------------------

ros2 run rviz2 rviz2 -d ~/minor_ws/src/robot_description/rviz/urdf_config.rviz

controller parameters:

https://docs.ros.org/en/jazzy/How-To-Guides/Using-ros2-param.html

ros2 node list
ros2 topic list
ros2 service list
ros2 param list

----------------------------------------------------------------------------------
Using bringup package:
----------------------------------------------------------------------------------

ros2 launch robot_bringup robot.launch.xml

<launch>
    <let name="urdf_path" 
         value="$(find-pkg-share robot_description)/urdf/skyentific_robot.urdf.xacro" />
    <let name="rviz_config_path"
         value="$(find-pkg-share robot_description)/rviz/urdf_config.rviz" />

...
</launch>

run once and save the rviz settings to a new file:
note that we can save the settings for later and change the config

<launch>
    <let name="urdf_path" 
         value="$(find-pkg-share robot_description)/urdf/skyentific_robot.urdf.xacro" />
    <let name="rviz_config_path"
         value="$(find-pkg-share robot_bringup)/config/robot_moveit.rviz" />

...
</launch>

=============================================================================
Modify moveit_controllers.yaml:

  arm_controller:
    type: FollowJointTrajectory
    joints:
      - joint_1
      - joint_2
      - joint_3
      - joint_4
      - joint_5
    action_ns: follow_joint_trajectory
    default: true
  gripper_controller:
    type: FollowJointTrajectory
    joints:
      - joint_6
    action_ns: follow_joint_trajectory
    default: true

=============================================================================

modify joint_limits.yaml

    has_velocity_limits: true
    max_velocity: 10.0
    has_acceleration_limits: true
    max_acceleration: 10.0


clean workspace
=============================================================================

unset AMENT_CMAKE_PREFIX_PATH && unset CMAKE_PREFIX_PATH && sudo reboot

===================
kinematics.yaml:

Specifies which kinematic solver plugin to use for each planning group in the SRDF, as well as the kinematic solver search resolution

===================
skyentific_robot.ros2_control.xacor:

Macro definition for required ros2_control xacro additions
===================
initial_potions.yaml

initial positions for ros2 control
===================
skyentific_robot.urdf.xacro

A modified version of the original URDF file with additional interfaces (e.g. ros2_control)
===================
ros2_controller.yaml

Creates configurations for ros2_controllers
===================
skyentific_robot.ros2_control.xacro

Macro definition for required ros2_control xacro additions.
===================
inatital_positions.yaml

initial positions for ros2_control
===================
moveit_controllers.yaml

Create configurations for moveit_controllers.
===================
demo.launch.py

Launchfile to run a demo of MoveGroup.
Warning that it requires the above launch files to all be generated as well.
===================
move_group.launch.py

Launch file to run the main Moveit Executable that provides the MoveGroup action.
===================
moveit_rviz.launch.py

Visualize in Rviz the robot's planning groups running with interactive markers that allow goal states to be set.
===================
moveit.rviz

Configuration file for Rviz with Motion Planning Plugin already setup.
===================
rsp.launch.py

Launch file to publish the robot description and transforms generated by the joint states
===================
setup_assistant.launch.py

Launch file for easily restarting the Moveit Setup Assistant to edit this robot's generated configuration package
===================
spawn_controller.launch.py

Launch file to spwan the necessary controllers
===================
static_virtual_joint_tfs.launch.py

launch file to broadcast static TF for the robot's virtual joints
===================
warehouse_db.launch.py

Launch file for starting the warehouse with a defaut MongoDB.







===================
ros2 commands
===================




Recipe #1: Working with Nodes

You’ve got code running, but is it actually running? This is your first check.
Run a Node

command: ros2 run <package-name> <executable-name>

It takes the package name and the executable name as required arguments. This command executes a single node, printing its log messages directly to your console for immediate feedback.
List All Nodes

command: ros2 node list

It provides a simple list of the full names of all currently active nodes on the ROS network.
Press enter or click to view image in full size
Get Node Information

command: ros2 node info /<node-name>

It requires the full node name as an argument. This gives a detailed report on a single node, listing all of its subscribers, publishers, services, and actions.
Press enter or click to view image in full size

Cook’s Tip: These three commands form a basic debugging workflow. First, run your node. Then, check if it appears in the list. If it's there but not working as expected, use info to investigate its connections.
Recipe #2: Visualizing the System

Your terminal is a mess of scrolling text. To see the big picture of how everything is connected, you need a visual map.
Graphing Nodes and Topics

command: rqt_graph

It opens a graphical window that draws a live map of your nodes and shows how they're connected via topics. The ones in square boxes are the topics, while the ones with oval containers are the nodes. The arrow denotes the direction of the communication.
Press enter or click to view image in full size

Cook’s Tip: This is the #1 tool for finding connection problems. If you expected two nodes to be talking and there’s no arrow between them, you’ve found your bug.
Recipe #3: Working with Topics

Data is flowing through your system, but it feels like a black box. These commands let you sneak into the stream and see what’s really going on.
List All Topics

command: ros2 topic list

This command takes no required parameters, but the -t flag can be added to show topic types. It provides a list of the names of all currently active topics on the network.
Press enter or click to view image in full size
Echo Topic Data

command: ros2 topic echo /<topic-name>

It requires the topic name as its main argument. This command prints the live data from all messages published to that topic in a human-readable format. Each message being received is separated by a ---.
Press enter or click to view image in full size
Get Topic Information

command: ros2 topic info /<topic-name>

It requires the topic name as its main argument. It provides the topic's message type and shows a count of how many nodes are currently publishing to and subscribing to it.
Press enter or click to view image in full size
Recipe #4: Publishing to a Topic

You need to test how your node reacts to a specific message, but you don’t want to run a whole other program just to send it.
Publish a Message

command: ros2 topic pub /<topic-name> <interface-name> <mnessage>

It requires the topic name, message type, and the message data as arguments. This command publishes a single message to a topic, which is perfect for triggering or testing other nodes without running a full application. By default, this publishes at the rate of 1 message per second, i.e., 1Hz.

To change the rate, you can use the -r / ---rate flag. Additionally, if you wish to publish a message only a limited number of times, then you can make use of --times flag.

Cook’s Tip: This is perfect for faking sensor data or triggering an event without needing to build and run a whole separate publisher node.
Recipe #5: Working with Services

Some nodes don’t just listen for data; they wait for a direct command and give a direct answer back. Here’s how you make that call.
List All Services

command: ros2 service list

This command takes no required parameters, but the -t flag can be added to show service types. It provides a list of all currently available service names on the network.
Press enter or click to view image in full size
Call a Service

command: ros2 service call /<service-name> <interface-type> <request>
Get Ashwith Poojary’s stories in your inbox

Join Medium for free to get updates from this writer.

It requires the service name, service type, and the request data. This command calls the service with your request and prints the response it receives back from the server.
Press enter or click to view image in full size

Cook’s Tip: Use a service instead of a topic when your node needs to get a direct confirmation or a specific answer back from another node.
Recipe #6: Using Bag Files

That bug happened once, but now you can’t reproduce it. Bag files let you record your system’s data so you can debug the exact same situation over and over.
Record Data to a Bag

command: ros2 bag record -o <bag-file-name> /<topic-name>

It takes optional topic names or flags like -a to record all topics currently on the network (Don’t pass the topic name in that case). This command creates a database file (a “bag”) that contains all message data from the specified topics for later use.
Press enter or click to view image in full size
Get Bag Information

command: ros2 bag info <bag-file-path>

It requires the path to the bag file as its main argument. It provides metadata about the bag, such as its duration, size, and a list of all the topics contained within it.
Press enter or click to view image in full size
Playback Data from a Bag

command: ros2 bag play <bag-file-path>

It requires the path to the bag file as its main argument. This command replays the data from the bag, publishing the messages on their original topics with the original timing.

Cook’s Tip: Use the -o flag with ros2 bag record to specify the name and location of your output bag file (e.g., ros2 bag record -o my_test_run /chatter).
Recipe #7: Managing Parameters

Your robot’s speed is a bit off, but recompiling your code to change one variable is a pain. These commands let you tune your nodes live.
List Node Parameters

command: ros2 param list

It does not require the node name as an argument, but passing one will only list that node’s parameters. This command provides a list of all the configurable parameters that are available on the specified node.
Press enter or click to view image in full size
Get a Parameter’s Value

command: ros2 param get /<node-name> <param-name>

It requires both the node name and the parameter name as arguments. This command retrieves and prints the current value of a single parameter from a running node.
Press enter or click to view image in full size
Recipe #8: Using a Parameter File

Setting ten different parameters one by one is slow and error-prone. A parameter file lets you organize all your settings in one place and load them in a single command.
Creating the Parameter File

This is a simple YAML file (e.g., config.yaml) where you define parameters for your node. The file structure uses the node name as the main key, with ros__parameters nested inside.
Press enter or click to view image in full size
an example of how a config.yaml file looks like
Loading the File at Runtime

command: ros 2 run <package-name> <node-name> --ros-args --param-file <path-to-config-file>

This command takes the usual ros2 run arguments, plus a special flag --ros-args --param-filefollowed by the path to your YAML file. It starts the node and immediately applies all the settings from your file, overriding any default values set in the code.

Cook’s Tip: Once you’ve tuned your node perfectly using ros2 param set, you can save those settings directly to a file with the command: ros2 param dump <node-name> > my_params.yaml. This is the fastest way to create a configuration file.
Recipe #9: Launching a System

Opening five terminals to run five different nodes is a hassle. Launch files are how you start your entire application professionally.
Press enter or click to view image in full size
an example of how a launch file looks like
Run a Launch File

command: ros2 launch <package-name> <launch-file-path>

It takes the package name and the launch file name as its main arguments. This command executes a launch file, starting up multiple nodes and their configurations as defined in a single script.

Cook’s Tip: You won’t see any real robotic application being launched node by node individually. This is the standard way to run any real ROS2 application. It ensures all your nodes and their parameters are started correctly, every single time.
Recipe 10: Building and Sourcing

You’ve written your code, but ROS can’t see it yet. These are the two essential commands to compile your code and tell your terminal where to find it.
Build a Package

command: colcon build --packages-select <package-name>

It takes one or more package names as arguments after the flag. This command compiles only the specified packages, saving significant time in large workspaces by not rebuilding everything. If you want to build the whole application, omit the flag and just run colcon build.
Source Your Workspace

command: source install/setup.bash

It updates your current terminal session to recognize the packages you just built, allowing you to run your new nodes. It is better to add the path to your setup.bash to the .bashrc file so that your workspace is sourced every time you open a new terminal.

Cook’s Tip: To speed up your Python development, use colcon build --symlink-install. This allows you to edit your Python scripts and have the changes apply immediately without needing to rebuild.


github.com/LCAS/ros2_topic_monitor/tree/main



ros2 action send_goal /arm_joints_controller/follow_joint_trajectory \
  control_msgs/action/FollowJointTrajectory "{
  trajectory: {
    joint_names: ['axis_1','axis_2','axis_3','axis_4','axis_5'],
    points: [
      { positions: [1.0, 1.0, 1.0, 1.0, 1.0], time_from_start: {sec: 2} }
    ]
  }
}"


Ros2_control frame work en stappenplan:

https://control.ros.org/master/doc/ros2_control/hardware_interface/doc/writing_new_hardware_component.html

Aha—that explains the zeros. If you don’t implement export_command_interfaces() (and export_state_interfaces()), 
the controller has nothing to write into, so your cmd_position_[] never changes.

Here’s exactly what to add.

1) In your header (arm_interface.hpp)

Make sure these overrides are declared (public section of ArmHardwareInterface):
==================================================================================================
gearbox

The result: 1:108 for the big; 1:76.5 for the intermediate; and 1:62.4 for the small actuator.

            <param name="axis_2.rescale_factor">0.0000186999562714</param>
            <param name="axis_3.rescale_factor">0.000025666606647</param>
            <param name="axis_4.rescale_factor">0.000031466272572</param>





https://www.youtube.com/watch?v=AHz7iMZ8oI0

ros2 run demo_nodes_cpp talker

==================================================================================================

jan@T490:~/test_ws$ ros2 topic info /arm_joints_controller/controller_state --verbose
Type: control_msgs/msg/JointTrajectoryControllerState

Publisher count: 1

Node name: arm_joints_controller
Node namespace: /
Topic type: control_msgs/msg/JointTrajectoryControllerState
Topic type hash: RIHS01_51d8dd89cc624cbe9daaeeb4d80d6de9b86168ffdc3be41fefc0953e3c26e480
Endpoint type: PUBLISHER
GID: 01.10.19.d5.00.a5.c2.28.40.a8.5d.d7.00.00.71.03
QoS profile:
  Reliability: RELIABLE
  History (Depth): KEEP_LAST (1)
  Durability: VOLATILE
  Lifespan: Infinite
  Deadline: Infinite
  Liveliness: AUTOMATIC
  Liveliness lease duration: Infinite

Subscription count: 0

==================================================================================================


jan@T490:~/test_ws$ ros2 topic info /arm_joints_controller/joint_trajectory --verbose
Type: trajectory_msgs/msg/JointTrajectory

Publisher count: 0

Subscription count: 1

Node name: arm_joints_controller
Node namespace: /
Topic type: trajectory_msgs/msg/JointTrajectory
Topic type hash: RIHS01_179b33eba59d676f6d967ac71fe35e7ca2f64b2f3928f4a018cec115e213796e
Endpoint type: SUBSCRIPTION
GID: 01.10.19.d5.00.a5.c2.28.40.a8.5d.d7.00.00.70.04
QoS profile:
  Reliability: RELIABLE
  History (Depth): KEEP_LAST (1)
  Durability: VOLATILE
  Lifespan: Infinite
  Deadline: Infinite
  Liveliness: AUTOMATIC
  Liveliness lease duration: Infinite

==================================================================================================

jan@T490:~/test_ws$ ros2 topic info /joint_states --verbose
Type: sensor_msgs/msg/JointState

Publisher count: 1

Node name: joint_state_broadcaster
Node namespace: /
Topic type: sensor_msgs/msg/JointState
Topic type hash: RIHS01_a13ee3a330e346c9d87b5aa18d24e11690752bd33a0350f11c5882bc9179260e
Endpoint type: PUBLISHER
GID: 01.10.19.d5.00.a5.c2.28.40.a8.5d.d7.00.00.92.03
QoS profile:
  Reliability: RELIABLE
  History (Depth): KEEP_LAST (1)
  Durability: VOLATILE
  Lifespan: Infinite
  Deadline: Infinite
  Liveliness: AUTOMATIC
  Liveliness lease duration: Infinite

Subscription count: 2

Node name: move_group_private_100925078403360
Node namespace: /
Topic type: sensor_msgs/msg/JointState
Topic type hash: RIHS01_a13ee3a330e346c9d87b5aa18d24e11690752bd33a0350f11c5882bc9179260e
Endpoint type: SUBSCRIPTION
GID: 01.10.a5.bc.af.75.82.00.51.7c.a6.6e.00.00.52.04
QoS profile:
  Reliability: RELIABLE
  History (Depth): KEEP_LAST (1)
  Durability: VOLATILE
  Lifespan: Infinite
  Deadline: Infinite
  Liveliness: AUTOMATIC
  Liveliness lease duration: Infinite

Node name: robot_state_publisher
Node namespace: /
Topic type: sensor_msgs/msg/JointState
Topic type hash: RIHS01_a13ee3a330e346c9d87b5aa18d24e11690752bd33a0350f11c5882bc9179260e
Endpoint type: SUBSCRIPTION
GID: 01.10.af.bc.58.cb.8b.35.15.ba.a5.10.00.00.1a.04
QoS profile:
  Reliability: BEST_EFFORT
  History (Depth): KEEP_LAST (5)
  Durability: VOLATILE
  Lifespan: Infinite
  Deadline: Infinite
  Liveliness: AUTOMATIC
  Liveliness lease duration: Infinite


===========================================================================================
digital input phidgest

ros2 launch phidgets_digital_inputs digital_inputs-launch.py \
  --ros-args \
    -p phidgets_digital_inputs.serial:=740266 \
    -p phidgets_digital_inputs.hub_port:=0 \
    -p phidgets_digital_inputs.is_hub_port_device:=true \
    -p phidgets_digital_inputs.publish_rate:=0

ros2 launch phidgets_digital_inputs digital_inputs-launch.py --ros-args phidgets_digital_inputs.serial:=740266

===========================================================================================
    in bringup xml

      <include file="$(find-pkg-share phidgets_digital_inputs)/launch/digital_inputs-launch.py">
  <!-- params from the driver docs -->
  <arg name="serial" value="740266"/>          <!-- your DAQ1301_0 serial; -1 = any -->
  <arg name="hub_port" value="0"/>             <!-- set if on a VINT hub port -->
  <arg name="is_hub_port_device" value="true"/>
  <arg name="publish_rate" value="0"/>         <!-- 0 = on change -->
</include>

===========================================================================================

 ros2 launch my_robot_bringup robot.launch.xml


ros2 launch my_robot_safety daq1301_inputs.launch.py
ros2 launch my_robot_safety safety_bringup.launch.py

===========================================================================================
ros2 run my_robot_commander test_moveit

===========================================================================================
service call to get stuff moving again:

ros2 service call /reset_estop std_srvs/srv/Trigger {}

ros2 service call /controller_manager/switch_controller controller_manager_msgs/srv/SwitchController \
"{
  activate_controllers:   [\"arm_joints_controller\",\"gripper_controller\"],
  deactivate_controllers: [\"hold_position_controller\"],
  strictness: 1,
  activate_asap: true,
  timeout: {sec: 0, nanosec: 0}
}"


===========================================================================================
phidgets api

vint hub 0001
https://www.phidgets.com/?prodid=1202#Tab_API



 <!-- lauch safety node -->
  <node pkg="my_robot_safety" exec="limit_switch_watcher_node"
      output="screen"
      name="limit_switch_watcher">
  <param from="$(find-pkg-share my_robot_safety)/config/limit_switch_watcher.yaml"/>
  </node>

  <!-- MoveIt -->
  <include file="$(find-pkg-share my_robot_moveit_config)/launch/move_group.launch.py"/> 

===========================================================================================
  homing

  ros2 service call /home_all std_srvs/srv/Trigger "{}"


============================================================================================

lifecycle node

https://www.learnros2.com/ros/tutorials/lifecycle-node-demo



bedrading

robot: 

1 -+RBZG
2 -+RBGZ
3 -+RBZG
4 -+RBGZ
5 -+RBZG


============================================================================================
homer
============================================================================================

mkdir -p build && cd build
cmake ..
make -j

sudo ./phidget_homer \
  --stepper-serial 740266 --stepper-ports 1,2,3,4,5 \
  --stepper-channels 0,0,0,0,0 \
  --daq-serial 528369 --daq-port 0 \
  --di-min 0,1,2,3,4 \
  --di-max 11,12,13,14,15 \
  --accel 1500 --vel 150 --backoff 150 --timeout 20 --midtol 1.0

  Adjustments you might want

If your stepper boards are multi-channel, pass --stepper-channels per axis (defaults to 0 otherwise).

If your switches are NC, add --nc.

If homing one axis at a time is too slow, we can parallelize (keep it sequential at first for safety).

If your units are rescaled (not “steps”), that’s fine—everything uses whatever PhidgetStepper_getPosition returns.

If you want this wrapped into a header (.hpp) later, we can refactor the core homing into a class (Homer) so you can reuse it either as a library or include file.



https://f24.ros.santoslab.org/lectures/

https://github.com/ros-controls/roscon_advanced_workshop


https://project-awesome.org/fkromer/awesome-ros2

https://fjp.at/posts/ros/ros-control/#controller-toolbox

============================================================================================


ros2 run my_robot_commander test_moveit


ros2 pkg create my_collision_objects --build-type ament_cmake --dependencies rclpp
cd my_collision_objects

============================================================================================
Debugging controllers:
============================================================================================

ros2 control list_hardware_interfaces
ros2 control list_hardware_components
ros2 control list_command_interfaces
ros2 control list_state_interfaces

When ros2 control CLI commands hang without any error or timeout, even after restarting the ROS 2 daemon, it often means something low-level has gotten wedged:

A node thread or service call stuck in a deadlock or blocking hardware read (common with serial/USB buses).

The DDS middleware (Fast-DDS, Cyclone, etc.) having stale shared memory segments.

The ROS 2 daemon (ros2cli background process) holding onto a zombie participant.

Or, more simply, the OS kernel driver for /dev/ttyUSB* or similar being left in an inconsistent state.

A reboot will clean up:

DDS shared memory.

Stale device file locks (especially Dynamixel USB adapters).

Any leftover ros2_control_node or controller_manager processes that didn’t exit cleanly.

Kernel driver and udev states.

Before you reboot, you could try the lightweight clean-up steps: