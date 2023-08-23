/*
* Copyright 2023 Romeo Ahmed <ahmedorqwn@gmail.com>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <array>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto length = 5;
    
    std::array<int, length> candies{};
    for (auto &candy : candies)
        std::cin >> candy;
    
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            candies[i] /= 3;
            candies[length - 1] += candies[i];
            candies[i + 1] += candies[i];
        }
        else if (i == length - 1)
        {
            candies[i] /= 3;
            candies[0] += candies[i];
            candies[i - 1] += candies[i];
        }
        else
        {
            candies[i] /= 3;
            candies[i + 1] += candies[i];
            candies[i - 1] += candies[i];
        }
    }

    for (auto candy : candies)
        std::cout << std::setw(5) << candy;
    std::cout << std::endl;

    return 0;
}
