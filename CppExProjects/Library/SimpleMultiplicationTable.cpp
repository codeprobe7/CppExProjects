#include "SimpleMultiplicationTable.h"
#include <iostream>


void SimpleMultiplicationTable::Run()
{
    constexpr int TableRange = 9;
    constexpr int NumberOffset = 2;
    for(int x = 0 + NumberOffset; x <= TableRange; x++)
    {
        for(int y = 0 + NumberOffset; y <= TableRange; y++)
        {
            std::cout << x << " * " << y << " = " << Multiple(x, y) << std::endl;
        }
        std::cout << std::endl;
    }
}
