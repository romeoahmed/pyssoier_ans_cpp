/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto x = 0, y = 0;
    std::cin >> x >> y;
    
    const double average = (x * 87 + y * 85) / (x + y);
    std::cout << std::fixed << std::setprecision(4) << average << std::endl;

    return 0;
}
