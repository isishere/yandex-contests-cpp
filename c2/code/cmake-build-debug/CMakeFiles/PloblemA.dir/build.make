# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PloblemA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PloblemA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PloblemA.dir/flags.make

CMakeFiles/PloblemA.dir/a/main.cpp.o: CMakeFiles/PloblemA.dir/flags.make
CMakeFiles/PloblemA.dir/a/main.cpp.o: ../a/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PloblemA.dir/a/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PloblemA.dir/a/main.cpp.o -c /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/a/main.cpp

CMakeFiles/PloblemA.dir/a/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PloblemA.dir/a/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/a/main.cpp > CMakeFiles/PloblemA.dir/a/main.cpp.i

CMakeFiles/PloblemA.dir/a/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PloblemA.dir/a/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/a/main.cpp -o CMakeFiles/PloblemA.dir/a/main.cpp.s

# Object files for target PloblemA
PloblemA_OBJECTS = \
"CMakeFiles/PloblemA.dir/a/main.cpp.o"

# External object files for target PloblemA
PloblemA_EXTERNAL_OBJECTS =

PloblemA: CMakeFiles/PloblemA.dir/a/main.cpp.o
PloblemA: CMakeFiles/PloblemA.dir/build.make
PloblemA: CMakeFiles/PloblemA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PloblemA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PloblemA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PloblemA.dir/build: PloblemA

.PHONY : CMakeFiles/PloblemA.dir/build

CMakeFiles/PloblemA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PloblemA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PloblemA.dir/clean

CMakeFiles/PloblemA.dir/depend:
	cd /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug /Users/ilyasuchkov/Proga/GitHub/yandex-contests-cpp/c2/code/cmake-build-debug/CMakeFiles/PloblemA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PloblemA.dir/depend
