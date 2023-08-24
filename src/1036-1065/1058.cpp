/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

auto fact(const int n, const long long a = 1)
{
    if (n == 0)
        return 1LL;
    else if (n == 1)
        return a;
    else
        return fact(n - 1, a * n);
}

auto sumFact(const int n, const long long a = 1)
{
    if (n == 0)
        return 1LL;
    else if (n == 1)
        return a;
    else
        return sumFact(n - 1, a + fact(n));
}

int main(int argc, char const *argv[])
{
    auto n = 0;
    std::cin >> n;

    std::cout << sumFact(n) << std::endl;
    return 0;
}
