/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto l = 100, h = 105;
    std::cout.setf(std::ios::right);
    for (auto i = l; i <= h; i++)
    {
        std::cout << std::setw(8) << i 
                  << std::setw(10) << std::fixed << std::setprecision(2) 
                  << (i - 32) * 5.0 / 9.0 << std::endl;
    }

    return 0;
}
