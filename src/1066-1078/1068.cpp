/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> nums;

    for (auto tmp = 0; std::cin >> tmp; nums.emplace_back(tmp))
    {
        if (std::cin.get() == '\n')
            break;
    }

    for (auto iter = nums.crbegin(); iter != nums.crend(); ++iter)
        std::cout << *iter << ' ';
    
    std::cout << std::endl;
    return 0;
}
