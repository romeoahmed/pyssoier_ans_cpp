/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double homeworkScore{}, quizScore{}, examScore{};
        std::cin >> homeworkScore >> quizScore >> examScore) {
        auto const finalScore = homeworkScore * 0.2 + quizScore * 0.3 + examScore * 0.5;
        std::println("{}", finalScore);
    }
}
