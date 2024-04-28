# Create library named "frogbook"
add_library(frogbook frog.cpp)

# Link executable to source file
add_executable(frogger main.cpp)

# Link "frogbook" library to executable
target_link_libraries(frogger frogbook)