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
include CMakeFiles/TheUltimateSFINAE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TheUltimateSFINAE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TheUltimateSFINAE.dir/flags.make

CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.o: CMakeFiles/TheUltimateSFINAE.dir/flags.make
CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.o: ../TheUltimateSFINAE.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.o -c /Users/wualex/Documents/DesignPattern/TheUltimateSFINAE.cpp

CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/TheUltimateSFINAE.cpp > CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.i

CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/TheUltimateSFINAE.cpp -o CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.s

# Object files for target TheUltimateSFINAE
TheUltimateSFINAE_OBJECTS = \
"CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.o"

# External object files for target TheUltimateSFINAE
TheUltimateSFINAE_EXTERNAL_OBJECTS =

TheUltimateSFINAE: CMakeFiles/TheUltimateSFINAE.dir/TheUltimateSFINAE.cpp.o
TheUltimateSFINAE: CMakeFiles/TheUltimateSFINAE.dir/build.make
TheUltimateSFINAE: CMakeFiles/TheUltimateSFINAE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TheUltimateSFINAE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TheUltimateSFINAE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TheUltimateSFINAE.dir/build: TheUltimateSFINAE

.PHONY : CMakeFiles/TheUltimateSFINAE.dir/build

CMakeFiles/TheUltimateSFINAE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TheUltimateSFINAE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TheUltimateSFINAE.dir/clean

CMakeFiles/TheUltimateSFINAE.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/TheUltimateSFINAE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TheUltimateSFINAE.dir/depend

