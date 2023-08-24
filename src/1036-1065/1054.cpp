/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto m = 0, n = 0;
    std::cin >> m >> n;
    
    for (int i = std::min(m, n); i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            std::cout << i << std::endl;
            break;
        }
    }
    
    return 0;
}
