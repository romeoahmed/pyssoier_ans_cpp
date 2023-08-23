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

constexpr inline auto wallis(int n)
{
    auto halfPi = 1.0;
    for (auto i = 2; i <= n; i += 2)
    {
        halfPi *= i * i / (i * i - 1.0);
    }
    return 2 * halfPi;
}

int main(int argc, char const *argv[])
{
    std::cout << std::fixed << std::setprecision(4) << wallis(30000) << std::endl;
    return 0;
}
