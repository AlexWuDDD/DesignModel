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
include CMakeFiles/MeyersSingleton.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MeyersSingleton.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MeyersSingleton.dir/flags.make

CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.o: CMakeFiles/MeyersSingleton.dir/flags.make
CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.o: ../Singleton/MeyersSingleton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.o -c /Users/wualex/Documents/DesignPattern/Singleton/MeyersSingleton.cpp

CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/Singleton/MeyersSingleton.cpp > CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.i

CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/Singleton/MeyersSingleton.cpp -o CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.s

# Object files for target MeyersSingleton
MeyersSingleton_OBJECTS = \
"CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.o"

# External object files for target MeyersSingleton
MeyersSingleton_EXTERNAL_OBJECTS =

MeyersSingleton: CMakeFiles/MeyersSingleton.dir/Singleton/MeyersSingleton.cpp.o
MeyersSingleton: CMakeFiles/MeyersSingleton.dir/build.make
MeyersSingleton: CMakeFiles/MeyersSingleton.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MeyersSingleton"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MeyersSingleton.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MeyersSingleton.dir/build: MeyersSingleton

.PHONY : CMakeFiles/MeyersSingleton.dir/build

CMakeFiles/MeyersSingleton.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MeyersSingleton.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MeyersSingleton.dir/clean

CMakeFiles/MeyersSingleton.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/MeyersSingleton.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MeyersSingleton.dir/depend

