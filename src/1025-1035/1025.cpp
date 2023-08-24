/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int s = 0;
    double p = 0;
    double m = 0;
    std::cin >> s >> p;

    if (s >= 6 && s <= 10)
        m = s * p * 0.9;
    else if (s >= 11)
        m = s * p * 0.8;
    else
        m = s * p;
    
    std::cout << std::fixed << std::setprecision(1) << m << std::endl;

    return 0;
}
