/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    std::string sen;
    std::getline(std::cin, sen);

    std::regex wsRm("\\s+");
    std::vector<std::string> words(
        std::sregex_token_iterator(sen.cbegin(), sen.cend(), wsRm, -1),
        std::sregex_token_iterator()
    );

    std::cout << words.size() << std::endl;
    return 0;
}
