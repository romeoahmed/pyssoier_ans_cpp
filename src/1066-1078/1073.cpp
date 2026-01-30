/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <list>

int main(int argc, char const* argv[]) {
    std::list<int> nums;
    auto n = 0;
    std::cin >> n;

    for (auto i = 0; i < n; ++i) {
        auto tmp = 0;
        std::cin >> tmp;
        nums.emplace_back(tmp);
    }

    nums.emplace_back(nums.front());
    nums.pop_front();

    for (auto iter = nums.cbegin(); iter != nums.cend(); ++iter)
        std::cout << *iter << ' ';
    std::cout << std::endl;

    return 0;
}
