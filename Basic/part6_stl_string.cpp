﻿#include <iostream>
#include <string>

int main()
{
    std::string s1("Hello");
    s1 + " World";
    std::string s2 = s1 + " World";
    std::cout << s1 + " World" << std::endl;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    return 0;
}