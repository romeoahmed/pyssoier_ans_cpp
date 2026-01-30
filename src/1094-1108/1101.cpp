/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <string>

int main(int argc, char const* argv[]) {
    auto threshold = 0.0;
    std::string dna1, dna2;
    std::cin >> threshold >> dna1 >> dna2;

    auto equalCount = 0.0;
    for (std::size_t i = 0; i < dna1.size(); ++i)
        if (dna1.at(i) == dna2.at(i))
            ++equalCount;

    if (equalCount / dna1.size() >= threshold)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}
