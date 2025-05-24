cmake_minimum_required(VERSION 3.15)
project(zenhan)

# 添加源码文件
file(GLOB SOURCES
    "*.cpp"
    "*.h"
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_options(${PROJECT_NAME} PRIVATE "/SUBSYSTEM:WINDOWS" "/ENTRY:mainCRTStartup")
target_link_libraries(${PROJECT_NAME} imm32)


