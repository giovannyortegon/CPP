# Link executable to source file
add_executable(main main.cpp)

# Link "math" library to executable
target_link_libraries(main math)