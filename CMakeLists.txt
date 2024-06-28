cmake_minimum_required(VERSION 3.28)
project(SuperSwarm)

set(CMAKE_CXX_STANDARD 17)

add_executable(SuperSwarm main.cpp
        managers/map.cpp
        managers/map.h
        managers/stateTracker.cpp
        managers/stateTracker.h
        managers/server.cpp
        managers/server.h
        robots/robotBase.cpp
        robots/robotBase.h
        robots/beacon/beacon.cpp
        robots/beacon/beacon.h
        robots/miner/miner.cpp
        robots/miner/miner.h
        robots/transport/transporter.cpp
        robots/transport/transporter.h
        utility/node.cpp
        utility/node.h
)
