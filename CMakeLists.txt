cmake_minimum_required(VERSION 3.15)

project(
  renms_example_plugin
  LANGUAGES CXX
  VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# You don't need this, it's just convenient
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(RENMS_METADATA_DIR ${CMAKE_SOURCE_DIR}/metadata)

add_subdirectory(renms)

add_library(my_awesome_plugin SHARED "dllmain.cpp")

target_link_libraries(my_awesome_plugin PRIVATE renms_sdk)
