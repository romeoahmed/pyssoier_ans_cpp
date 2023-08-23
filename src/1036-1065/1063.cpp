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

auto isPrime(const int n)
{
    if (n == 2 || n == 3)
        return true;
    else if (n % 6 != 1 && n % 6 != 5)
        return false;
    for (int i = 5; i <= std::sqrt(n); i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main(int argc, char const *argv[])
{
    auto a = 0, b = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (isPrime(i))
            std::cout << i << std::endl;
    
    return 0;
}
