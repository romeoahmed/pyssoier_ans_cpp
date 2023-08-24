/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::vector<int> nums;
    std::cin >> n;

    nums.reserve(n);
    for (auto i = 0; i < n; ++i)
    {
        auto num = 0;
        std::cin >> num;
        nums.emplace_back(num);
    }

    auto flag = false;
    for (std::size_t j = 0; j < nums.size() - 1; ++j)
    {
        flag = false;
        for (auto iter = nums.begin(); iter != nums.end() - 1; ++iter)
        {
            if (*iter < *(iter + 1))
            {
                auto temp = *iter;
                *iter = *(iter + 1);
                *(iter + 1) = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }

    for (auto iter = nums.cbegin(); iter != nums.cend(); ++iter)
        std::cout << *iter << std::endl;
    
    return 0;
}
