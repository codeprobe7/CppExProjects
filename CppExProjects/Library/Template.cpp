#include "Template.h"

#include <string>

void Template::Run()
{
    int a = 1, b = 2;
    int i = max(a,b);

    std::string s = "Hello", w = "World";
    std::string result = max(s,w);
}
