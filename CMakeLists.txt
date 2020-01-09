cmake_minimum_required(VERSION 3.15)
project(gmock_demo_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread ")

add_definitions(-DGTEST_LANGUAGE_CXX11)
enable_testing()
include_directories(Module)
include_directories(Test/Module)

add_executable(${PROJECT_NAME}
        main.cpp
        Test/Module/TestFixtureIDisplay.cpp
        Module/InterfaceDisplay.h
        Test/Module/MockInterfaceDisplay.h
        Module/ImplementationDisplay.cpp
        Module/ImplementationDisplay.h)
target_link_libraries(${PROJECT_NAME} gtest gmock)