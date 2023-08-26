/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

long long fact(const int n, const long long a = 1)
{
    return (n == 0) ? a : fact(n - 1, a * n);
}

inline auto combinatorialNum(const int m, const int n)
{
    return fact(m) / (fact(m - n) * fact(n));
}

int main(int argc, char const *argv[])
{
    auto m = 0, n = 0;
    std::cin >> m >> n;
    
    std::cout << combinatorialNum(m, n) << std::endl;
    return 0;
}
