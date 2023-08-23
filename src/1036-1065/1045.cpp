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

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> nums;
    auto n = 0;
    while (std::cin >> n)
    {
        nums.push_back(n);
        if (std::cin.get() == '\n')
        {
            break;
        }
    }

    const auto minNum = *std::min_element(nums.cbegin(), nums.cend());
    const auto maxNum = *std::max_element(nums.cbegin(), nums.cend());
    const auto average = std::accumulate(nums.cbegin(), nums.cend(), 0.0) / nums.size();

    std::cout << minNum << " "
              << maxNum << " "
              << std::fixed << std::setprecision(3) << average << std::endl;

    return 0;
}
