/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iomanip>
#include <iostream>
#include <map>

int main(int argc, char const* argv[]) {
    auto l = 0, h = 0;
    std::map<int, double> temperature;
    std::cin >> l >> h;

    if (l > h) {
        std::cout << "输入的下限应该小于上限" << std::endl;
        return 1;
    }

    for (auto i = l; i < h; i++) {
        temperature[i] = (i - 32) * 5.0 / 9.0;
    }

    std::cout.setf(std::ios::right);
    for (auto iter = temperature.cbegin(); iter != temperature.cend(); ++iter) {
        std::cout << std::setw(8) << iter->first << std::setw(10) << std::fixed
                  << std::setprecision(2) << iter->second << std::endl;
    }

    return 0;
}
