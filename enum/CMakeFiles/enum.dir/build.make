# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lhan/LeetCode/enum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lhan/LeetCode/enum

# Include any dependencies generated for this target.
include CMakeFiles/enum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/enum.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/enum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/enum.dir/flags.make

CMakeFiles/enum.dir/src/main.cpp.o: CMakeFiles/enum.dir/flags.make
CMakeFiles/enum.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/enum.dir/src/main.cpp.o: CMakeFiles/enum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lhan/LeetCode/enum/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/enum.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/enum.dir/src/main.cpp.o -MF CMakeFiles/enum.dir/src/main.cpp.o.d -o CMakeFiles/enum.dir/src/main.cpp.o -c /Users/lhan/LeetCode/enum/src/main.cpp

CMakeFiles/enum.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/enum.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lhan/LeetCode/enum/src/main.cpp > CMakeFiles/enum.dir/src/main.cpp.i

CMakeFiles/enum.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/enum.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lhan/LeetCode/enum/src/main.cpp -o CMakeFiles/enum.dir/src/main.cpp.s

# Object files for target enum
enum_OBJECTS = \
"CMakeFiles/enum.dir/src/main.cpp.o"

# External object files for target enum
enum_EXTERNAL_OBJECTS =

enum: CMakeFiles/enum.dir/src/main.cpp.o
enum: CMakeFiles/enum.dir/build.make
enum: CMakeFiles/enum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/lhan/LeetCode/enum/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable enum"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/enum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/enum.dir/build: enum
.PHONY : CMakeFiles/enum.dir/build

CMakeFiles/enum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/enum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/enum.dir/clean

CMakeFiles/enum.dir/depend:
	cd /Users/lhan/LeetCode/enum && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lhan/LeetCode/enum /Users/lhan/LeetCode/enum /Users/lhan/LeetCode/enum /Users/lhan/LeetCode/enum /Users/lhan/LeetCode/enum/CMakeFiles/enum.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/enum.dir/depend

