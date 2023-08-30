/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <map>
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::map<char, char> dnaRule {
        {'A', 'T'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'}
    };

    std::string dna;
    std::getline(std::cin, dna);

    for (auto i : dna)
        std::cout << dnaRule[i];
    std::cout << std::endl;

    return 0;
}
