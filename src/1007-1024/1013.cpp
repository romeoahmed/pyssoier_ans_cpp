/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

constexpr auto chicken_rabbit(int const heads, int const legs) -> int {
    // Return the number of chickens
    return (4 * heads - legs) / 2;
}

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (int x{}, y{}; std::cin >> x >> y) {
        auto const chicken = chicken_rabbit(x, y);
        std::println("{} {}", chicken, x - chicken);
    }
}
