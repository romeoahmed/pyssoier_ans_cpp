/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (char c{}; std::cin >> c) {
        auto pyramid = std::ranges::views::iota(1u, 4u) |
                       std::ranges::views::transform([c](auto i) {
                           return std::format("{}{}", std::string(3 - i, ' '),
                                              std::string(2 * i - 1, c));
                       });

        for (const auto &line : pyramid) {
            std::println("{}", line);
        }
    }
}
