/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double x{}, y{}; std::cin >> x >> y) {
        double const average = (x * 87.0 + y * 85.0) / (x + y);
        std::println("{:.4f}", average);
    }
}
