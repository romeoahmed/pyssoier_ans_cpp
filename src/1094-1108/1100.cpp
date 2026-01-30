/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <algorithm>
#include <iostream>
#include <string>

auto findFirstUniqueChar(std::string const& s) {
    for (std::size_t index = 0; index < s.size(); ++index)
        if (std::count(s.cbegin(), s.cend(), s.at(index)) == 1)
            return index;
    return s.npos;
}

int main(int argc, char const* argv[]) {
    std::string s;
    std::cin >> s;

    auto index = findFirstUniqueChar(s);
    if (index != s.npos)
        std::cout << s.at(index) << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}
