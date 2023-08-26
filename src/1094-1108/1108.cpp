/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<std::string> medicines;
    auto n = 0;
    std::cin >> n;

    /*
     * When there is one character in the buffer,
     * std::getline will read directly without waiting for input,
     * so the buffer needs to be cleared
     */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    medicines.reserve(n);
    for (auto i = 0; i < n; ++i)
    {
        std::string medicine;
        std::getline(std::cin, medicine);

        std::transform(medicine.begin(), medicine.end(), medicine.begin(), ::tolower);
        medicine.at(0) = std::toupper(medicine.at(0));

        medicines.emplace_back(medicine);
    }

    for (auto medi : medicines)
        std::cout << medi << std::endl;

    return 0;
}
