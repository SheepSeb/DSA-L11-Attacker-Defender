cmake_minimum_required(VERSION 3.10)
project(DSA_L11)

set(CMAKE_CXX_STANDARD 17)

set(TEAM sample_team)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/template)
include_directories(${CMAKE_SOURCE_DIR}/submissions/${TEAM})

add_executable(DSA_L11
        main.cpp
        submissions/${TEAM}/attacker_setup.cpp
        submissions/${TEAM}/defender_setup.cpp
)