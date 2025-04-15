
# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(HelloWorld VERSION 1.0 LANGUAGES C CXX)


# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

# add an executable and assign files to it
add_executable(HelloWorld "HelloWorld.cpp")

add_executable(first_class main.cpp Class.cpp)
target_include_directories(first_class PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# define the project name
project(basics_in_Cpp VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)