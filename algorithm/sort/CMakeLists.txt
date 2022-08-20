project(sort)

file(GLOB ${PROJECT_NAME}_SRCS  *.cpp *.h)
list(REMOVE_ITEM ${PROJECT_NAME}_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/sort_test.cpp)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SRCS})
add_library(alg::sort ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(sort_test sort_test.cpp)
target_link_libraries(sort_test PRIVATE alg::sort)