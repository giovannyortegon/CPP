# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\giova\Documents\CPP\CMake Homework"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\giova\Documents\CPP\CMake Homework\build"

# Include any dependencies generated for this target.
include source/CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include source/CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include source/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/main.dir/flags.make

source/CMakeFiles/main.dir/main.cpp.obj: source/CMakeFiles/main.dir/flags.make
source/CMakeFiles/main.dir/main.cpp.obj: source/CMakeFiles/main.dir/includes_CXX.rsp
source/CMakeFiles/main.dir/main.cpp.obj: C:/Users/giova/Documents/CPP/CMake\ Homework/source/main.cpp
source/CMakeFiles/main.dir/main.cpp.obj: source/CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\giova\Documents\CPP\CMake Homework\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/main.dir/main.cpp.obj"
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\source && C:\mingw\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/main.dir/main.cpp.obj -MF CMakeFiles\main.dir\main.cpp.obj.d -o CMakeFiles\main.dir\main.cpp.obj -c "C:\Users\giova\Documents\CPP\CMake Homework\source\main.cpp"

source/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\source && C:\mingw\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\giova\Documents\CPP\CMake Homework\source\main.cpp" > CMakeFiles\main.dir\main.cpp.i

source/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\source && C:\mingw\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\giova\Documents\CPP\CMake Homework\source\main.cpp" -o CMakeFiles\main.dir\main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe: source/CMakeFiles/main.dir/main.cpp.obj
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe: source/CMakeFiles/main.dir/build.make
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe: library/libmath.a
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe: source/CMakeFiles/main.dir/linkLibs.rsp
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe: source/CMakeFiles/main.dir/objects1.rsp
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe: source/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\giova\Documents\CPP\CMake Homework\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"C:\Users\giova\Documents\CPP\CMake Homework\bin\main.exe\""
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/main.dir/build: C:/Users/giova/Documents/CPP/CMake\ Homework/bin/main.exe
.PHONY : source/CMakeFiles/main.dir/build

source/CMakeFiles/main.dir/clean:
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\source && $(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : source/CMakeFiles/main.dir/clean

source/CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\giova\Documents\CPP\CMake Homework" "C:\Users\giova\Documents\CPP\CMake Homework\source" "C:\Users\giova\Documents\CPP\CMake Homework\build" "C:\Users\giova\Documents\CPP\CMake Homework\build\source" "C:\Users\giova\Documents\CPP\CMake Homework\build\source\CMakeFiles\main.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : source/CMakeFiles/main.dir/depend

