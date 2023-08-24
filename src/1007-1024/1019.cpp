/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto maxScore = 9.6 * 6 - 9.4 * 5;
    constexpr auto minScore = 9.6 * 6 - 9.8 * 5;
    constexpr auto avgScore = (9.6 * 6 - maxScore - minScore) / 4;
    
    std::cout.setf(std::ios::right);
    std::cout.width(5);
    std::cout << std::fixed << std::setprecision(2) << avgScore << std::endl;

    return 0;
}
