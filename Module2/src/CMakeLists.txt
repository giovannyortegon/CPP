message("*** SRC CMake ***")
add_executable(main main.cpp)
target_link_libraries(main Rectangulo)
cd build
mingw32-make.exe