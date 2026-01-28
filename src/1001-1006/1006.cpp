/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr double a{15.0}, b{25.0};
    constexpr double h = 150.0 * 2.0 / a;
    constexpr double s = (a + b) * h / 2;

    std::println("{:.2f}", s);
}
