/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

auto isPrimeNum(int const n) {
    if (n == 2 || n == 3)
        return true;
    else if (n % 6 != 1 && n % 6 != 5)
        return false;
    else {
        for (auto i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }
}

int main(int argc, char const* argv[]) {
    auto n = 0;
    std::cin >> n;

    if (isPrimeNum(n))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}
