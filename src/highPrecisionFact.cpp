/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    constexpr int n = 500;
    std::vector<int> result;
    result.reserve(10000);
    result.emplace_back(1);
    for (auto i = 2; i <= n; ++i)
    {
        auto carry = 0;
        for (auto &digit : result)
        {
            auto tmp = digit * i + carry;
            digit = tmp % 10;
            carry = tmp / 10;
        }
        while (carry > 0)
        {
            result.emplace_back(carry % 10);
            carry /= 10;
        }
    }
    std::cout << n << "! = ";
    for (auto iter = result.crbegin(); iter != result.crend(); ++iter)
    {
        std::cout << *iter;
    }
    std::cout << std::endl;

    return 0;
}
