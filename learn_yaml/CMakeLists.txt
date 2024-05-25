cmake_minimum_required(VERSION 3.28)
project(learn_yaml)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(yaml-cpp)
add_executable(learn_yaml main.cpp)
target_link_libraries(learn_yaml yaml-cpp::yaml-cpp)

file(COPY config.yaml DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
