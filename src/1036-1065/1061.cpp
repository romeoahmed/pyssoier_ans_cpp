/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    for (auto i = 0; i <= 100; i++) {
        for (auto j = 0; j <= 100; j++) {
            for (auto k = 0; k <= 100; k++) {
                if (i + j + k == 100 && i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0)
                    std::cout << i << ' ' << j << ' ' << k << std::endl;
            }
        }
    }

    return 0;
}
