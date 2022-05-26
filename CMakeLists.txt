cmake_minimum_required(VERSION 3.22)
project(cpp5bruh)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp5bruh main.cpp CTriangle.h CQuad.h CPolygon.h CPolygon.cpp)
