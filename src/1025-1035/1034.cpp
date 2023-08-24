/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string_view>

int main(int argc, char const *argv[])
{
    auto t = 0;
    std::cin >> t;

    const auto v = 25000 * 3.6 / t;
    std::string_view status;
    
    if (v > 100 && v < 120)
        status = "超过规定时速且不足20%";
    else if (v >= 120 && v < 150)
        status = "超过规定时速20%以上且不足50%";
    else if (v >= 150 && v < 170)
        status = "超过规定时速50%以上且不足70%";
    else if (v >= 170)
        status = "超过规定时速70%以上";
    else
        status = "正常";
    
    std::cout << std::fixed << std::setprecision(1) << v << std::endl;
    std::cout << status << std::endl;

    return 0;
}
