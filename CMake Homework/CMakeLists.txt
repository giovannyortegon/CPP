# Determine Cmake
cmake_minimum_required(VERSION 3.29.0)
# Change variable that contains the save location for the executable, have it save in bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

# Find Header file for "frogger"
include_directories(thirdparty)
# Name executable file to "frogger"
project(frogger)
# Run CMake script in thirdparty
add_subdirectory(thirdparty)

# Name executable file to "calculator"
project(calculator)
# Find Header file for "calculator"
include_directories(include)

# Run CMake script in library
add_subdirectory(library)
# Run CMake script in source
add_subdirectory(source)