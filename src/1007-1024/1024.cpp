/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto x = 0, a = 0, y = 0, b = 0;
    std::cin >> x >> a >> y >> b;
    const double z = (b * y - a * x) / (b - a);
    std::cout << std::fixed << std::setprecision(2) << z << std::endl;
    
    return 0;
}
