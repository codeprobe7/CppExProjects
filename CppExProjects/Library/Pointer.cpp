#include "Pointer.h"

#include <iostream>
#include <ostream>


void Pointer::Run()
{
     int i[] = {1,2,3,4,5,6,7,8};
     int *pi = i;

   
    int pvalue = *pi++;
    int pvalue2 = *++pi;
    Pointer::Add(*pi);
    int pvalue3 = *pi;
    
    std::cout << pvalue << std::endl;
    std::cout << pvalue2 << std::endl;
    std::cout << pvalue3 << std::endl;

}

void Pointer::Add(int& ptr)
{
    ptr = 5;
}
