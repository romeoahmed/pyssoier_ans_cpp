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
    constexpr auto maxScore = 9.6 * 6 - 9.4 * 5;
    constexpr auto minScore = 9.6 * 6 - 9.8 * 5;
    constexpr auto avgScore = (9.6 * 6 - maxScore - minScore) / 4;
    std::cout.setf(std::ios::right);
    std::cout.width(5);
    std::cout << std::fixed << std::setprecision(2) << avgScore << std::endl;

    return 0;
}
