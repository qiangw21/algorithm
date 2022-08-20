cmake_minimum_required(VERSION 3.1.0)

project(algorithm VERSION 1.0.0 LANGUAGES CXX)

#suppress windows warning from strcpy
if (WIN32)
	add_definitions("/D_CRT_SECURE_NO_WARNINGS /wd4996 /wd4463 /wd4505 /wd4819 -DNOMINMAX")
	set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif(WIN32)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_DEBUG_POSTFIX "d" CACHE STRING "Add a postfix to the debug libraries")
mark_as_advanced(CMAKE_DEBUG_POSTFIX)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

#find openmp
find_package( OpenMP REQUIRED)
if(OPENMP_FOUND)
    message(STATUS "OPENMP FOUND.")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()

#set default debug and release output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

#add submodules
add_subdirectory(sort)
