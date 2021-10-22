cmake_minimum_required(VERSION 3.12) 

set(PROJECT_NAME pbrush)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

project(${PROJECT_NAME})
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wl,--export-dynamic -Wall -Wextra -g -pthread")

FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)
PKG_CHECK_MODULES(GTKSOURCEVIEW REQUIRED gtksourceview-4)

FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(X11 REQUIRED)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

file(GLOB INTERFACE_FILES "interface/*.glade")
file(GLOB SHADER_FILES "shaders/*.glsl")
file(COPY ${INTERFACE_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/interface/)
file(COPY ${SHADER_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/shaders/)

file(GLOB SRC_FILES "src/*.c")
include_directories("include/")

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})
target_link_libraries(${PROJECT_NAME} OpenGL::GL)
target_link_libraries(${PROJECT_NAME} ${X11_LIBRARIES})
target_link_libraries(${PROJECT_NAME} epoxy)
