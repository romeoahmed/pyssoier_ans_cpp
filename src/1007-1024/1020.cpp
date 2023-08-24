/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    constexpr auto c = static_cast<int>('A');
    std::cout << c * 2 << std::endl;
    
    return 0;
}
