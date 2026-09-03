cmake_minimum_required(VERSION 3.22)
project(micronix CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(DEVICE_TYPE stm32g030)
set(DEVICE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/devices/)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

message("Selected Device: " ${DEVICE_TYPE})
# Create an executable object type
add_executable(app-test)

include_directories(
        include
        modules
        ${DEVICE_DIR}
        ${DEVICE_DIR}/${DEVICE_TYPE}

)

target_sources(app-test PRIVATE
        ${DEVICE_DIR}/${DEVICE_TYPE}/startup.s
        os/os_entry.cpp
        os/exception.cpp
        os/sched.cpp
        os/slab_alloc.cpp
        os/timer.cpp
        os/cron.cpp
        test/main.cpp
)

target_link_options(app-test PRIVATE
        -T ${DEVICE_DIR}/${DEVICE_TYPE}/app.ld
)

target_link_libraries(app-test PRIVATE
        gcc
)

list(REMOVE_ITEM CMAKE_C_IMPLICIT_LINK_LIBRARIES ob)
