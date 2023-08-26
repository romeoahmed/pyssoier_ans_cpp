/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <limits>
#include <string>
#include <string_view>
#include <vector>



int main(int argc, char const *argv[])
{
    constexpr std::array<std::string_view, 3> winCombinations = {
        "Rock Scissors",
        "Scissors Paper",
        "Paper Rock"
    };

    constexpr std::array<std::string_view, 3> tieCombinations = {
        "Rock Rock",
        "Scissors Scissors",
        "Paper Paper"
    };

    std::vector<std::string_view> results;
    auto n = 0;
    std::cin >> n;
    
    /*
     * When there is one character in the buffer,
     * std::getline will read directly without waiting for input,
     * so the buffer needs to be cleared
     */
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    results.reserve(n);
    for (auto i = 0; i < n; ++i)
    {
        std::string s;
        std::string_view result;
        std::getline(std::cin, s);

        for (auto r : winCombinations)
        {
            if (r == s)
            {
                result = "Player1";
                break;
            }
        }
        for (auto r : tieCombinations)
        {
            if (r == s)
            {
                result = "Tie";
                break;
            }
        }
        if (result.empty())
            result = "Player2";
        
        results.emplace_back(result);
    }

    for (auto result : results)
        std::cout << result << std::endl;

    return 0;
}
