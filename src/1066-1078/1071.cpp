/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>

int main(int argc, char const *argv[])
{
    constexpr std::array<int, 10> matches {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    
    for (int i = 0; i <= 111; i++)
    {
        if (i < 10 && matches.at(i) == 6)
            std::cout << i << std::endl;
        else if (i >= 10 && i < 100 && matches.at(i / 10) + matches.at(i % 10) == 6)
            std::cout << i << std::endl;
        else if (i >= 100 && matches.at(i / 100) + matches.at((i / 10) % 10) + matches.at(i % 10) == 6)
            std::cout << i << std::endl;
    }

    return 0;
}
