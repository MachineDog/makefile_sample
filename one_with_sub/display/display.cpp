#include <iostream>

#include "display.h"
#include "myrandom.h"

display::display()
{
    int num = RandomNum::GenInt();
    std::cout << "====================================" << std::endl;
    std::cout << num << std::endl;
    std::cout << "====================================" << std::endl;
}

display::~display()
{
}