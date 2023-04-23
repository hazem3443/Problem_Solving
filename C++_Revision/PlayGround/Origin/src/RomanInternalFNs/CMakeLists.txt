add_library(RomanInternalFNs
STATIC
add.cpp
Print.cpp
)

include_directories(inc)

# Add source files
target_sources(RomanInternalFNs PRIVATE 
inc/globals.cpp
inc/Add/globals.cpp
)

target_link_libraries(main
RomanInternalFNs
)

target_include_directories(RomanInternalFNs PUBLIC inc)