cmake_minimum_required(VERSION 3.1.0)

project(algorithm VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#find_package(Qt5 COMPONENTS Widgets REQUIRED)
#if(Qt5_FOUND)
#        message(STATUS "Found Qt5.")
#else(Qt5_FOUND)
#        message(FATAL_ERROR "Not Found Qt5.")
#endif()
	
add_subdirectory(sort)