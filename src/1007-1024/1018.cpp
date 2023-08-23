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

#include <cmath>
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    auto a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    const auto p = (a + b + c) / 2.0;
    const auto area = std::sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << std::fixed << std::setprecision(3) << area << std::endl;
    
    return 0;
}
