/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    for (auto i = 1; i <= 9; i++) {
        for (auto j = 1; j <= i; j++) {
            std::cout << i << " * " << j << " = " << i * j << "  ";
        }
        std::cout << std::endl;
    }

    return 0;
}
