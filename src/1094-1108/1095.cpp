/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

/*
 *Warning: results may be inaccurate when input contains non-ASCII characters
 */
int main(int argc, char const* argv[]) {
    char c = 0;
    auto eng = 0, space = 0, num = 0, others = 0;

    while ((c = std::cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            ++eng;
        else if (c == ' ')
            ++space;
        else if (c >= '0' && c <= '9')
            ++num;
        else
            ++others;
    }

    std::cout << eng << std::endl << space << std::endl << num << std::endl << others << std::endl;

    return 0;
}
