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
CMAKE_SOURCE_DIR = /Users/lhan/LeetCode/stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lhan/LeetCode/stack

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/stack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/src/main.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/stack.dir/src/main.cpp.o: CMakeFiles/stack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lhan/LeetCode/stack/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/stack.dir/src/main.cpp.o -MF CMakeFiles/stack.dir/src/main.cpp.o.d -o CMakeFiles/stack.dir/src/main.cpp.o -c /Users/lhan/LeetCode/stack/src/main.cpp

CMakeFiles/stack.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/stack.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lhan/LeetCode/stack/src/main.cpp > CMakeFiles/stack.dir/src/main.cpp.i

CMakeFiles/stack.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/stack.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lhan/LeetCode/stack/src/main.cpp -o CMakeFiles/stack.dir/src/main.cpp.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/src/main.cpp.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/src/main.cpp.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/lhan/LeetCode/stack/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack
.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd /Users/lhan/LeetCode/stack && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lhan/LeetCode/stack /Users/lhan/LeetCode/stack /Users/lhan/LeetCode/stack /Users/lhan/LeetCode/stack /Users/lhan/LeetCode/stack/CMakeFiles/stack.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/stack.dir/depend

