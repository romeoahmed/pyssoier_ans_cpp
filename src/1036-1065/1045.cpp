/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> nums;
    
    for (auto tmp = 0; std::cin >> tmp; nums.emplace_back(tmp))
    {
        if (std::cin.get() == '\n')
            break;
    }

    const auto minNum = *std::min_element(nums.cbegin(), nums.cend());
    const auto maxNum = *std::max_element(nums.cbegin(), nums.cend());
    const auto average = std::accumulate(nums.cbegin(), nums.cend(), 0.0) / nums.size();

    std::cout << minNum << " "
              << maxNum << " "
              << std::fixed << std::setprecision(3) << average << std::endl;

    return 0;
}
