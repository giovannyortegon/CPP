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
include thirdparty/CMakeFiles/frogger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include thirdparty/CMakeFiles/frogger.dir/compiler_depend.make

# Include the progress variables for this target.
include thirdparty/CMakeFiles/frogger.dir/progress.make

# Include the compile flags for this target's objects.
include thirdparty/CMakeFiles/frogger.dir/flags.make

thirdparty/CMakeFiles/frogger.dir/main.cpp.obj: thirdparty/CMakeFiles/frogger.dir/flags.make
thirdparty/CMakeFiles/frogger.dir/main.cpp.obj: thirdparty/CMakeFiles/frogger.dir/includes_CXX.rsp
thirdparty/CMakeFiles/frogger.dir/main.cpp.obj: C:/Users/giova/Documents/CPP/CMake\ Homework/thirdparty/main.cpp
thirdparty/CMakeFiles/frogger.dir/main.cpp.obj: thirdparty/CMakeFiles/frogger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\giova\Documents\CPP\CMake Homework\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object thirdparty/CMakeFiles/frogger.dir/main.cpp.obj"
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\THIRDP~1 && C:\mingw\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT thirdparty/CMakeFiles/frogger.dir/main.cpp.obj -MF CMakeFiles\frogger.dir\main.cpp.obj.d -o CMakeFiles\frogger.dir\main.cpp.obj -c "C:\Users\giova\Documents\CPP\CMake Homework\thirdparty\main.cpp"

thirdparty/CMakeFiles/frogger.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/frogger.dir/main.cpp.i"
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\THIRDP~1 && C:\mingw\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\giova\Documents\CPP\CMake Homework\thirdparty\main.cpp" > CMakeFiles\frogger.dir\main.cpp.i

thirdparty/CMakeFiles/frogger.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/frogger.dir/main.cpp.s"
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\THIRDP~1 && C:\mingw\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\giova\Documents\CPP\CMake Homework\thirdparty\main.cpp" -o CMakeFiles\frogger.dir\main.cpp.s

# Object files for target frogger
frogger_OBJECTS = \
"CMakeFiles/frogger.dir/main.cpp.obj"

# External object files for target frogger
frogger_EXTERNAL_OBJECTS =

C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe: thirdparty/CMakeFiles/frogger.dir/main.cpp.obj
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe: thirdparty/CMakeFiles/frogger.dir/build.make
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe: thirdparty/libfrogbook.a
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe: thirdparty/CMakeFiles/frogger.dir/linkLibs.rsp
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe: thirdparty/CMakeFiles/frogger.dir/objects1.rsp
C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe: thirdparty/CMakeFiles/frogger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\giova\Documents\CPP\CMake Homework\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"C:\Users\giova\Documents\CPP\CMake Homework\bin\frogger.exe\""
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\THIRDP~1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\frogger.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
thirdparty/CMakeFiles/frogger.dir/build: C:/Users/giova/Documents/CPP/CMake\ Homework/bin/frogger.exe
.PHONY : thirdparty/CMakeFiles/frogger.dir/build

thirdparty/CMakeFiles/frogger.dir/clean:
	cd /d C:\Users\giova\DOCUME~1\CPP\CMAKEH~1\build\THIRDP~1 && $(CMAKE_COMMAND) -P CMakeFiles\frogger.dir\cmake_clean.cmake
.PHONY : thirdparty/CMakeFiles/frogger.dir/clean

thirdparty/CMakeFiles/frogger.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\giova\Documents\CPP\CMake Homework" "C:\Users\giova\Documents\CPP\CMake Homework\thirdparty" "C:\Users\giova\Documents\CPP\CMake Homework\build" "C:\Users\giova\Documents\CPP\CMake Homework\build\thirdparty" "C:\Users\giova\Documents\CPP\CMake Homework\build\thirdparty\CMakeFiles\frogger.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : thirdparty/CMakeFiles/frogger.dir/depend

