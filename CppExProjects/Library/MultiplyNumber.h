#pragma once
#include <cstdio>
#include <sys/stat.h>

class MultiplyNumber
{
public:
     void Run()
    {
        constexpr int i = 2;
        constexpr int count = 30;
        Multiply(i, count);
    }

    void Multiply (int ToMultiply, int MultiplyCount)
    {
        unsigned long sum = ToMultiply;
        for (int i = 0; i < MultiplyCount; i++)
        {
            sum = sum * ToMultiply;
        }
        printf("%d", sum);
    }
};
