/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto year = 0;
    for (auto money = 100000; money > 0; year++) {
        money += money * 0.037;
        money -= 20000;
    }

    std::cout << year << std::endl;
    return 0;
}
