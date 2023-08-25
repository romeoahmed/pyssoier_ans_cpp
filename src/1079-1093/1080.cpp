/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

constexpr long long fact(const int n, const long long a = 1)
{
    return (n == 0) ? a : fact(n - 1, a * n);
}

int main(int argc, char const *argv[])
{
    std::cout << fact(7) + fact(11) - fact(10) << std::endl;
    return 0;
}
