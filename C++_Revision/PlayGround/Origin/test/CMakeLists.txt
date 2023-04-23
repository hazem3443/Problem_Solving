# #######-------unit testing configuration-------#######

# Find Boost library and include directory
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})

# Add unit test files
set(TEST_SOURCES
    romanToInt_test.cpp
)

# Add the unit test executable
add_executable(romanToInt_test ${TEST_SOURCES} ../${SOURCES} ../${HEADERS})

# Link against the Boost libraries
target_link_libraries(romanToInt_test ${Boost_LIBRARIES})

target_link_libraries(romanToInt_test
RomanInternalFNs
)

add_test(NAME romanToInt_test COMMAND romanToInt_test)
