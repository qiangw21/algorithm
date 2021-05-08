cmake_minimum_required(VERSION 3.1.0)

project(algorithm VERSION 1.0.0 LANGUAGES CXX)

#suppress windows warning from strcpy
if (WIN32)
	add_definitions("/D_CRT_SECURE_NO_WARNINGS /wd4996 /wd4463 /wd4505 /wd4819 -DNOMINMAX")
	set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
	#set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS}; -Xcompiler /wd4819)
endif(WIN32)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#find_package(Qt5 COMPONENTS Widgets REQUIRED)
#if(Qt5_FOUND)
#        message(STATUS "Found Qt5.")
#else(Qt5_FOUND)
#        message(FATAL_ERROR "Not Found Qt5.")
#endif()
	
#set default debug and release output directory
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/Release)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/lib/Release)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/lib/Release)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/lib/Release)

file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/Debug)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/lib/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/lib/Debug)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/lib/Debug)

#add submodules
add_subdirectory(sort)
