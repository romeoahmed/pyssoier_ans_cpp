/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string s, relativeStr;
    std::cin >> s;

    for (std::size_t i = 0; i < s.size(); ++i)
    {
        if (i == s.size() - 1)
            relativeStr.push_back(s.at(i) + s.at(0));
        else
            relativeStr.push_back(s.at(i) + s.at(i + 1));
    }

    std::cout << relativeStr << std::endl;
    return 0;
}
