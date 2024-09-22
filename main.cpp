#include    <iostream>
#include    "CMakeTest.h"
 #include    "good_morninglib.hpp"


int main()
{
    std::cout << "Hello CMake would" << std::endl;

    CMakeTest cmaketest;
    cmaketest.print_txt("Use CMakeTest Function");
    good_morning();
}