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
include CMakeFiles/BasicSFINAE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BasicSFINAE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BasicSFINAE.dir/flags.make

CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.o: CMakeFiles/BasicSFINAE.dir/flags.make
CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.o: ../BasicSFINAE.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.o -c /Users/wualex/Documents/DesignPattern/BasicSFINAE.cpp

CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/BasicSFINAE.cpp > CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.i

CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/BasicSFINAE.cpp -o CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.s

# Object files for target BasicSFINAE
BasicSFINAE_OBJECTS = \
"CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.o"

# External object files for target BasicSFINAE
BasicSFINAE_EXTERNAL_OBJECTS =

BasicSFINAE: CMakeFiles/BasicSFINAE.dir/BasicSFINAE.cpp.o
BasicSFINAE: CMakeFiles/BasicSFINAE.dir/build.make
BasicSFINAE: CMakeFiles/BasicSFINAE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BasicSFINAE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BasicSFINAE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BasicSFINAE.dir/build: BasicSFINAE

.PHONY : CMakeFiles/BasicSFINAE.dir/build

CMakeFiles/BasicSFINAE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BasicSFINAE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BasicSFINAE.dir/clean

CMakeFiles/BasicSFINAE.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/BasicSFINAE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BasicSFINAE.dir/depend

