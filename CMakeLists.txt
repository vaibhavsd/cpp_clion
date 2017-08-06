cmake_minimum_required(VERSION 3.7)
project(practice_cplusplus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(practice_cplusplus ${SOURCE_FILES})
add_executable(pointers pointers.cpp)

add_executable(std_list stl/std_list.cpp)
add_executable(special_for stl/special_for.cpp)
add_executable(iota_incrementer stl/iota_incrementer.cpp)
add_executable(special_copy_vector stl/special_copy_vector.cpp)
add_executable(fill_n stl/fill_n.cpp)
add_executable(input_output stl/input_output.cpp)
add_executable(fun_while_loop stl/fun_while_loop.cpp)

add_executable(template c_santa_cruz/template.cpp)
add_executable(enum c_santa_cruz/enum.cpp)
add_executable(static_cast c_santa_cruz/static_cast.cpp)
add_executable(point_class c_santa_cruz/point_class.cpp)
add_executable(constructor c_santa_cruz/constructor.cpp)