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
include CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/flags.make

CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.o: CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/flags.make
CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.o: ../PerformanceOfTheNamedArgumentsIdiom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.o -c /Users/wualex/Documents/DesignPattern/PerformanceOfTheNamedArgumentsIdiom.cpp

CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/PerformanceOfTheNamedArgumentsIdiom.cpp > CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.i

CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/PerformanceOfTheNamedArgumentsIdiom.cpp -o CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.s

# Object files for target PerformanceOfTheNamedArgumentsIdiom
PerformanceOfTheNamedArgumentsIdiom_OBJECTS = \
"CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.o"

# External object files for target PerformanceOfTheNamedArgumentsIdiom
PerformanceOfTheNamedArgumentsIdiom_EXTERNAL_OBJECTS =

PerformanceOfTheNamedArgumentsIdiom: CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/PerformanceOfTheNamedArgumentsIdiom.cpp.o
PerformanceOfTheNamedArgumentsIdiom: CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/build.make
PerformanceOfTheNamedArgumentsIdiom: CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PerformanceOfTheNamedArgumentsIdiom"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/build: PerformanceOfTheNamedArgumentsIdiom

.PHONY : CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/build

CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/clean

CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PerformanceOfTheNamedArgumentsIdiom.dir/depend

