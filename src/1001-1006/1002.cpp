/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

import std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (int i{}, j{}; std::cin >> i >> j)
    {
        std::println("{}", i + j);
    }
}
