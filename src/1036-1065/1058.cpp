/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

long long fact(const int n, const long long a = 1LL)
{
    return (n == 0) ? a : fact(n - 1, a * n);
}

long long sumFact(const int n, const long long a = 1LL)
{
    return (n == 0) ? a : sumFact(n - 1, a + fact(n));
}

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;

    std::cout << sumFact(n) << std::endl;
    return 0;
}
