# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_SOURCE_DIR = /home/doeringc/Projects/pbrush

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doeringc/Projects/pbrush/build

# Include any dependencies generated for this target.
include CMakeFiles/pbrush.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pbrush.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pbrush.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pbrush.dir/flags.make

CMakeFiles/pbrush.dir/src/canvas.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/canvas.c.o: ../src/canvas.c
CMakeFiles/pbrush.dir/src/canvas.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pbrush.dir/src/canvas.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/canvas.c.o -MF CMakeFiles/pbrush.dir/src/canvas.c.o.d -o CMakeFiles/pbrush.dir/src/canvas.c.o -c /home/doeringc/Projects/pbrush/src/canvas.c

CMakeFiles/pbrush.dir/src/canvas.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/canvas.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/canvas.c > CMakeFiles/pbrush.dir/src/canvas.c.i

CMakeFiles/pbrush.dir/src/canvas.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/canvas.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/canvas.c -o CMakeFiles/pbrush.dir/src/canvas.c.s

CMakeFiles/pbrush.dir/src/input.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/input.c.o: ../src/input.c
CMakeFiles/pbrush.dir/src/input.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/pbrush.dir/src/input.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/input.c.o -MF CMakeFiles/pbrush.dir/src/input.c.o.d -o CMakeFiles/pbrush.dir/src/input.c.o -c /home/doeringc/Projects/pbrush/src/input.c

CMakeFiles/pbrush.dir/src/input.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/input.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/input.c > CMakeFiles/pbrush.dir/src/input.c.i

CMakeFiles/pbrush.dir/src/input.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/input.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/input.c -o CMakeFiles/pbrush.dir/src/input.c.s

CMakeFiles/pbrush.dir/src/layer_paint.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/layer_paint.c.o: ../src/layer_paint.c
CMakeFiles/pbrush.dir/src/layer_paint.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/pbrush.dir/src/layer_paint.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/layer_paint.c.o -MF CMakeFiles/pbrush.dir/src/layer_paint.c.o.d -o CMakeFiles/pbrush.dir/src/layer_paint.c.o -c /home/doeringc/Projects/pbrush/src/layer_paint.c

CMakeFiles/pbrush.dir/src/layer_paint.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/layer_paint.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/layer_paint.c > CMakeFiles/pbrush.dir/src/layer_paint.c.i

CMakeFiles/pbrush.dir/src/layer_paint.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/layer_paint.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/layer_paint.c -o CMakeFiles/pbrush.dir/src/layer_paint.c.s

CMakeFiles/pbrush.dir/src/main.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/main.c.o: ../src/main.c
CMakeFiles/pbrush.dir/src/main.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/pbrush.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/main.c.o -MF CMakeFiles/pbrush.dir/src/main.c.o.d -o CMakeFiles/pbrush.dir/src/main.c.o -c /home/doeringc/Projects/pbrush/src/main.c

CMakeFiles/pbrush.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/main.c > CMakeFiles/pbrush.dir/src/main.c.i

CMakeFiles/pbrush.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/main.c -o CMakeFiles/pbrush.dir/src/main.c.s

CMakeFiles/pbrush.dir/src/mainwindow.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/mainwindow.c.o: ../src/mainwindow.c
CMakeFiles/pbrush.dir/src/mainwindow.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/pbrush.dir/src/mainwindow.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/mainwindow.c.o -MF CMakeFiles/pbrush.dir/src/mainwindow.c.o.d -o CMakeFiles/pbrush.dir/src/mainwindow.c.o -c /home/doeringc/Projects/pbrush/src/mainwindow.c

CMakeFiles/pbrush.dir/src/mainwindow.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/mainwindow.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/mainwindow.c > CMakeFiles/pbrush.dir/src/mainwindow.c.i

CMakeFiles/pbrush.dir/src/mainwindow.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/mainwindow.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/mainwindow.c -o CMakeFiles/pbrush.dir/src/mainwindow.c.s

CMakeFiles/pbrush.dir/src/program.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/program.c.o: ../src/program.c
CMakeFiles/pbrush.dir/src/program.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/pbrush.dir/src/program.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/program.c.o -MF CMakeFiles/pbrush.dir/src/program.c.o.d -o CMakeFiles/pbrush.dir/src/program.c.o -c /home/doeringc/Projects/pbrush/src/program.c

CMakeFiles/pbrush.dir/src/program.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/program.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/program.c > CMakeFiles/pbrush.dir/src/program.c.i

CMakeFiles/pbrush.dir/src/program.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/program.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/program.c -o CMakeFiles/pbrush.dir/src/program.c.s

CMakeFiles/pbrush.dir/src/shader.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/shader.c.o: ../src/shader.c
CMakeFiles/pbrush.dir/src/shader.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/pbrush.dir/src/shader.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/shader.c.o -MF CMakeFiles/pbrush.dir/src/shader.c.o.d -o CMakeFiles/pbrush.dir/src/shader.c.o -c /home/doeringc/Projects/pbrush/src/shader.c

