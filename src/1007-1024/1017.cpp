/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto pi = 3.14159;
    double radius = 0;
    std::cin >> radius;

    const auto diameter = 2 * radius;
    const auto circumference = 2 * pi * radius;
    const auto area = pi * radius * radius;
    
    std::cout << std::fixed << std::setprecision(4)
              << diameter << " "
              << circumference << " "
              << area << std::endl;

    return 0;
}
