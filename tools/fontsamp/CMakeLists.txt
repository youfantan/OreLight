cmake_minimum_required(VERSION 4.2)
project(fontsamp)

set(CMAKE_CXX_STANDARD 20)
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(STATIC_LIB_PATH "${CMAKE_SOURCE_DIR}/lib/msvc-debug-static")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(STATIC_LIB_PATH "${CMAKE_SOURCE_DIR}/lib/msvc-release-static")
endif ()

include_directories(include)
link_directories(${STATIC_LIB_PATH})

add_executable(fontsamp main.cpp)
target_link_libraries(fontsamp freetype)
