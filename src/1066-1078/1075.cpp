/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const* argv[]) {
    std::vector<int> nums;
    auto n = 0;
    std::cin >> n;

    nums.reserve(n);
    for (auto i = 0; i < n; ++i) {
        auto tmp = 0;
        std::cin >> tmp;
        nums.emplace_back(tmp);
    }

    auto maxNum = 0, maxNumIndex = 0;
    for (auto j = 0; j < n; ++j) {
        if (nums[j] > maxNum) {
            maxNum = nums[j];
            maxNumIndex = j;
        }
    }

    std::cout << maxNumIndex + 1 << std::endl;
    return 0;
}
