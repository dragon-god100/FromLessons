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
CMAKE_SOURCE_DIR = "/cygdrive/c/Projects/FromLessons/bank system manger"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BankingSystem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BankingSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BankingSystem.dir/flags.make

CMakeFiles/BankingSystem.dir/main.cpp.o: CMakeFiles/BankingSystem.dir/flags.make
CMakeFiles/BankingSystem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BankingSystem.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BankingSystem.dir/main.cpp.o -c "/cygdrive/c/Projects/FromLessons/bank system manger/main.cpp"

CMakeFiles/BankingSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BankingSystem.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Projects/FromLessons/bank system manger/main.cpp" > CMakeFiles/BankingSystem.dir/main.cpp.i

CMakeFiles/BankingSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BankingSystem.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Projects/FromLessons/bank system manger/main.cpp" -o CMakeFiles/BankingSystem.dir/main.cpp.s

CMakeFiles/BankingSystem.dir/Client.cpp.o: CMakeFiles/BankingSystem.dir/flags.make
CMakeFiles/BankingSystem.dir/Client.cpp.o: ../Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BankingSystem.dir/Client.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BankingSystem.dir/Client.cpp.o -c "/cygdrive/c/Projects/FromLessons/bank system manger/Client.cpp"

CMakeFiles/BankingSystem.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BankingSystem.dir/Client.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Projects/FromLessons/bank system manger/Client.cpp" > CMakeFiles/BankingSystem.dir/Client.cpp.i

CMakeFiles/BankingSystem.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BankingSystem.dir/Client.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Projects/FromLessons/bank system manger/Client.cpp" -o CMakeFiles/BankingSystem.dir/Client.cpp.s

# Object files for target BankingSystem
BankingSystem_OBJECTS = \
"CMakeFiles/BankingSystem.dir/main.cpp.o" \
"CMakeFiles/BankingSystem.dir/Client.cpp.o"

# External object files for target BankingSystem
BankingSystem_EXTERNAL_OBJECTS =

BankingSystem.exe: CMakeFiles/BankingSystem.dir/main.cpp.o
BankingSystem.exe: CMakeFiles/BankingSystem.dir/Client.cpp.o
BankingSystem.exe: CMakeFiles/BankingSystem.dir/build.make
BankingSystem.exe: CMakeFiles/BankingSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable BankingSystem.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BankingSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BankingSystem.dir/build: BankingSystem.exe

.PHONY : CMakeFiles/BankingSystem.dir/build

CMakeFiles/BankingSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BankingSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BankingSystem.dir/clean

CMakeFiles/BankingSystem.dir/depend:
	cd "/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Projects/FromLessons/bank system manger" "/cygdrive/c/Projects/FromLessons/bank system manger" "/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug" "/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug" "/cygdrive/c/Projects/FromLessons/bank system manger/cmake-build-debug/CMakeFiles/BankingSystem.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BankingSystem.dir/depend

