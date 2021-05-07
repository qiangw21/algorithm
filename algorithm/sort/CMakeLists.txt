project(sort)

file(GLOB SOURCES src/*.cpp)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(${PROJECT_NAME} SHARED ${SOURCES})
add_library(alg::sort ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(sort_test main.cpp)
target_link_libraries(sort_test PRIVATE alg::sort)
