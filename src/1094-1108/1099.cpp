/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string s;
    std::getline(std::cin, s);

    auto count = 0;
    for (auto c : s)
        if (c >= '0' && c <= '9')
            ++count;
    
    std::cout << count << std::endl;
    return 0;
}
