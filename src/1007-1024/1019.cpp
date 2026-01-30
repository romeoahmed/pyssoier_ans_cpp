/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr double totalScore = 9.6 * 6.0;

    constexpr double maxScore = totalScore - 9.4 * 5.0;
    constexpr double minScore = totalScore - 9.8 * 5.0;

    constexpr double avgScore = (totalScore - maxScore - minScore) / 4.0;

    std::println("{:>5.2f}", avgScore);
}
