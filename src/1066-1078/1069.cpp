/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr std::array<double, 5> rates {0.0325, 0.03, 0.03, 0.02, 0.0175};
    auto money = 0.0;
    std::cin >> money;

    for (auto rate : rates)
        money *= (1 + rate);

    std::cout << std::fixed << std::setprecision(2) << money << std::endl;
    return 0;
}
