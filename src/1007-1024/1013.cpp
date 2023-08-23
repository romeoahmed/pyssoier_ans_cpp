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

/*
 * Return the number of chickens
 */
auto chicken_rabbit(int heads, int legs)
{
    if (heads * 2 == legs)
        return heads;
    else if (heads * 4 == legs)
        return 0;
    else
        return chicken_rabbit(heads - 1, legs - 4);
}

int main(int argc, char const *argv[])
{
    auto x = 0, y = 0;
    std::cin >> x >> y;

    const auto chicken = chicken_rabbit(x, y);
    const auto rabbit = x - chicken;
    std::cout << chicken << " " << rabbit << std::endl;

    return 0;
}
