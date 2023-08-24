/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;
    const auto a = n % 10;
    const auto b = n / 10 % 10;
    const auto c = n / 100;
    std::cout << a * 100 + b * 10 + c << std::endl;

    return 0;
}
