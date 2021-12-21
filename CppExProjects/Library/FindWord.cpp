#include "FindWord.h"

#include <iostream>

void FindWord::Run()
{
    while(true)
    {
        std::cout << "Input a Word : ";
        std::cin >> InputWord;
        const size_t Index = Sentence.find(InputWord);
        if(Index != std::string::npos)
        {
            std::cout << "Index : " << Index;
            break;
        }
        else
        {
            std::cout << "Was Not Found." << std::endl;
        }
    }
}
