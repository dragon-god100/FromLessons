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
CMAKE_SOURCE_DIR = /cygdrive/c/Projects/FromLessons/SuperArr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SuperArr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SuperArr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SuperArr.dir/flags.make

CMakeFiles/SuperArr.dir/main.cpp.o: CMakeFiles/SuperArr.dir/flags.make
CMakeFiles/SuperArr.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SuperArr.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SuperArr.dir/main.cpp.o -c /cygdrive/c/Projects/FromLessons/SuperArr/main.cpp

CMakeFiles/SuperArr.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SuperArr.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Projects/FromLessons/SuperArr/main.cpp > CMakeFiles/SuperArr.dir/main.cpp.i

CMakeFiles/SuperArr.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SuperArr.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Projects/FromLessons/SuperArr/main.cpp -o CMakeFiles/SuperArr.dir/main.cpp.s

CMakeFiles/SuperArr.dir/SuperArray.cpp.o: CMakeFiles/SuperArr.dir/flags.make
CMakeFiles/SuperArr.dir/SuperArray.cpp.o: ../SuperArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SuperArr.dir/SuperArray.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SuperArr.dir/SuperArray.cpp.o -c /cygdrive/c/Projects/FromLessons/SuperArr/SuperArray.cpp

CMakeFiles/SuperArr.dir/SuperArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SuperArr.dir/SuperArray.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Projects/FromLessons/SuperArr/SuperArray.cpp > CMakeFiles/SuperArr.dir/SuperArray.cpp.i

CMakeFiles/SuperArr.dir/SuperArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SuperArr.dir/SuperArray.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Projects/FromLessons/SuperArr/SuperArray.cpp -o CMakeFiles/SuperArr.dir/SuperArray.cpp.s

# Object files for target SuperArr
SuperArr_OBJECTS = \
"CMakeFiles/SuperArr.dir/main.cpp.o" \
"CMakeFiles/SuperArr.dir/SuperArray.cpp.o"

# External object files for target SuperArr
SuperArr_EXTERNAL_OBJECTS =

SuperArr.exe: CMakeFiles/SuperArr.dir/main.cpp.o
SuperArr.exe: CMakeFiles/SuperArr.dir/SuperArray.cpp.o
SuperArr.exe: CMakeFiles/SuperArr.dir/build.make
SuperArr.exe: CMakeFiles/SuperArr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SuperArr.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SuperArr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SuperArr.dir/build: SuperArr.exe

.PHONY : CMakeFiles/SuperArr.dir/build

CMakeFiles/SuperArr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SuperArr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SuperArr.dir/clean

CMakeFiles/SuperArr.dir/depend:
	cd /cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Projects/FromLessons/SuperArr /cygdrive/c/Projects/FromLessons/SuperArr /cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug /cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug /cygdrive/c/Projects/FromLessons/SuperArr/cmake-build-debug/CMakeFiles/SuperArr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SuperArr.dir/depend
