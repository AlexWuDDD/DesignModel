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
include CMakeFiles/RAII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RAII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RAII.dir/flags.make

CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.o: CMakeFiles/RAII.dir/flags.make
CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.o: ../ScopedGuard/RAII.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.o -c /Users/wualex/Documents/DesignPattern/ScopedGuard/RAII.cpp

CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/ScopedGuard/RAII.cpp > CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.i

CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/ScopedGuard/RAII.cpp -o CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.s

CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.o: CMakeFiles/RAII.dir/flags.make
CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.o: ../ScopedGuard/GenericScopeGuard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.o -c /Users/wualex/Documents/DesignPattern/ScopedGuard/GenericScopeGuard.cpp

CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wualex/Documents/DesignPattern/ScopedGuard/GenericScopeGuard.cpp > CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.i

CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wualex/Documents/DesignPattern/ScopedGuard/GenericScopeGuard.cpp -o CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.s

# Object files for target RAII
RAII_OBJECTS = \
"CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.o" \
"CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.o"

# External object files for target RAII
RAII_EXTERNAL_OBJECTS =

RAII: CMakeFiles/RAII.dir/ScopedGuard/RAII.cpp.o
RAII: CMakeFiles/RAII.dir/ScopedGuard/GenericScopeGuard.cpp.o
RAII: CMakeFiles/RAII.dir/build.make
RAII: CMakeFiles/RAII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable RAII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RAII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RAII.dir/build: RAII

.PHONY : CMakeFiles/RAII.dir/build

CMakeFiles/RAII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RAII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RAII.dir/clean

CMakeFiles/RAII.dir/depend:
	cd /Users/wualex/Documents/DesignPattern/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug /Users/wualex/Documents/DesignPattern/cmake-build-debug/CMakeFiles/RAII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RAII.dir/depend

