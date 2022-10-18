cmake_minimum_required(VERSION 3.8.2)
project(testgflag)

find_package(gflags REQUIRED)

if(gflags_FOUND)
    message("gflags found")
else(gflags_FOUND)
    message("gflags not found")
endif(gflags_FOUND)


add_executable(${PROJECT_NAME}
               src/main.cc
	          gg/gg.cc
              )

target_link_libraries(${PROJECT_NAME}
                ${GFLAGS_LIBRARIES}
                #gflags::gflags
)