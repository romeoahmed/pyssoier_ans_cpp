/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto m = 0, n = 0;
    std::cin >> m;
    
    double sum = 0;
    while (sum < m)
    {
        n += 1;
        sum += 1.0 / n;
    }

    std::cout << n << std::endl;
    return 0;
}
