cmake_minimum_required(VERSION 3.28)
project(SuperSwarm)

set(CMAKE_CXX_STANDARD 17)

add_executable(SuperSwarm main.cpp
        managers/Map.cpp
        managers/Map.h
        managers/StateTracker.cpp
        managers/StateTracker.h
        managers/Server.cpp
        managers/Server.h
        robots/robotBase.cpp
        robots/robotBase.h
        robots/beacon/drone.cpp
        robots/beacon/drone.h
)
