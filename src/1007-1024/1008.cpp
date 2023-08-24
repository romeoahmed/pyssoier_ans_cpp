/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string name;
    std::getline(std::cin, name);
    
    std::cout << "Hello " << name << std::endl;
    return 0;
}
