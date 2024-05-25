cmake_minimum_required(VERSION 3.28)
project(learn_conan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(yaml-cpp)
add_executable(learn_conan main.cpp)
target_link_libraries(learn_conan yaml-cpp::yaml-cpp)

 file(COPY config.yaml DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
