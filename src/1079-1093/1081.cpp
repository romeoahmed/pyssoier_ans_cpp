/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto radius = 0.0;
    std::cin >> radius;

    std::cout << std::fixed << std::setprecision(2) << std::pow(radius, 2) * M_PI << std::endl;
    return 0;
}
