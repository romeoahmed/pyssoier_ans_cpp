/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <cmath>
#include <iostream>

int main(int argc, char const* argv[]) {
    for (auto i = 1; i <= 9; i++) {
        for (auto j = 0; j <= 9; j++) {
            for (auto k = 0; k <= 9; k++) {
                if (std::pow(i, 3) + std::pow(j, 3) + std::pow(k, 3) == i * 100 + j * 10 + k)
                    std::cout << i << j << k << std::endl;
            }
        }
    }

    return 0;
}
