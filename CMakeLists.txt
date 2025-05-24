cmake_minimum_required(VERSION 3.25)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"  CACHE STRING "vcpkg toolchain file")


project(dian-cli)

add_subdirectory(src)
add_subdirectory(test)


# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /MANIFEST:NO")
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

# # 设置安装路径
# if(MSVC)
#     string(REPLACE "\\" "/" USERPROFILE "$ENV{USERPROFILE}")
# endif()
# set(CMAKE_INSTALL_PREFIX "${USERPROFILE}/dian-cli")

# if(UNIX)
#     set(CMAKE_THREAD_LIBS_INIT "-lpthread")
# endif()

# # 屏蔽因为字符集可能导致的错误
# if(MSVC)
# add_compile_options(/wd4819)
# endif()

# # 添加资源目录
# set(RESOURCES_DIR ${PROJECT_SOURCE_DIR}/res)
# file(GLOB_RECURSE RESOURCES ${RESOURCES_DIR}/*)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out/)

# # 将资源复制到输出目录
# foreach(RESOURCE ${RESOURCES})
# file(RELATIVE_PATH RESOURCE_PATH ${RESOURCES_DIR} ${RESOURCE})
# configure_file(${RESOURCE} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${RESOURCE_PATH}
# COPYONLY)
# endforeach()
# # 依赖项的位置
# include(cmake/deps.cmake)

# include_directories(include)

# # 通用工具
# add_executable(dian-cli src/main.cpp src/foo.cpp)
# target_link_libraries(dian-cli  spdlog::spdlog spdlog::spdlog)
# # windows 特异的软件
# add_executable(win-dian-cli src/winmain.cpp src/wintools.cpp)
# target_link_libraries(win-dian-cli  spdlog::spdlog)

# add_executable(win-dian-d src/winmaind.cpp src/wintools.cpp)
# target_link_options(win-dian-d PRIVATE "/SUBSYSTEM:WINDOWS" "/ENTRY:mainCRTStartup")
# target_link_libraries(win-dian-d  spdlog::spdlog)

# add_executable(dianswitch src/dianswitch.c)
# install(TARGETS dianswitch DESTINATION bin)

# add_executable(test src/test.cpp)
# add_executable(dianrm src/dianrm.cpp)


# # 在 install 阶段执行 taskkill 命令
# install(CODE "
#     execute_process(
#         COMMAND powershell  \"taskkill /F /IM ime-dian-d.exe\"
#         RESULT_VARIABLE result
#         OUTPUT_VARIABLE output
#         ERROR_VARIABLE error
#     )
# ")
# add_executable(ime-dian-d src/imemain.cpp)
# target_link_options(ime-dian-d PRIVATE "/SUBSYSTEM:WINDOWS" "/ENTRY:mainCRTStartup")
# target_link_libraries(ime-dian-d imm32 psapi shlwapi nlohmann_json::nlohmann_json)
# install(TARGETS ime-dian-d DESTINATION bin)
# install(FILES res/config_ime.json DESTINATION bin)


# # set_target_properties(ime-dian-d PROPERTIES WIN32_EXECUTABLE true)
