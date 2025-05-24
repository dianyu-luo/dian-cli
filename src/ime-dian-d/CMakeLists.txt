cmake_minimum_required(VERSION 3.15)
project(ime-dian-dd)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加源码文件
file(GLOB SOURCES
    "*.cpp"
    "*.h"
)

# 添加可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

