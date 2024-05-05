## Small and simple standalone program to check Mission Definition File without starting the ROS cluster.

1. Use colcon to build the executable.
1. Execute the binary executable: `install/mission_file_reader/lib/mission_file_reader/mission_file_reader {PATH TO FILE}`
1. See the results on the command line

**Note:** This program uses the exact same checks as Mission Control.
Therefore, it needs mission_control_package and common_package as dependencies.
