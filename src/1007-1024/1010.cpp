/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

import std;

auto main() -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (double age{}, heartRate{}; std::cin >> age >> heartRate) {
        double const minHeartRate = (220.0 - age - heartRate) * 0.6 + heartRate;
        double const maxHeartRate = (220.0 - age - heartRate) * 0.8 + heartRate;
        std::println("{}~{}", minHeartRate, maxHeartRate);
    }
}
