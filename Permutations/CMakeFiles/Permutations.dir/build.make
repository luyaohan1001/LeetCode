# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lhan/LeetCode/Permutations

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lhan/LeetCode/Permutations

# Include any dependencies generated for this target.
include CMakeFiles/Permutations.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Permutations.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Permutations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Permutations.dir/flags.make

CMakeFiles/Permutations.dir/src/main.cpp.o: CMakeFiles/Permutations.dir/flags.make
CMakeFiles/Permutations.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/Permutations.dir/src/main.cpp.o: CMakeFiles/Permutations.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lhan/LeetCode/Permutations/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Permutations.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Permutations.dir/src/main.cpp.o -MF CMakeFiles/Permutations.dir/src/main.cpp.o.d -o CMakeFiles/Permutations.dir/src/main.cpp.o -c /Users/lhan/LeetCode/Permutations/src/main.cpp

CMakeFiles/Permutations.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Permutations.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lhan/LeetCode/Permutations/src/main.cpp > CMakeFiles/Permutations.dir/src/main.cpp.i

CMakeFiles/Permutations.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Permutations.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lhan/LeetCode/Permutations/src/main.cpp -o CMakeFiles/Permutations.dir/src/main.cpp.s

# Object files for target Permutations
Permutations_OBJECTS = \
"CMakeFiles/Permutations.dir/src/main.cpp.o"

# External object files for target Permutations
Permutations_EXTERNAL_OBJECTS =

Permutations: CMakeFiles/Permutations.dir/src/main.cpp.o
Permutations: CMakeFiles/Permutations.dir/build.make
Permutations: CMakeFiles/Permutations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/lhan/LeetCode/Permutations/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Permutations"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Permutations.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Permutations.dir/build: Permutations
.PHONY : CMakeFiles/Permutations.dir/build

CMakeFiles/Permutations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Permutations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Permutations.dir/clean

CMakeFiles/Permutations.dir/depend:
	cd /Users/lhan/LeetCode/Permutations && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lhan/LeetCode/Permutations /Users/lhan/LeetCode/Permutations /Users/lhan/LeetCode/Permutations /Users/lhan/LeetCode/Permutations /Users/lhan/LeetCode/Permutations/CMakeFiles/Permutations.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Permutations.dir/depend

