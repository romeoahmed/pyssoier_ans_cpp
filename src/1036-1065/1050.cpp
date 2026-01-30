/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto n = 0;
    std::cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
