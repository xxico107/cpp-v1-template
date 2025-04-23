cmake_minimum_required(VERSION 3.10)

# Set the project name (the script will often rename this later)
project(MyProject VERSION 1.0)

# Add the executable target, source file is main.cpp
add_executable(MyProject main.cpp)

# C++ standard (optional, but good practice)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable warnings (optional, but good practice)
if(MSVC)
  # Options for Microsoft Visual C++ compiler
  add_compile_options(/W4)
else()
  # Options for GCC/Clang compilers
  add_compile_options(-Wall -Wextra -pedantic)
endif()
