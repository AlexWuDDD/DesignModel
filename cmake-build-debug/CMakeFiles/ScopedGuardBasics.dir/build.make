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
include CMakeFiles/ScopedGuardBasics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ScopedGuardBasics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ScopedGuardBasics.dir/flags.make

CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.o: CMakeFiles/ScopedGuardBasics.dir/flags.make
CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.o: ../ScopedGuard/ScopedGuardBasics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.o -c /Users/wualex/Documents/DesignPattern/ScopedGuard/ScopedGuardBasics.cpp

CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/ScopedGuard/ScopedGuardBasics.cpp > CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.i

CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/ScopedGuard/ScopedGuardBasics.cpp -o CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.s

# Object files for target ScopedGuardBasics
ScopedGuardBasics_OBJECTS = \
"CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.o"

# External object files for target ScopedGuardBasics
ScopedGuardBasics_EXTERNAL_OBJECTS =

ScopedGuardBasics: CMakeFiles/ScopedGuardBasics.dir/ScopedGuard/ScopedGuardBasics.cpp.o
ScopedGuardBasics: CMakeFiles/ScopedGuardBasics.dir/build.make
ScopedGuardBasics: CMakeFiles/ScopedGuardBasics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ScopedGuardBasics"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ScopedGuardBasics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ScopedGuardBasics.dir/build: ScopedGuardBasics

.PHONY : CMakeFiles/ScopedGuardBasics.dir/build

CMakeFiles/ScopedGuardBasics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ScopedGuardBasics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ScopedGuardBasics.dir/clean

CMakeFiles/ScopedGuardBasics.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/ScopedGuardBasics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ScopedGuardBasics.dir/depend
