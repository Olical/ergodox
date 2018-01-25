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

# Utility rule file for kll_regen.

# Include the progress variables for this target.
include CMakeFiles/kll_regen.dir/progress.make

CMakeFiles/kll_regen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/oliver/repos/ergodox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Re-generating KLL Layout"
	../kll/kll --version
	../kll/kll --kiibohd-debug --config /home/oliver/repos/ergodox/Scan/Devices/MatrixARMPeriodic/capabilities.kll /home/oliver/repos/ergodox/Macro/PartialMap/capabilities.kll /home/oliver/repos/ergodox/Output/HID-IO/capabilities.kll /home/oliver/repos/ergodox/Output/USB/capabilities.kll /home/oliver/repos/ergodox/Debug/latency/capabilities.kll --base /home/oliver/repos/ergodox/Scan/Infinity_60/scancode_map.kll --default /home/oliver/repos/ergodox/kll/layouts/ic60/md1Overlay.kll /home/oliver/repos/ergodox/kll/layouts/stdFuncMap.kll --partial /home/oliver/repos/ergodox/kll/layouts/ic60/hhkbpro2.kll --emitter kiibohd --def-template /home/oliver/repos/ergodox/kll/templates/kiibohdDefs.h --map-template /home/oliver/repos/ergodox/kll/templates/kiibohdKeymap.h --pixel-template /home/oliver/repos/ergodox/kll/templates/kiibohdPixelmap.c --def-output kll_defs.h --map-output generatedKeymap.h --pixel-output generatedPixelmap.c

kll_regen: CMakeFiles/kll_regen
kll_regen: CMakeFiles/kll_regen.dir/build.make

.PHONY : kll_regen

# Rule to build all files generated by this target.
CMakeFiles/kll_regen.dir/build: kll_regen

.PHONY : CMakeFiles/kll_regen.dir/build

CMakeFiles/kll_regen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kll_regen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kll_regen.dir/clean

CMakeFiles/kll_regen.dir/depend:
	cd /home/oliver/repos/ergodox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oliver/repos/ergodox /home/oliver/repos/ergodox /home/oliver/repos/ergodox/build /home/oliver/repos/ergodox/build /home/oliver/repos/ergodox/build/CMakeFiles/kll_regen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/kll_regen.dir/depend
