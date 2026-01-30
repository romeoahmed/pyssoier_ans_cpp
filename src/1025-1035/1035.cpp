/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

inline auto buyNotes(int const x, int& m, int& n, int& k) {
    k = x / 4;
    auto remainder = x % 4;

    if (remainder == 0) {
        m = 0;
        n = 0;
    } else if (remainder == 1) {
        m = 0;
        n = 1;
        k -= 1;
    } else if (remainder == 2) {
        m = 1;
        n = 0;
        k -= 1;
    } else {
        m = 1;
        n = 1;
        k -= 2;
    }
}

int main(int argc, char const* argv[]) {
    auto x = 0; // money
    auto m = 0; // The number of $6 notebooks
    auto n = 0; // The number of $5 notebooks
    auto k = 0; // The number of $4 notebooks

    std::cin >> x;
    buyNotes(x, m, n, k);

    std::cout << m << std::endl << n << std::endl << k << std::endl;

    return 0;
}
