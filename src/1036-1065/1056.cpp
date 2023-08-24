/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;

    auto unitDigit = 1, tenDight = 0;
    for (auto i = 0; i < n; i++)
    {
        auto carry = 0;
        auto tmp = unitDigit * 1992;
        unitDigit = tmp % 10;
        carry = tmp / 10;
        tmp = tenDight * 1992 + carry;
        tenDight = tmp % 10;
    }
    std::cout << tenDight << unitDigit << std::endl;

    return 0;
}
