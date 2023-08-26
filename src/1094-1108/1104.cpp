/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <string>
#include <string_view>

constexpr std::array<std::string_view, 32> cReservedWords = {
    "auto", "break", "case", "char",
    "const", "continue", "default", "do",
    "double", "else", "enum", "extern",
    "float", "for", "goto", "if",
    "int", "long", "register", "return",
    "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union",
    "unsigned", "void", "volatile", "while"
};

auto isLegitID(const std::string &cID)
{
    for (auto word : cReservedWords)
        if (cID == word)
            return false;
    
    if (cID.at(0) >= '0' && cID.at(0) <= '9')
        return false;
    
    for (auto c : cID)
    {
        if (c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            continue;
        return false;
    }
    
    return true;
}

int main(int argc, char const *argv[])
{
    std::string cID;
    std::getline(std::cin, cID);

    if (isLegitID(cID))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}
