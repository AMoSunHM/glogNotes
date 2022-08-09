cmake_minimum_required(VERSION 3.0.2)
project(glogDemo)

find_package (glog 0.6.0 REQUIRED)

add_executable(glog 
    main.cc
    log/binary.cc)

target_link_libraries(glog

    glog::glog
)