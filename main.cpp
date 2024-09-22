#include    <iostream>
#include    "CMakeTest.h"

int main()
{
    std::cout << "Hello CMake would" << std::endl;

    CMakeTest cmaketest;
    cmaketest.print_txt("Use CMakeTest Function");
}