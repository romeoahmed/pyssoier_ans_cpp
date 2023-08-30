/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <string_view>

int main(int argc, char const *argv[])
{
    constexpr std::array<std::string_view, 2> words {"hello", "world"};
    for (auto word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}
