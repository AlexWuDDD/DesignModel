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
include CMakeFiles/DesignPattern.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DesignPattern.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DesignPattern.dir/flags.make

CMakeFiles/DesignPattern.dir/main.cpp.o: CMakeFiles/DesignPattern.dir/flags.make
CMakeFiles/DesignPattern.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DesignPattern.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DesignPattern.dir/main.cpp.o -c /Users/wualex/Documents/DesignPattern/main.cpp

CMakeFiles/DesignPattern.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DesignPattern.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/main.cpp > CMakeFiles/DesignPattern.dir/main.cpp.i

CMakeFiles/DesignPattern.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DesignPattern.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/main.cpp -o CMakeFiles/DesignPattern.dir/main.cpp.s

# Object files for target DesignPattern
DesignPattern_OBJECTS = \
"CMakeFiles/DesignPattern.dir/main.cpp.o"

# External object files for target DesignPattern
DesignPattern_EXTERNAL_OBJECTS =

DesignPattern: CMakeFiles/DesignPattern.dir/main.cpp.o
DesignPattern: CMakeFiles/DesignPattern.dir/build.make
DesignPattern: CMakeFiles/DesignPattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DesignPattern"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DesignPattern.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DesignPattern.dir/build: DesignPattern

.PHONY : CMakeFiles/DesignPattern.dir/build

CMakeFiles/DesignPattern.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DesignPattern.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DesignPattern.dir/clean

CMakeFiles/DesignPattern.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/DesignPattern.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DesignPattern.dir/depend

