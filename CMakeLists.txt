cmake_minimum_required(VERSION 3.12)
project(GoL)  # Replace with your project's name

set(CMAKE_CXX_STANDARD 17)

# Set the source and header directories
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Add your source files and header files
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")
file(GLOB HEADERS "${INCLUDE_DIR}/*.h")

# Create an executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Set include directories so that you can include headers without specifying the full path
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIR})

# Set the output directory to the 'build' folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

# Optionally, you can add other configuration or dependencies here

