/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int getGCD(const int m, const int n)
{
    return (n == 0) ? m : getGCD(std::min(m, n), std::max(m, n) % std::min(m, n));
}

inline auto getLCM(const int m, const int n)
{
    
    return m * n / getGCD(m, n);
}

int main(int argc, char const *argv[])
{
    auto m = 0, n = 0;
    std::cin >> m >> n;
    
    std::cout << getLCM(m, n) << std::endl;
    return 0;
}
