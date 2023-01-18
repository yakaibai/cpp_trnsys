project(Type264)
cmake_minimum_required(VERSION 3.0)
ADD_LIBRARY(Type264 SHARED Type264.cpp)
target_link_directories(
    Type264 
    PUBLIC 
    ./
    )
target_link_libraries(
    Type264 
    TRNDll64.lib
    )