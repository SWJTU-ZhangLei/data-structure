cmake_minimum_required(VERSION 3.0.0)
project(data-structure)

set(CMAKE_C_STANDARD 99)

# The version number.
set(DATA_STRUCTURE_VERSION_MAJOR 1)
set(DATA_STRUCTURE_VERSION_MINOR 0)
set(DATA_STRUCTURE_VERSION_PATCH 0)

option(BUILD_SHARED_LIBS "Option for generating dynamic or static library." OFF)

add_subdirectory(slinklist)

include_directories(slinklist)
#link_directories(slinklist)

add_executable(data-structure main.c)
target_link_libraries(data-structure slinklist)

install(TARGETS data-structure RUNTIME DESTINATION bin)

include (InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${DATA_STRUCTURE_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${DATA_STRUCTURE_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${DATA_STRUCTURE_VERSION_PATCH}")
include (CPack)
