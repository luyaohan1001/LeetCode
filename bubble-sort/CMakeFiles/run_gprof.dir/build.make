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
CMAKE_SOURCE_DIR = /Users/lhan/LeetCode/bubble-sort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lhan/LeetCode/bubble-sort

# Utility rule file for run_gprof.

# Include any custom commands dependencies for this target.
include CMakeFiles/run_gprof.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/run_gprof.dir/progress.make

CMakeFiles/run_gprof:
	gprof bubble_sort > prof_analysis.txt

run_gprof: CMakeFiles/run_gprof
run_gprof: CMakeFiles/run_gprof.dir/build.make
.PHONY : run_gprof

# Rule to build all files generated by this target.
CMakeFiles/run_gprof.dir/build: run_gprof
.PHONY : CMakeFiles/run_gprof.dir/build

CMakeFiles/run_gprof.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_gprof.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_gprof.dir/clean

CMakeFiles/run_gprof.dir/depend:
	cd /Users/lhan/LeetCode/bubble-sort && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lhan/LeetCode/bubble-sort /Users/lhan/LeetCode/bubble-sort /Users/lhan/LeetCode/bubble-sort /Users/lhan/LeetCode/bubble-sort /Users/lhan/LeetCode/bubble-sort/CMakeFiles/run_gprof.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/run_gprof.dir/depend