CMakeFiles/pbrush.dir/src/shader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/shader.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/shader.c > CMakeFiles/pbrush.dir/src/shader.c.i

CMakeFiles/pbrush.dir/src/shader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/shader.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/shader.c -o CMakeFiles/pbrush.dir/src/shader.c.s

CMakeFiles/pbrush.dir/src/shader_util.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/shader_util.c.o: ../src/shader_util.c
CMakeFiles/pbrush.dir/src/shader_util.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/pbrush.dir/src/shader_util.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/shader_util.c.o -MF CMakeFiles/pbrush.dir/src/shader_util.c.o.d -o CMakeFiles/pbrush.dir/src/shader_util.c.o -c /home/doeringc/Projects/pbrush/src/shader_util.c

CMakeFiles/pbrush.dir/src/shader_util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/shader_util.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/shader_util.c > CMakeFiles/pbrush.dir/src/shader_util.c.i

CMakeFiles/pbrush.dir/src/shader_util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/shader_util.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/shader_util.c -o CMakeFiles/pbrush.dir/src/shader_util.c.s

CMakeFiles/pbrush.dir/src/vert_arr.c.o: CMakeFiles/pbrush.dir/flags.make
CMakeFiles/pbrush.dir/src/vert_arr.c.o: ../src/vert_arr.c
CMakeFiles/pbrush.dir/src/vert_arr.c.o: CMakeFiles/pbrush.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/pbrush.dir/src/vert_arr.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pbrush.dir/src/vert_arr.c.o -MF CMakeFiles/pbrush.dir/src/vert_arr.c.o.d -o CMakeFiles/pbrush.dir/src/vert_arr.c.o -c /home/doeringc/Projects/pbrush/src/vert_arr.c

CMakeFiles/pbrush.dir/src/vert_arr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pbrush.dir/src/vert_arr.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/doeringc/Projects/pbrush/src/vert_arr.c > CMakeFiles/pbrush.dir/src/vert_arr.c.i

CMakeFiles/pbrush.dir/src/vert_arr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pbrush.dir/src/vert_arr.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/doeringc/Projects/pbrush/src/vert_arr.c -o CMakeFiles/pbrush.dir/src/vert_arr.c.s

# Object files for target pbrush
pbrush_OBJECTS = \
"CMakeFiles/pbrush.dir/src/canvas.c.o" \
"CMakeFiles/pbrush.dir/src/input.c.o" \
"CMakeFiles/pbrush.dir/src/layer_paint.c.o" \
"CMakeFiles/pbrush.dir/src/main.c.o" \
"CMakeFiles/pbrush.dir/src/mainwindow.c.o" \
"CMakeFiles/pbrush.dir/src/program.c.o" \
"CMakeFiles/pbrush.dir/src/shader.c.o" \
"CMakeFiles/pbrush.dir/src/shader_util.c.o" \
"CMakeFiles/pbrush.dir/src/vert_arr.c.o"

# External object files for target pbrush
pbrush_EXTERNAL_OBJECTS =

pbrush: CMakeFiles/pbrush.dir/src/canvas.c.o
pbrush: CMakeFiles/pbrush.dir/src/input.c.o
pbrush: CMakeFiles/pbrush.dir/src/layer_paint.c.o
pbrush: CMakeFiles/pbrush.dir/src/main.c.o
pbrush: CMakeFiles/pbrush.dir/src/mainwindow.c.o
pbrush: CMakeFiles/pbrush.dir/src/program.c.o
pbrush: CMakeFiles/pbrush.dir/src/shader.c.o
pbrush: CMakeFiles/pbrush.dir/src/shader_util.c.o
pbrush: CMakeFiles/pbrush.dir/src/vert_arr.c.o
pbrush: CMakeFiles/pbrush.dir/build.make
pbrush: /usr/lib/libSM.so
pbrush: /usr/lib/libICE.so
pbrush: /usr/lib/libX11.so
pbrush: /usr/lib/libXext.so
pbrush: /usr/lib/libGLX.so
pbrush: /usr/lib/libOpenGL.so
pbrush: CMakeFiles/pbrush.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doeringc/Projects/pbrush/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable pbrush"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pbrush.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pbrush.dir/build: pbrush
.PHONY : CMakeFiles/pbrush.dir/build

CMakeFiles/pbrush.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pbrush.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pbrush.dir/clean

CMakeFiles/pbrush.dir/depend:
	cd /home/doeringc/Projects/pbrush/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doeringc/Projects/pbrush /home/doeringc/Projects/pbrush /home/doeringc/Projects/pbrush/build /home/doeringc/Projects/pbrush/build /home/doeringc/Projects/pbrush/build/CMakeFiles/pbrush.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pbrush.dir/depend
