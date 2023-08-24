/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto a = 15, b = 25;
    constexpr auto h = 150 * 2 / a;
    constexpr double s = (a + b) * h / 2;
    std::cout << std::fixed << std::setprecision(2) << s << std::endl;

    return 0;
}
