#pragma once
#include <cstring>
#include <iostream>
#include <ostream>
#include <string>

class FString
{
private:
    char* Contents = 0;
    int StringLength = 0;

public:
    
    FString(): Contents(nullptr), StringLength(0)
    {
    };

    FString(const char C)
    {
        Contents = new char[1];
        Contents[0] = C;
        StringLength = 1;
    }

    FString(const char* Str)
    {
        StringLength = static_cast<int>(strlen(Str) -1);
        Contents = new char[StringLength];
        for(int i = 0; i < StringLength; i++)
        {
            Contents[i] = Str[i];
        }
    }

    FString(const FString& Str)
    {
        StringLength = Str.StringLength;
        Contents = new char[StringLength];
        for(int i = 0; i < StringLength; i++)
        {
            Contents[i] = Str.Contents[i];
        }
    }

    FString operator+(const FString& Str)
    {
        StringLength += Str.StringLength;
        std::string Temp = Contents;
        Temp.append(Str.Contents);

        delete[] Contents;
        Contents = new char[StringLength];
        
        return *this;
    }

    FString operator=(const FString& Str)
    {
        StringLength = Str.StringLength;
        StringLength = Str.StringLength;
        delete[] Contents;
        Contents = new char[StringLength];
        for(int i = 0; i < StringLength; i++)
        {
           Contents[i] = Str.Contents[i];
        }
        return *this;
    }
    
    
    ~FString()
    {
        delete[] Contents;
    }

    void Print();

    inline int GetLength() const
    {
        return StringLength;
    }
};
