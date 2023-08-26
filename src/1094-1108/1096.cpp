/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <string>

inline auto replace(std::string &s, char target, char rp)
{
    for (auto &c : s)
        if (c == target)
            c = rp;
}

int main(int argc, char const *argv[])
{
    std::string sen;
    std::getline(std::cin, sen);

    char target = 0, rp = 0;
    std::cin >> target >> rp;

    replace(sen, target, rp);

    std::cout << sen << std::endl;
    return 0;
}
