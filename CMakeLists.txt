cmake_minimum_required(VERSION 3.28)
project(hello CXX)

set(CMAKE_CXX_STANDARD 23)
add_library(foo)
target_sources(foo
  PUBLIC
    FILE_SET CXX_MODULES FILES
      foo.cpp
)

add_library(calc)
target_sources(calc
  PUBLIC
    FILE_SET CXX_MODULES FILES
      calc.cpp
)

# Create an executable
add_executable(hello main.cpp)
# Link to the library foo
target_link_libraries(hello foo calc)