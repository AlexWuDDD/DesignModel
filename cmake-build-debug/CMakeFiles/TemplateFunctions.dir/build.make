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
include CMakeFiles/TemplateFunctions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TemplateFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TemplateFunctions.dir/flags.make

CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.o: CMakeFiles/TemplateFunctions.dir/flags.make
CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.o: ../TemplateFunctions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.o -c /Users/wualex/Documents/DesignPattern/TemplateFunctions.cpp

CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/TemplateFunctions.cpp > CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.i

CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/TemplateFunctions.cpp -o CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.s

# Object files for target TemplateFunctions
TemplateFunctions_OBJECTS = \
"CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.o"

# External object files for target TemplateFunctions
TemplateFunctions_EXTERNAL_OBJECTS =

TemplateFunctions: CMakeFiles/TemplateFunctions.dir/TemplateFunctions.cpp.o
TemplateFunctions: CMakeFiles/TemplateFunctions.dir/build.make
TemplateFunctions: CMakeFiles/TemplateFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TemplateFunctions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TemplateFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TemplateFunctions.dir/build: TemplateFunctions

.PHONY : CMakeFiles/TemplateFunctions.dir/build

CMakeFiles/TemplateFunctions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TemplateFunctions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TemplateFunctions.dir/clean

CMakeFiles/TemplateFunctions.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/TemplateFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TemplateFunctions.dir/depend

