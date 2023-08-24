/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto who = 1;
    for (auto sum = 20, next = 25; sum < 500; who++)
    {
        sum += next;
        next += 5;
    }
    std::cout << who << std::endl;

    return 0;
}
