/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double f = 0;
    std::cin >> f;
    
    const auto c = (f - 32) * 5 / 9;
    std::cout << std::fixed << std::setprecision(2) << c << std::endl;

    return 0;
}
