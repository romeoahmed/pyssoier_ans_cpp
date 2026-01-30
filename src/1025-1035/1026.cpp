/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto x = 0;
    std::cin >> x;

    if (x % 2 == 0)
        std::cout << "x为偶数" << std::endl;
    else
        std::cout << "x为奇数" << std::endl;

    return 0;
}
