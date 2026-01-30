/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (int a{}, b{}; std::cin >> a >> b) {
        std::swap(a, b);
        std::println("a = {}", a);
        std::println("b = {}", b);
    }
}
