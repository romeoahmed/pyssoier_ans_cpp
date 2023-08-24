/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <string_view>

int main(int argc, char const *argv[])
{
    constexpr std::array<std::string_view, 4> names = {"张明", "王丽", "李刚", "唐华"};
    for (auto name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
