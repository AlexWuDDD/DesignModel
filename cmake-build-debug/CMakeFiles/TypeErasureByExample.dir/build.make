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
include CMakeFiles/TypeErasureByExample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TypeErasureByExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TypeErasureByExample.dir/flags.make

CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.o: CMakeFiles/TypeErasureByExample.dir/flags.make
CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.o: ../TypeErasureByExample.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.o -c /Users/wualex/Documents/DesignPattern/TypeErasureByExample.cpp

CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/TypeErasureByExample.cpp > CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.i

CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/TypeErasureByExample.cpp -o CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.s

# Object files for target TypeErasureByExample
TypeErasureByExample_OBJECTS = \
"CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.o"

# External object files for target TypeErasureByExample
TypeErasureByExample_EXTERNAL_OBJECTS =

TypeErasureByExample: CMakeFiles/TypeErasureByExample.dir/TypeErasureByExample.cpp.o
TypeErasureByExample: CMakeFiles/TypeErasureByExample.dir/build.make
TypeErasureByExample: CMakeFiles/TypeErasureByExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TypeErasureByExample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TypeErasureByExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TypeErasureByExample.dir/build: TypeErasureByExample

.PHONY : CMakeFiles/TypeErasureByExample.dir/build

CMakeFiles/TypeErasureByExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TypeErasureByExample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TypeErasureByExample.dir/clean

CMakeFiles/TypeErasureByExample.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/TypeErasureByExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TypeErasureByExample.dir/depend
