/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <vector>

auto bubbleSort(std::vector<int>& arr) {
    auto flag = false;
    for (std::size_t i = 0; i < arr.size() - 1; ++i) {
        flag = false;
        for (std::size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr.at(j) > arr.at(j + 1)) {
                std::swap(arr.at(j), arr.at(j + 1));
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}

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

    bubbleSort(nums);

    for (auto num : nums)
        std::cout << num << ' ';
    std::cout << std::endl;

    return 0;
}
