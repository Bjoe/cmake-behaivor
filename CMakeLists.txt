cmake_minimum_required(VERSION 3.2)

include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/Bjoe/hunter/archive/ca769396d254103f42a23af423bb563b7a8f0864.zip"
    SHA1 "54e6503dc86ff507940024865d10df52a33c4886"
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
