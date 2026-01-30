/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

constexpr auto isPrime(int const n) {
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
    for (auto n = 6; n <= 100; n += 2) {
        for (auto i = 2; i <= n / 2; ++i) {
            if (isPrime(i) && isPrime(n - i)) {
                std::cout << n << "=" << i << "+" << n - i << std::endl;
                break;
            }
        }
    }

    return 0;
}
