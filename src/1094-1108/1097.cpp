/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <algorithm>
#include <iostream>
#include <string>

inline auto trim(std::string &s)
{
    if (!s.empty())
    {
        std::size_t index = 0;
        while ((index = s.find(' ', index)) != s.npos)
        {
            s.erase(index, 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);

    trim(s1);
    trim(s2);
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 == s2)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
