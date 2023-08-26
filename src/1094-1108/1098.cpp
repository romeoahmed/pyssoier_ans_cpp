/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <string>

auto isSubStr(const std::string &subStr, const std::string &originStr)
{
    if (subStr.size() > originStr.size())
        return false;
    else if (subStr.size() == originStr.size())
        return subStr == originStr;
    else if (originStr.find(subStr) != originStr.npos)
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    
    if (isSubStr(s1, s2))
        std::cout << s1 << " is substring of " << s2 << std::endl;
    else if (isSubStr(s2, s1))
        std::cout << s2 << " is substring of " << s1 << std::endl;
    else
        std::cout << "No substring" << std::endl;

    return 0;
}
