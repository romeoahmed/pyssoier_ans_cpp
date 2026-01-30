/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    /*
     * Suppose a cow eats x grass every day, and the pasture grows y grass every
     * day. 20y - (15 * 20)x = 10y - (20 * 10)x
     * => y / x = (15 * 20-20 * 10) / (20 - 10)
     */
    constexpr int day = (15 * 20 - 20 * 10) / (20 - 10);
    std::println("{}", day);
}
