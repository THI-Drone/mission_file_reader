cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(mission_file_reader)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(common_package REQUIRED)
find_package(mission_control_package REQUIRED)

include_directories(include)

add_executable(mission_file_reader src/main.cpp)
ament_target_dependencies(mission_file_reader common_package mission_control_package)

install (TARGETS
  mission_file_reader
  DESTINATION lib/${PROJECT_NAME})

ament_package()