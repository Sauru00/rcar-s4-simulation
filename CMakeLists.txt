cmake_minimum_required(VERSION 3.10)

# Set the project name
project(RCAR_S4_Simulation)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Add the include directory
include_directories(include)

# Add the source files
set(SOURCES src/main.cpp src/simulation.cpp src/other_source_files.cpp)

# Add the executable
add_executable(rcar_s4_simulation_executable ${SOURCES})

