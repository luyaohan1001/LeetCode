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
CMAKE_SOURCE_DIR = /Users/lhan/LeetCode/lambda_functions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lhan/LeetCode/lambda_functions

# Include any dependencies generated for this target.
include CMakeFiles/lambda_func.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lambda_func.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lambda_func.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lambda_func.dir/flags.make

CMakeFiles/lambda_func.dir/src/main.cpp.o: CMakeFiles/lambda_func.dir/flags.make
CMakeFiles/lambda_func.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/lambda_func.dir/src/main.cpp.o: CMakeFiles/lambda_func.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/lhan/LeetCode/lambda_functions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lambda_func.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lambda_func.dir/src/main.cpp.o -MF CMakeFiles/lambda_func.dir/src/main.cpp.o.d -o CMakeFiles/lambda_func.dir/src/main.cpp.o -c /Users/lhan/LeetCode/lambda_functions/src/main.cpp

CMakeFiles/lambda_func.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lambda_func.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lhan/LeetCode/lambda_functions/src/main.cpp > CMakeFiles/lambda_func.dir/src/main.cpp.i

CMakeFiles/lambda_func.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lambda_func.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lhan/LeetCode/lambda_functions/src/main.cpp -o CMakeFiles/lambda_func.dir/src/main.cpp.s

# Object files for target lambda_func
lambda_func_OBJECTS = \
"CMakeFiles/lambda_func.dir/src/main.cpp.o"

# External object files for target lambda_func
lambda_func_EXTERNAL_OBJECTS =

lambda_func: CMakeFiles/lambda_func.dir/src/main.cpp.o
lambda_func: CMakeFiles/lambda_func.dir/build.make
lambda_func: CMakeFiles/lambda_func.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/lhan/LeetCode/lambda_functions/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lambda_func"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lambda_func.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lambda_func.dir/build: lambda_func
.PHONY : CMakeFiles/lambda_func.dir/build

CMakeFiles/lambda_func.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lambda_func.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lambda_func.dir/clean

CMakeFiles/lambda_func.dir/depend:
	cd /Users/lhan/LeetCode/lambda_functions && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lhan/LeetCode/lambda_functions /Users/lhan/LeetCode/lambda_functions /Users/lhan/LeetCode/lambda_functions /Users/lhan/LeetCode/lambda_functions /Users/lhan/LeetCode/lambda_functions/CMakeFiles/lambda_func.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lambda_func.dir/depend

