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
include CMakeFiles/ANoteAboutDestructors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ANoteAboutDestructors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ANoteAboutDestructors.dir/flags.make

CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.o: CMakeFiles/ANoteAboutDestructors.dir/flags.make
CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.o: ../TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.o -c /Users/wualex/Documents/DesignPattern/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp

CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp > CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.i

CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp -o CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.s

# Object files for target ANoteAboutDestructors
ANoteAboutDestructors_OBJECTS = \
"CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.o"

# External object files for target ANoteAboutDestructors
ANoteAboutDestructors_EXTERNAL_OBJECTS =

ANoteAboutDestructors: CMakeFiles/ANoteAboutDestructors.dir/TheTemplateMethodPatternAndTheNonVirtualIdiom/ANoteAboutDestructors.cpp.o
ANoteAboutDestructors: CMakeFiles/ANoteAboutDestructors.dir/build.make
ANoteAboutDestructors: CMakeFiles/ANoteAboutDestructors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ANoteAboutDestructors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ANoteAboutDestructors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ANoteAboutDestructors.dir/build: ANoteAboutDestructors

.PHONY : CMakeFiles/ANoteAboutDestructors.dir/build

CMakeFiles/ANoteAboutDestructors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ANoteAboutDestructors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ANoteAboutDestructors.dir/clean

CMakeFiles/ANoteAboutDestructors.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/ANoteAboutDestructors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ANoteAboutDestructors.dir/depend

