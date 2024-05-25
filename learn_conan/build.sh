#!/bin/bash
set -e

conan install . --build=missing
cd  build
cmake .. -DCMAKE_TOOLCHAIN_FILE=Release/generators/conan_toolchain.cmake
cmake --build .