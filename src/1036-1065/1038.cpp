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

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    constexpr auto l = 100, h = 105;
    std::cout.setf(std::ios::right);
    for (auto i = l; i <= h; i++)
    {
        std::cout << std::setw(8) << i << std::setw(10) 
                  << std::fixed << std::setprecision(2) << (i - 32) * 5.0 / 9.0 << std::endl;
    }

    return 0;
}
