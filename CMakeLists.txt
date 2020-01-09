cmake_minimum_required(VERSION 3.15)
project(gmock_demo_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread ")

# for googletest
add_definitions(-DGTEST_LANGUAGE_CXX11)
enable_testing()

set(SOURCES
        main.cpp
        Test/Module/TestFixtureIDisplay.cpp
        Module/ImplementationDisplay.cpp
        #        Module/InterfaceDisplay.h      # no need to include the headers here
        #        Test/Module/MockInterfaceDisplay.h
        #        Module/ImplementationDisplay.h
        )

# To get the headers
include_directories(Module)
include_directories(Test/Module)

add_executable(${PROJECT_NAME} ${SOURCES})

# Link googletest with the current project
target_link_libraries(${PROJECT_NAME} gtest gmock)
