# Declare the minimum required cmake version; somewhat arbitrary unless you're using version-specific features.
# We use 3.1 for CMAKE_CXX_STANDARD
cmake_minimum_required(VERSION 3.1)

# I know could come up with a better name
set(PRJ_NAME BattleSim)
project(${PRJ_NAME})

# Set the version of C++ being used. Here, C++11.
set (CMAKE_CXX_STANDARD 11)

# CMAKE_SOURCE_DIR refers to the directory with the top-level CMakeLists.txt
# Here, we're including include/ and lib/SFML/include
include_directories("${CMAKE_SOURCE_DIR}/include")
include_directories("${CMAKE_SOURCE_DIR}/lib/SFML/include")

# Sets the directory where the linker will search for libraries. Necessary to find the .a (or .dylib, etc) files for SFML.
link_directories("${CMAKE_SOURCE_DIR}/lib/SFML/lib")

file(GLOB SOURCES "src/*.cpp")
# Create the executable. Make sure to list every source file (I generally add the headers as well)
add_executable(${PRJ_NAME}
    ${SOURCES}
)

# This links the executable on Windows and Mac - it shouldn't be too difficult to add Linux as well.
# If you've branched out into different parts of SFML, you might need different libraries; they can be added here.
if (APPLE)
  target_link_libraries(BattleSim libsfml-graphics.2.4.dylib libsfml-window.2.4.dylib libsfml-system.2.4.dylib)
endif (APPLE)
if (WIN32)
  target_link_libraries(BattleSim libsfml-graphics-d.a libsfml-window-d.a libsfml-system-d.a)
endif (WIN32)
if (UNIX AND NOT APPLE)
  target_link_libraries(${PRJ_NAME} libsfml-graphics.so libsfml-window.so libsfml-system.so)
endif (UNIX AND NOT APPLE)