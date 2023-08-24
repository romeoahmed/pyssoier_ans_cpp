/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    double x = 0;
    std::cin >> x;
    if (x >= 7.91)
        std::cout << "飞船成功飞行！" << std::endl;
    else
        std::cout << "飞船不能升空！" << std::endl;
    return 0;
}
