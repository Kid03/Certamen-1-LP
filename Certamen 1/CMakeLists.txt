cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled Graph.cpp Graph.h Place.cpp Place.h Trans.cpp Trans.h Arc.cpp Arc.h ErrorGraphException.cpp ErrorGraphException.h lex.yy.c bison.tab.c)
