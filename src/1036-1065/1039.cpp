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

#include <map>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto l = 0, h = 0;
    std::map<int, double> temperature;
    std::cin >> l >> h;

    if (l > h)
    {
        std::cout << "输入的下限应该小于上限" << std::endl;
        return 1;
    }

    for (auto i = l; i < h; i++)
    {
        temperature[i] = (i - 32) * 5.0 / 9.0;
    }

    std::cout.setf(std::ios::right);
    for (auto iter = temperature.cbegin(); iter != temperature.cend(); ++iter)
    {
        std::cout << std::setw(8) << iter->first << std::setw(10) 
                  << std::fixed << std::setprecision(2) << iter->second << std::endl;
    }

    return 0;
}
