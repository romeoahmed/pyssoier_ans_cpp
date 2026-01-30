/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <vector>

auto getFactors(int const n, std::vector<int>& factors) {
    for (auto i = 1; i < n; ++i)
        if (n % i == 0)
            factors.emplace_back(i);
}

auto isPerfectNum(int const n) {
    std::vector<int> factors;
    getFactors(n, factors);

    auto sum = 0;
    for (auto factor : factors)
        sum += factor;

    return sum == n;
}

int main(int argc, char const* argv[]) {
    auto n = 0;
    std::cin >> n;

    for (auto i = 2; i <= n; ++i)
        if (isPerfectNum(i))
            std::cout << i << std::endl;

    return 0;
}
