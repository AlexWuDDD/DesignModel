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
include CMakeFiles/VirtualFunctionsAndAccess.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VirtualFunctionsAndAccess.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VirtualFunctionsAndAccess.dir/flags.make

CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.o: CMakeFiles/VirtualFunctionsAndAccess.dir/flags.make
CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.o: ../TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.o -c /Users/wualex/Documents/DesignPattern/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp

CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp > CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.i

CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp -o CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.s

# Object files for target VirtualFunctionsAndAccess
VirtualFunctionsAndAccess_OBJECTS = \
"CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.o"

# External object files for target VirtualFunctionsAndAccess
VirtualFunctionsAndAccess_EXTERNAL_OBJECTS =

VirtualFunctionsAndAccess: CMakeFiles/VirtualFunctionsAndAccess.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/VirtualFunctionsAndAccess.cpp.o
VirtualFunctionsAndAccess: CMakeFiles/VirtualFunctionsAndAccess.dir/build.make
VirtualFunctionsAndAccess: CMakeFiles/VirtualFunctionsAndAccess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VirtualFunctionsAndAccess"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VirtualFunctionsAndAccess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VirtualFunctionsAndAccess.dir/build: VirtualFunctionsAndAccess

.PHONY : CMakeFiles/VirtualFunctionsAndAccess.dir/build

CMakeFiles/VirtualFunctionsAndAccess.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VirtualFunctionsAndAccess.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VirtualFunctionsAndAccess.dir/clean

CMakeFiles/VirtualFunctionsAndAccess.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/VirtualFunctionsAndAccess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VirtualFunctionsAndAccess.dir/depend
