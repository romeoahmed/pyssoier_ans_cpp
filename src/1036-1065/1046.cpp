/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            std::cout << '*';
        std::cout << std::endl;
    }

    return 0;
}
