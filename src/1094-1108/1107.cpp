/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string s;
    std::getline(std::cin, s);

    std::transform(s.begin(), s.end(), s.begin(), ::toupper);

    std::cout << s << std::endl;
    return 0;
}
