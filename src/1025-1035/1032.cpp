/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

auto calcFare(int const n) {
    if (n <= 5)
        return 2;
    else if (n > 5 && n <= 10)
        return 3;
    else if (n > 10 && n <= 16)
        return 4;
    else
        return 5;
}

int main(int argc, char const* argv[]) {
    auto n = 0;
    std::cin >> n;

    auto const fare = calcFare(n);
    std::cout << "票价" << fare << "元" << std::endl;

    return 0;
}
