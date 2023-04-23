cmake_minimum_required(VERSION 3.0)

project(MyProject)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find Boost library and include directory
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})

# Add source files
set(SOURCES
src/Solution.cpp
)

# Add header files
set(HEADERS
include/Solution.h
)
# Add the main executable
add_executable(main main.cpp ${SOURCES})

#######-------unit testing configuration-------#######

# Add unit test files
set(TEST_SOURCES
    test/Solution_test.cpp
)

# Add the unit test executable
add_executable(Solutions_test ${TEST_SOURCES} ${SOURCES} ${HEADERS})

# Add debug information for unit tests
set_target_properties(Solutions_test PROPERTIES
  COMPILE_FLAGS "-g"
  LINK_FLAGS "-g"
)

# Link against the Boost libraries
target_link_libraries(Solutions_test ${Boost_LIBRARIES})

# Add a test for running the unit tests
enable_testing()

add_test(NAME Solutions_test COMMAND Solutions_test)
