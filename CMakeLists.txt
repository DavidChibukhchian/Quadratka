cmake_minimum_required(VERSION 3.23)
project(Equations)

set(CMAKE_CXX_STANDARD 14)

add_executable(Equations
               main.cpp Menu.cpp displayMenu.cpp
               equations.cpp output_roots.cpp are_equal.cpp
               test.cpp test_all.cpp test_from_file.cpp
               is_file_empty.cpp
               random_double.cpp
               solve_qEquations.cpp solve_qEquations_from_file.cpp solve_random_qEquations.cpp solve_from_file.cpp solve_random_equation.cpp)

