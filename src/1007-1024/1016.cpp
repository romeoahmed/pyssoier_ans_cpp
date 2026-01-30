/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double height{}, weight{}; std::cin >> height >> weight) {
        double const bmi = weight / (height * height);
        std::println("{:.14f}", bmi);
    }
}
