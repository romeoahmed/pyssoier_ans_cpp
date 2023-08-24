/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto t = 0;
    std::cin >> t;
    const auto v = 25000 / t * 3.6;
    if (v > 100)
        std::cout << "超速" << std::endl;
    else
        std::cout << "正常" << std::endl;
    
    return 0;
}
