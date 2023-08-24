/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;
    
    const auto save = (3 + 5) * n * (1 - 0.8);
    std::cout << std::fixed << std::setprecision(2) << save << std::endl;

    return 0;
}
