/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto n = 0, sum = 0;
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;
    return 0;
}
