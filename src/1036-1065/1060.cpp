/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <cmath>
#include <iostream>

auto isSquareNum(int n)
{
    auto root = std::sqrt(n);
    return root == std::floor(root);
}

int main(int argc, char const *argv[])
{
    for (auto i = 1; i <= 9; i++)
    {
        for (auto j = 0; j <= 9; j++)
        {
            auto n = i * 1100 + j * 11;
            if (isSquareNum(n))
                std::cout << n << std::endl;
        }
    }
    
    return 0;
}
