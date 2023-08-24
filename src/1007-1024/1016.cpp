/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double height = 0, weight = 0;
    std::cin >> height >> weight;
    
    const auto bmi = weight / (height * height);
    std::cout << std::fixed << std::setprecision(14) << bmi << std::endl;

    return 0;
}
