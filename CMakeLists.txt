cmake_minimum_required(VERSION 3.2)

include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.245.tar.gz"
    SHA1 "36e7f44ee4b3f8e25683e9d700f05a27ecb0a848"
    LOCAL
)

project(cmake-behaivor)

hunter_add_package(botan)
find_package(botan-2 CONFIG REQUIRED)

add_executable(bte boo.cpp)
target_link_libraries(bte PUBLIC PkgConfig::botan-2)

file(READ "${CMAKE_BINARY_DIR}/_3rdParty/Hunter/install-root-dir" HUNTER_INSTALL_ROOT_DIR)

message(STATUS "HUNTER_INSTALL_ROOT_DIR=${HUNTER_INSTALL_ROOT_DIR}")
message(STATUS "botan-2_LIBRARY_DIRS=${botan-2_LIBRARY_DIRS}")