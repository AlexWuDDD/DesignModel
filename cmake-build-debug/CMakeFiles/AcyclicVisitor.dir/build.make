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
include CMakeFiles/AcyclicVisitor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AcyclicVisitor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AcyclicVisitor.dir/flags.make

CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.o: CMakeFiles/AcyclicVisitor.dir/flags.make
CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.o: ../TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.o -c /Users/wualex/Documents/DesignPattern/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp

CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp > CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.i

CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp -o CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.s

# Object files for target AcyclicVisitor
AcyclicVisitor_OBJECTS = \
"CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.o"

# External object files for target AcyclicVisitor
AcyclicVisitor_EXTERNAL_OBJECTS =

AcyclicVisitor: CMakeFiles/AcyclicVisitor.dir/TheVisitorPatternAndMultipleDispatch/AcyclicVisitor.cpp.o
AcyclicVisitor: CMakeFiles/AcyclicVisitor.dir/build.make
AcyclicVisitor: CMakeFiles/AcyclicVisitor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AcyclicVisitor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AcyclicVisitor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AcyclicVisitor.dir/build: AcyclicVisitor

.PHONY : CMakeFiles/AcyclicVisitor.dir/build

CMakeFiles/AcyclicVisitor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AcyclicVisitor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AcyclicVisitor.dir/clean

CMakeFiles/AcyclicVisitor.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/AcyclicVisitor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AcyclicVisitor.dir/depend

