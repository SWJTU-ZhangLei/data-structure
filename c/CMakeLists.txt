cmake_minimum_required(VERSION 2.0.0)
project(data-structure)

# The version number.
set(data-structure_VERSION_MAJOR 1)
set(data-structure_VERSION_MINOR 0)
set(data-structure_VERSION_PATCH 0)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(LINUX ON)
elseif(CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
    set(FREEBSD ON)
elseif(APPLE)
    set(OperatingSystem "Mac OS X")
else()
    message(STATUS "No systemtype selected for building")
endif(CMAKE_SYSTEM_NAME MATCHES "Linux")

message(STATUS, ${CMAKE_SYSTEM_NAME})


add_subdirectory(src)

include (InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${data_structure_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${data_structure_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${data_structure_VERSION_PATCH}")
include (CPack)
