/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

/*
 * This program is for reversing numbers.
 * It works fine on my computer, but on pyssoier it shows "wrong answer".
 * If you know why, please tell me. Thanks.
 */
int main(int argc, char const *argv[])
{
    auto num = 0, reversedNum = 0;
    std::cin >> num;
    while (num != 0)
    {
        reversedNum *= 10;
        reversedNum += num % 10;
        num /= 10;
    }
    std::cout << reversedNum << std::endl;
    
    return 0;
}
