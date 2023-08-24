/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char const *argv[])
{
    double height = 0, weight = 0;
    std::cin >> height >> weight;
    const auto bmi = weight / (height * height);
    std::string status;
    if (bmi < 18.5)
        status = "偏瘦";
    else if (bmi >= 18.5 && bmi < 25)
        status = "正常";
    else if (bmi >= 25 && bmi < 30)
        status = "偏胖";
    else
        status = "肥胖";
    
    std::cout << std::fixed << std::setprecision(1) << bmi << std::endl;
    std::cout << status << std::endl;

    return 0;
}
