/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <algorithm>
#include <iostream>
#include <iomanip>

inline auto getM(const double a, const double b, const double c)
{
    return std::max({a, b, c}) / (std::max({a + b, b, c}) * std::max({a, b, b + c}));
}

int main(int argc, char const *argv[])
{
    auto a = 0.0, b = 0.0, c = 0.0;
    std::cin >> a >> b >> c;

    std::cout << std::fixed << std::setprecision(3) << getM(a, b, c) << std::endl;
    return 0;
}
