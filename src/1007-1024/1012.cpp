/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double n{}, m{}; std::cin >> n >> m) {
        double const rest = n - m * 0.8;
        std::println("{:.2f}", rest);
    }
}
