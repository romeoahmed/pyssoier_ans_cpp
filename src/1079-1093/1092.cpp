/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <array>
#include <iostream>
#include <numeric>
#include <vector>

constexpr auto getFactors(int const n, std::vector<int>& factors) {
    for (auto i = 1; i < n; ++i)
        if (n % i == 0)
            factors.emplace_back(i);
}

inline auto getAmiableNums(std::array<int, 2>& amiableNums) {
    auto flag = false;
    for (auto i = 2; i < 300; ++i) {
        for (auto j = 2; j < 300; ++j) {
            if (i == j)
                continue;

            std::vector<int> iFactors, jFactors;
            getFactors(i, iFactors);
            getFactors(j, jFactors);

            auto iSum = std::accumulate(iFactors.cbegin(), iFactors.cend(), 0);
            auto jSum = std::accumulate(jFactors.cbegin(), jFactors.cend(), 0);

            if (iSum == j && jSum == i) {
                amiableNums.at(0) = i;
                amiableNums.at(1) = j;
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
}

int main(int argc, char const* argv[]) {
    std::array<int, 2> amiableNums{};

    getAmiableNums(amiableNums);
    for (auto num : amiableNums)
        std::cout << num << ' ';
    std::cout << std::endl;

    return 0;
}
