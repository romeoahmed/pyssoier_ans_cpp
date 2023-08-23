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
#include <vector>

int main(int argc, char const *argv[])
{
    constexpr int n = 100;
    std::vector<short> result;
    result.emplace_back(1);
    for (int i = 2; i <= n; ++i) {
        int carry = 0;
        for (auto &digit : result) {
            int tmp = digit * i + carry;
            digit = tmp % 10;
            carry = tmp / 10;
        }
        while (carry > 0) {
            result.emplace_back(carry % 10);
            carry /= 10;
        }
    }
    std::cout << n << "! = ";
    for (auto iter = result.rbegin(); iter != result.rend(); ++iter) {
        std::cout << *iter;
    }
    std::cout << std::endl;
    
    return 0;
}
