/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    
    std::size_t n = 0;
    std::cin >> n;

    std::vector<int> rooms(n, 1);
    for (std::size_t i = 2; i <= n; i++)
    {
        for (std::size_t j = 0; j < n; j++)
        {
            if ((j + 1) % i == 0)
                rooms.at(j) = 1 - rooms.at(j);
        }
    }

    for (std::size_t i = 0; i < n; i++)
    {
        if (rooms.at(i) == 1)
            std::cout << i + 1 << " ";
    }
    std::cout << std::endl;

    return 0;
}
