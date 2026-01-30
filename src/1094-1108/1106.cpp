/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <string>

int main(int argc, char const* argv[]) {
    std::string s;
    std::getline(std::cin, s);

    for (auto c : s) {
        if (c == 'z' || c == 'Z')
            std::cout << static_cast<char>(c - 25);
        else if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
            std::cout << static_cast<char>(c + 1);
        else
            std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
