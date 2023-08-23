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
#include <string>

auto isSubStr(const std::string& subStr, const std::string& originStr)
{
    if (subStr.size() > originStr.size())
        return false;
    else if (subStr.size() == originStr.size())
        return subStr == originStr;
    else if (originStr.find(subStr) != originStr.npos)
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{
    std::string s1, s2;
    getline(std::cin, s1);
    getline(std::cin, s2);
    if (isSubStr(s1, s2))
        std::cout << s1 << " is substring of " << s2 << std::endl;
    else if (isSubStr(s2, s1))
        std::cout << s2 << " is substring of " << s1 << std::endl;
    else
        std::cout << "No substring" << std::endl;

    return 0;
}
