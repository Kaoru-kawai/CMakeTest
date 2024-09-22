cmake_minimum_required(VERSION 3.15)

project(CMakeTest VERSION 1.0
                  DESCRIPTION "Very nice project"
                  LANGUAGES CXX)


add_executable(main 
main.cpp
CMakeTest.cpp CmakeTest.h)
