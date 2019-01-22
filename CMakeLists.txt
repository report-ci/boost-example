cmake_minimum_required(VERSION 3.7)
project(boost_example)

set(CMAKE_CXX_STANDARD 14)

add_definitions(-DBOOST_ALL_DYN_LINK=1 -DBOOST_ALL_NO_LIB=1)


find_package(Boost REQUIRED unit_test_framework prg_exec_monitor )
include_directories(include ${Boost_INCLUDE_DIRS} )
link_directories(${Boost_LIBRARY_DIRS})

add_subdirectory(test)
