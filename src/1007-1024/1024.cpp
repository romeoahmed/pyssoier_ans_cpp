/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    if (double x{}, a{}, y{}, b{}; std::cin >> x >> a >> y >> b) {
        double const z = (b * y - a * x) / (b - a);
        std::println("{:.2f}", z);
    }
}
