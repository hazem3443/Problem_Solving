cmake_minimum_required(VERSION 3.26)
project(MyProject LANGUAGES CXX)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add source files+-
set(SOURCES
src/romanToInt.cpp
)

# Add header files
set(HEADERS
inc/romanToInt.h
)

include_directories(
inc
src/RomanInternalFNs/inc
)

# Add the main executable
add_executable(main main.cpp ${SOURCES} ${HEADERS})

# Add a test for running the unit tests
enable_testing()

add_subdirectory(src)
add_subdirectory(test)
