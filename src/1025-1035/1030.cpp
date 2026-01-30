/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

inline auto isLeapYear(int const year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main(int argc, char const* argv[]) {
    auto year = 0;
    std::cin >> year;

    if (isLeapYear(year))
        std::cout << year << "年是闰年" << std::endl;
    else
        std::cout << year << "年不是闰年" << std::endl;

    return 0;
}
