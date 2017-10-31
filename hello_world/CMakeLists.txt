cmake_minimum_required(VERSION 2.8.3)
project(hello_world)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs)

catkin_package()

INCLUDE_DIRECTORIES(include ${catkin_INCLUDE_DIRS})

add_executable(say_hello src/say_hello.cpp)
target_link_libraries(say_hello ${catkin_LIBRARIES})

add_executable(receive_hello src/receive_hello.cpp)
target_link_libraries(receive_hello ${catkin_LIBRARIES})

