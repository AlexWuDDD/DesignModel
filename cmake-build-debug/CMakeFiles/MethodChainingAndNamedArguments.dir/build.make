# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wualex/Documents/DesignPattern

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wualex/Documents/DesignPattern/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MethodChainingAndNamedArguments.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MethodChainingAndNamedArguments.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MethodChainingAndNamedArguments.dir/flags.make

CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.o: CMakeFiles/MethodChainingAndNamedArguments.dir/flags.make
CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.o: ../MethodChainingAndNamedArguments.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.o -c /Users/wualex/Documents/DesignPattern/MethodChainingAndNamedArguments.cpp

CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/MethodChainingAndNamedArguments.cpp > CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.i

CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/MethodChainingAndNamedArguments.cpp -o CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.s

# Object files for target MethodChainingAndNamedArguments
MethodChainingAndNamedArguments_OBJECTS = \
"CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.o"

# External object files for target MethodChainingAndNamedArguments
MethodChainingAndNamedArguments_EXTERNAL_OBJECTS =

MethodChainingAndNamedArguments: CMakeFiles/MethodChainingAndNamedArguments.dir/MethodChainingAndNamedArguments.cpp.o
MethodChainingAndNamedArguments: CMakeFiles/MethodChainingAndNamedArguments.dir/build.make
MethodChainingAndNamedArguments: CMakeFiles/MethodChainingAndNamedArguments.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MethodChainingAndNamedArguments"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MethodChainingAndNamedArguments.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MethodChainingAndNamedArguments.dir/build: MethodChainingAndNamedArguments

.PHONY : CMakeFiles/MethodChainingAndNamedArguments.dir/build

CMakeFiles/MethodChainingAndNamedArguments.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MethodChainingAndNamedArguments.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MethodChainingAndNamedArguments.dir/clean

CMakeFiles/MethodChainingAndNamedArguments.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/MethodChainingAndNamedArguments.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MethodChainingAndNamedArguments.dir/depend
