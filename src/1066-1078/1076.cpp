/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <numeric>

int main(int argc, char const *argv[])
{
    constexpr std::array<int, 6> heats = {95, 100, 122, 180, 245, 221};
    
    std::cout << std::accumulate(heats.cbegin(), heats.cend(), 0) << std::endl;
    return 0;
}
