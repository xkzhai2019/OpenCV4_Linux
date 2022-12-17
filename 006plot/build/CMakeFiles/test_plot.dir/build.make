# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xkzhai/OpenCV4_Linux/006plot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xkzhai/OpenCV4_Linux/006plot/build

# Include any dependencies generated for this target.
include CMakeFiles/test_plot.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_plot.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_plot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_plot.dir/flags.make

CMakeFiles/test_plot.dir/main.cpp.o: CMakeFiles/test_plot.dir/flags.make
CMakeFiles/test_plot.dir/main.cpp.o: ../main.cpp
CMakeFiles/test_plot.dir/main.cpp.o: CMakeFiles/test_plot.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xkzhai/OpenCV4_Linux/006plot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_plot.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_plot.dir/main.cpp.o -MF CMakeFiles/test_plot.dir/main.cpp.o.d -o CMakeFiles/test_plot.dir/main.cpp.o -c /home/xkzhai/OpenCV4_Linux/006plot/main.cpp

CMakeFiles/test_plot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_plot.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xkzhai/OpenCV4_Linux/006plot/main.cpp > CMakeFiles/test_plot.dir/main.cpp.i

CMakeFiles/test_plot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_plot.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xkzhai/OpenCV4_Linux/006plot/main.cpp -o CMakeFiles/test_plot.dir/main.cpp.s

# Object files for target test_plot
test_plot_OBJECTS = \
"CMakeFiles/test_plot.dir/main.cpp.o"

# External object files for target test_plot
test_plot_EXTERNAL_OBJECTS =

test_plot: CMakeFiles/test_plot.dir/main.cpp.o
test_plot: CMakeFiles/test_plot.dir/build.make
test_plot: /usr/local/opencv4.5.1/lib/libopencv_gapi.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_highgui.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_ml.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_objdetect.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_photo.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_stitching.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_video.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_videoio.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_dnn.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_imgcodecs.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_calib3d.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_features2d.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_flann.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_imgproc.so.4.5.1
test_plot: /usr/local/opencv4.5.1/lib/libopencv_core.so.4.5.1
test_plot: CMakeFiles/test_plot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xkzhai/OpenCV4_Linux/006plot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_plot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_plot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_plot.dir/build: test_plot
.PHONY : CMakeFiles/test_plot.dir/build

CMakeFiles/test_plot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_plot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_plot.dir/clean

CMakeFiles/test_plot.dir/depend:
	cd /home/xkzhai/OpenCV4_Linux/006plot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xkzhai/OpenCV4_Linux/006plot /home/xkzhai/OpenCV4_Linux/006plot /home/xkzhai/OpenCV4_Linux/006plot/build /home/xkzhai/OpenCV4_Linux/006plot/build /home/xkzhai/OpenCV4_Linux/006plot/build/CMakeFiles/test_plot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_plot.dir/depend

