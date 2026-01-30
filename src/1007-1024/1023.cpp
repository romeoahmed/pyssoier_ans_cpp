/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    constexpr int length = 5;

    std::array<int, length> candies{};
    for (auto& candy : candies)
        if (!(std::cin >> candy)) break;

    for (auto [i, candy] : std::ranges::views::enumerate(candies)) {
        int const share = candy / 3;
        candies[i] = share;
        candies[(i + 4) % length] += share;
        candies[(i + 1) % length] += share;
    }

    for (auto const candy : candies)
        std::print("{:>5}", candy);
    std::println();
}
