cmake_minimum_required(VERSION 3.15)
project(ime-dian-d)
set(CMAKE_CXX_STANDARD 17)

# 添加源码文件
file(GLOB SOURCES
    "*.cpp"
    "*.h"
)
find_package(nlohmann_json CONFIG REQUIRED)

# 添加可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE imm32 psapi shlwapi nlohmann_json::nlohmann_json)
target_link_options(${PROJECT_NAME} PRIVATE "/SUBSYSTEM:WINDOWS" "/ENTRY:mainCRTStartup")

