/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

constexpr inline auto wallis(const int n)
{
    auto halfPi = 1.0;
    for (auto i = 2; i <= n; i += 2)
    {
        halfPi *= i * i / (i * i - 1.0);
    }
    return 2 * halfPi;
}

int main(int argc, char const *argv[])
{
    std::cout << std::fixed << std::setprecision(4) << wallis(30000) << std::endl;
    return 0;
}
