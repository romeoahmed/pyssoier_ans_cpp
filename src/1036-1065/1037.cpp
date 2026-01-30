/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto sum = 0;
    for (auto i = 1; i <= 10; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;
    return 0;
}
