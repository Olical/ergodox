# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/oliver/repos/ergodox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oliver/repos/ergodox/build

# Utility rule file for DFUMessage.

# Include the progress variables for this target.
include CMakeFiles/DFUMessage.dir/progress.make

CMakeFiles/DFUMessage: kiibohd.elf
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/oliver/repos/ergodox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Message for DFU targets"
	../Lib/CMake/dfuMessage kiibohd

DFUMessage: CMakeFiles/DFUMessage
DFUMessage: CMakeFiles/DFUMessage.dir/build.make

.PHONY : DFUMessage

# Rule to build all files generated by this target.
CMakeFiles/DFUMessage.dir/build: DFUMessage

.PHONY : CMakeFiles/DFUMessage.dir/build

CMakeFiles/DFUMessage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DFUMessage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DFUMessage.dir/clean

CMakeFiles/DFUMessage.dir/depend:
	cd /home/oliver/repos/ergodox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oliver/repos/ergodox /home/oliver/repos/ergodox /home/oliver/repos/ergodox/build /home/oliver/repos/ergodox/build /home/oliver/repos/ergodox/build/CMakeFiles/DFUMessage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DFUMessage.dir/depend

