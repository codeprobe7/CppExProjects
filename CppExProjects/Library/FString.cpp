#include "FString.h"

#include <iostream>

void FString::Print()
{
    for(int i = 0; i < StringLength; i++)
    {
        std::cout << Contents[i];
    }
}
