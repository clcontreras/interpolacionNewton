cmake_minimum_required(VERSION 3.25)
project(Interpolacion C)

set(CMAKE_C_STANDARD 17)

add_executable(Interpolacion main.c
        read_data.c read_data.h
        tests.c tests.h
        printing.c printing.h
        div_dif_table.c div_dif_table.h
        Newton.c Newton.h
        interpolGSL.c interpolGSL.h
        allocptr.c allocptr.h)

find_package(GSL REQUIRED)

target_link_libraries(Interpolacion GSL::gsl GSL::gslcblas)

