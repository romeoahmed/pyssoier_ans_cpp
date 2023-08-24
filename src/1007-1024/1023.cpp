/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto length = 5;
    
    std::array<int, length> candies{};
    for (auto &candy : candies)
        std::cin >> candy;
    
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            candies.at(i) /= 3;
            candies.at(length - 1) += candies.at(i);
            candies.at(i + 1) += candies.at(i);
        }
        else if (i == length - 1)
        {
            candies.at(i) /= 3;
            candies.at(i - 1) += candies.at(i);
            candies.at(0) += candies.at(i);
        }
        else
        {
            candies.at(i) /= 3;
            candies.at(i - 1) += candies.at(i);
            candies.at(i + 1) += candies.at(i);
        }
    }

    for (const auto candy : candies)
        std::cout << std::setw(5) << candy;
    std::cout << std::endl;

    return 0;
}
