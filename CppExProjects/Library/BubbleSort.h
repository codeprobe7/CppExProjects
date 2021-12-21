#pragma once

class BubbleSort
{
    int NumberToSort[10] = {54, 45, 47, 28, 121, 143, 144, 666, 957};
    int NumberLength = sizeof(NumberToSort) / sizeof(int);
    int PrintArray(int* Numbers);
    int SortArrayForward(int* Numbers);
    int SortArrayReverse(int* Numbers);

public:
    void Run();
};
