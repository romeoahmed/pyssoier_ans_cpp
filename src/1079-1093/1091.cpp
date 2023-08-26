/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int getGCD(const int m, const int n)
{
    return (n == 0) ? m : getGCD(std::min(m, n), std::max(m, n) % std::min(m, n));
}

int main(int argc, char const *argv[])
{
    auto m = 0, n = 0;
    std::cin >> m >> n;
    const auto gcd = getGCD(m, n);

    std::cout << m / gcd << ' ' << n / gcd << std::endl;
    return 0;
}
