#pragma once
#include <iostream>
#include <string>

class Stream
{
public:
    std::string s;

    void Run()
    {
        std::cin >> s ;
        std::cout << s << std::endl;
    }
    
};
