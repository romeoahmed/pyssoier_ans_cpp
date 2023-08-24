/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <array>
#include <iostream>
#include <string_view>

int main(int argc, char const *argv[])
{
    std::array<std::string_view, 5> hobbies = {"篮球", "羽毛球", "看书", "旅游", "音乐"};
    
    for (auto hobby : hobbies)
        std::cout << hobby << std::endl;
    
    return 0;
}
