# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /home/vaibhav/Downloads/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/vaibhav/Downloads/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vaibhav/CLionProjects/practice_cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/point_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/point_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/point_class.dir/flags.make

CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o: CMakeFiles/point_class.dir/flags.make
CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o: ../c_santa_cruz/point_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o -c /home/vaibhav/CLionProjects/practice_cplusplus/c_santa_cruz/point_class.cpp

CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vaibhav/CLionProjects/practice_cplusplus/c_santa_cruz/point_class.cpp > CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.i

CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vaibhav/CLionProjects/practice_cplusplus/c_santa_cruz/point_class.cpp -o CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.s

CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.requires:

.PHONY : CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.requires

CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.provides: CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.requires
	$(MAKE) -f CMakeFiles/point_class.dir/build.make CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.provides.build
.PHONY : CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.provides

CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.provides.build: CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o


# Object files for target point_class
point_class_OBJECTS = \
"CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o"

# External object files for target point_class
point_class_EXTERNAL_OBJECTS =

point_class: CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o
point_class: CMakeFiles/point_class.dir/build.make
point_class: CMakeFiles/point_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable point_class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/point_class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/point_class.dir/build: point_class

.PHONY : CMakeFiles/point_class.dir/build

CMakeFiles/point_class.dir/requires: CMakeFiles/point_class.dir/c_santa_cruz/point_class.cpp.o.requires

.PHONY : CMakeFiles/point_class.dir/requires

CMakeFiles/point_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/point_class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/point_class.dir/clean

CMakeFiles/point_class.dir/depend:
	cd /home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vaibhav/CLionProjects/practice_cplusplus /home/vaibhav/CLionProjects/practice_cplusplus /home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug /home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug /home/vaibhav/CLionProjects/practice_cplusplus/cmake-build-debug/CMakeFiles/point_class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/point_class.dir/depend

