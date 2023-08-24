/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    char c = 0;
    std::cin >> c;
    
    std::cout << "  " << c << std::endl;
    std::cout << " " << c << c << c << std::endl;
    std::cout << c << c << c << c << c << std::endl;

    return 0;
}
