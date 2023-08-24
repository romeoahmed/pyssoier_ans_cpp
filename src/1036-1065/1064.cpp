/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    auto n = 0, sum = 0, tmp = 1;
    std::cin >> n;

    for (auto i = 1; i <= n; i++)
    {
        tmp *= i;
        tmp %= 1000000;

        sum += tmp;
        sum %= 1000000;
    }

    std::cout << sum << std::endl;
    return 0;
}
