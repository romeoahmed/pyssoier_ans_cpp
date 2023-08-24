/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <cmath>
#include <iostream>

auto isPrime(const int n)
{
    if (n == 2 || n == 3)
        return true;
    else if (n % 6 != 1 && n % 6 != 5)
        return false;
    for (int i = 5; i <= std::sqrt(n); i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main(int argc, char const *argv[])
{
    auto a = 0, b = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (isPrime(i))
            std::cout << i << std::endl;
    
    return 0;
}
