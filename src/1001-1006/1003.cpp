/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double f{}; std::cin >> f) {
        auto const c = (f - 32) * 5.0 / 9.0;
        std::println("{:.2f}", c);
    }
}
