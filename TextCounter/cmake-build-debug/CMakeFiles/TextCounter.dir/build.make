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
CMAKE_COMMAND = /cygdrive/c/Users/Lotus/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Lotus/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Projects/FromLessons/TextCounter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TextCounter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TextCounter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TextCounter.dir/flags.make

CMakeFiles/TextCounter.dir/main.cpp.o: CMakeFiles/TextCounter.dir/flags.make
CMakeFiles/TextCounter.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TextCounter.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextCounter.dir/main.cpp.o -c /cygdrive/c/Projects/FromLessons/TextCounter/main.cpp

CMakeFiles/TextCounter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextCounter.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Projects/FromLessons/TextCounter/main.cpp > CMakeFiles/TextCounter.dir/main.cpp.i

CMakeFiles/TextCounter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextCounter.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Projects/FromLessons/TextCounter/main.cpp -o CMakeFiles/TextCounter.dir/main.cpp.s

# Object files for target TextCounter
TextCounter_OBJECTS = \
"CMakeFiles/TextCounter.dir/main.cpp.o"

# External object files for target TextCounter
TextCounter_EXTERNAL_OBJECTS =

TextCounter.exe: CMakeFiles/TextCounter.dir/main.cpp.o
TextCounter.exe: CMakeFiles/TextCounter.dir/build.make
TextCounter.exe: CMakeFiles/TextCounter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TextCounter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TextCounter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TextCounter.dir/build: TextCounter.exe

.PHONY : CMakeFiles/TextCounter.dir/build

CMakeFiles/TextCounter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TextCounter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TextCounter.dir/clean

CMakeFiles/TextCounter.dir/depend:
	cd /cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Projects/FromLessons/TextCounter /cygdrive/c/Projects/FromLessons/TextCounter /cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug /cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug /cygdrive/c/Projects/FromLessons/TextCounter/cmake-build-debug/CMakeFiles/TextCounter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TextCounter.dir/depend

