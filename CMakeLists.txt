cmake_minimum_required(VERSION 3.25)


project(dian-cli)
if(MSVC)
    add_compile_options("/source-charset:utf-8" "/execution-charset:utf-8")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE imm32 psapi shlwapi )
target_link_options(${PROJECT_NAME} PRIVATE "/SUBSYSTEM:WINDOWS" "/ENTRY:mainCRTStartup")

