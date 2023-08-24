/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <cmath>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    
    const auto p = (a + b + c) / 2.0;
    const auto area = std::sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << std::fixed << std::setprecision(3) << area << std::endl;
    
    return 0;
}
