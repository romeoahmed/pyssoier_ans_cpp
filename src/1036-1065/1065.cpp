/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;

    std::cout << n << "=";
    auto flag = true;
    for (auto i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            if (flag)
                flag = false;
            else
                std::cout << "*";
            std::cout << i;
            n /= i;
        }
    }
    std::cout << std::endl;
    
    return 0;
}
