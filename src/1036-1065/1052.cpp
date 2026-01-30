/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <cmath>
#include <iomanip>
#include <iostream>

constexpr auto calcPi(int const n) {
    auto pi = 0.0;
    for (auto i = 1; i <= n; i++)
        pi += 1 / std::pow(i, 2);
    return std::sqrt(pi * 6);
}

int main(int argc, char const* argv[]) {
    std::cout << std::fixed << std::setprecision(4) << calcPi(10000) << std::endl;
    return 0;
}
