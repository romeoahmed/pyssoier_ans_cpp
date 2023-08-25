/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;
    
    for (auto i = 2; i <= n; i += 2)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}
