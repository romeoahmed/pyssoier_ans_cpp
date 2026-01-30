/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double radius{}; std::cin >> radius) {
        constexpr double pi = 3.14159;

        double const diameter = 2 * radius;
        double const circumference = 2 * pi * radius;
        double const area = pi * radius * radius;

        std::println("{:.4f} {:.4f} {:.4f}", diameter, circumference, area);
    }
}
