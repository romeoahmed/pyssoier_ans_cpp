/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (int n{}; std::cin >> n) {
        int const a = n % 10;
        int const b = n / 10 % 10;
        int const c = n / 100;
        std::println("{}", a * 100 + b * 10 + c);
    }
}
