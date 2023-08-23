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

auto buyNotes(const int x, int &m, int &n, int &k)
{
    k = x / 4;
    auto r = x % 4;      // remainder

    if (r == 0)
    {
        m = 0;
        n = 0;
    }
    else if (r == 1)
    {
        m = 0;
        n = 1;
        k -= 1;
    }
    else if (r == 2)
    {
        m = 1;
        n = 0;
        k -= 1;
    }
    else
    {
        m = 1;
        n = 1;
        k -= 2;
    }
}

int main(int argc, char const *argv[])
{
    auto x = 0;          // money
    auto m = 0;          // The number of ￥6 notebooks
    auto n = 0;          // The number of ￥5 notebooks
    auto k = 0;          // The number of ￥4 notebooks

    std::cin >> x;
    buyNotes(x, m, n, k);

    std::cout << m << std::endl;
    std::cout << n << std::endl;
    std::cout << k << std::endl;

    return 0;
}
