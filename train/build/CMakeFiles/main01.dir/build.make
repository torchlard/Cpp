# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lkit/Programming/Cpp/train

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lkit/Programming/Cpp/train/build

# Include any dependencies generated for this target.
include CMakeFiles/main01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main01.dir/flags.make

CMakeFiles/main01.dir/main01.cpp.o: CMakeFiles/main01.dir/flags.make
CMakeFiles/main01.dir/main01.cpp.o: ../main01.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lkit/Programming/Cpp/train/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main01.dir/main01.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main01.dir/main01.cpp.o -c /home/lkit/Programming/Cpp/train/main01.cpp

CMakeFiles/main01.dir/main01.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main01.dir/main01.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lkit/Programming/Cpp/train/main01.cpp > CMakeFiles/main01.dir/main01.cpp.i

CMakeFiles/main01.dir/main01.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main01.dir/main01.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lkit/Programming/Cpp/train/main01.cpp -o CMakeFiles/main01.dir/main01.cpp.s

CMakeFiles/main01.dir/main01.cpp.o.requires:

.PHONY : CMakeFiles/main01.dir/main01.cpp.o.requires

CMakeFiles/main01.dir/main01.cpp.o.provides: CMakeFiles/main01.dir/main01.cpp.o.requires
	$(MAKE) -f CMakeFiles/main01.dir/build.make CMakeFiles/main01.dir/main01.cpp.o.provides.build
.PHONY : CMakeFiles/main01.dir/main01.cpp.o.provides

CMakeFiles/main01.dir/main01.cpp.o.provides.build: CMakeFiles/main01.dir/main01.cpp.o


# Object files for target main01
main01_OBJECTS = \
"CMakeFiles/main01.dir/main01.cpp.o"

# External object files for target main01
main01_EXTERNAL_OBJECTS =

main01: CMakeFiles/main01.dir/main01.cpp.o
main01: CMakeFiles/main01.dir/build.make
main01: CMakeFiles/main01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lkit/Programming/Cpp/train/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main01.dir/build: main01

.PHONY : CMakeFiles/main01.dir/build

CMakeFiles/main01.dir/requires: CMakeFiles/main01.dir/main01.cpp.o.requires

.PHONY : CMakeFiles/main01.dir/requires

CMakeFiles/main01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main01.dir/clean

CMakeFiles/main01.dir/depend:
	cd /home/lkit/Programming/Cpp/train/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lkit/Programming/Cpp/train /home/lkit/Programming/Cpp/train /home/lkit/Programming/Cpp/train/build /home/lkit/Programming/Cpp/train/build /home/lkit/Programming/Cpp/train/build/CMakeFiles/main01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main01.dir/depend

