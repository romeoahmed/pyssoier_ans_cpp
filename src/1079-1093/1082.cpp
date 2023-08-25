/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <cmath>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto l1 = 0.0, l2 = 0.0, l3 = 0.0, l4 = 0.0, l5 = 0.0;
    std::cin >> l1 >> l2 >> l3 >> l4 >> l5;

    const auto p1 = (l1 + l2 + l5) / 2.0;
    const auto p2 = (l3 + l4 + l5) / 2.0;
    const auto area = std::sqrt(p1 * (p1 - l1) * (p1 - l2) * (p1 - l5)) + std::sqrt(p2 * (p2 - l3) * (p2 - l4) * (p2 - l5));

    std::cout << std::fixed << std::setprecision(2) << area << std::endl;
    return 0;
}
