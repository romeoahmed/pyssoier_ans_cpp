/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double a{}, b{}, c{}; std::cin >> a >> b >> c) {
        double const p = (a + b + c) / 2.0;
        double const area = std::sqrt(p * (p - a) * (p - b) * (p - c));
        std::println("{:.3f}", area);
    }
}
