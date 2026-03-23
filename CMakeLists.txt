cmake_minimum_required(VERSION 3.10.0)
project(String VERSION 0.1.0 LANGUAGES C CXX)

# 指定头文件目录（让编译器能找到 #include "Game.h"）
include_directories(${PROJECT_SOURCE_DIR}/include)

# 自动收集 src 目录下的所有 .cpp 文件
file(GLOB SOURCES "src/*.cpp")

# 如果 main.cpp 在根目录，也加入
list(APPEND SOURCES "main.cpp")
add_executable(String ${SOURCES})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
