# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\build

# Include any dependencies generated for this target.
include CMakeFiles/func.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/func.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/func.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/func.dir/flags.make

CMakeFiles/func.dir/src/function.cpp.obj: CMakeFiles/func.dir/flags.make
CMakeFiles/func.dir/src/function.cpp.obj: CMakeFiles/func.dir/includes_CXX.rsp
CMakeFiles/func.dir/src/function.cpp.obj: ../src/function.cpp
CMakeFiles/func.dir/src/function.cpp.obj: CMakeFiles/func.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/func.dir/src/function.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/func.dir/src/function.cpp.obj -MF CMakeFiles\func.dir\src\function.cpp.obj.d -o CMakeFiles\func.dir\src\function.cpp.obj -c C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\src\function.cpp

CMakeFiles/func.dir/src/function.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func.dir/src/function.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\src\function.cpp > CMakeFiles\func.dir\src\function.cpp.i

CMakeFiles/func.dir/src/function.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func.dir/src/function.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\src\function.cpp -o CMakeFiles\func.dir\src\function.cpp.s

# Object files for target func
func_OBJECTS = \
"CMakeFiles/func.dir/src/function.cpp.obj"

# External object files for target func
func_EXTERNAL_OBJECTS =

libfunc.a: CMakeFiles/func.dir/src/function.cpp.obj
libfunc.a: CMakeFiles/func.dir/build.make
libfunc.a: CMakeFiles/func.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfunc.a"
	$(CMAKE_COMMAND) -P CMakeFiles\func.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\func.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/func.dir/build: libfunc.a
.PHONY : CMakeFiles/func.dir/build

CMakeFiles/func.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\func.dir\cmake_clean.cmake
.PHONY : CMakeFiles/func.dir/clean

CMakeFiles/func.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1 C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1 C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\build C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\build C:\Users\Augusto\Desktop\lista1\lista-1-AugustoViniciusCarvalho\ponto_em_retangulo_1\build\CMakeFiles\func.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/func.dir/depend
