#include "BubbleSort.h"

#include <cstdio>
#include <iostream>


int BubbleSort::PrintArray(int* Numbers)
{
    for(int i = 0; i < NumberLength; i++)
    {
        std::cout << *Numbers << " ";
        Numbers++;
    }
    std::cout << std::endl;
    return 0;
}

int BubbleSort::SortArrayForward(int* Numbers)
{
    int Temp = 0;
    std::cout << "Sorting Forward." << std::endl;
    for(int i = 0; i < NumberLength; i++)
    {
        for(int j = i; j < NumberLength; j++)
        {
            if(Numbers[i] > Numbers[j])
            {
                Temp = Numbers[i];
                Numbers[i] = Numbers[j];
                Numbers[j] = Temp;
            }
        }
    }
    return 0;
}

int BubbleSort::SortArrayReverse(int* Numbers)
{
    int Temp = 0;
    std::cout << "Sorting Reverse." << std::endl;
    for(int i = 0; i < NumberLength; i++)
    {
        for(int j = i; j < NumberLength; j++)
        {
            if(Numbers[i] < Numbers[j])
            {
                Temp = Numbers[i];
                Numbers[i] = Numbers[j];
                Numbers[j] = Temp;
            }
        }
    }
    return 0;
}


void BubbleSort::Run()
{
    std::cout << "Initial Align." << std::endl;
    PrintArray(NumberToSort);
    SortArrayForward(NumberToSort);
    PrintArray(NumberToSort);
    SortArrayReverse(NumberToSort);
    PrintArray(NumberToSort);
}
