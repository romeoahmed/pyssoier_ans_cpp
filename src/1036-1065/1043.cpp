/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto n = 0, oddSum = 0, evenSum = 0;
    std::cin >> n;
    
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
    }

    std::cout << evenSum << ' ' << oddSum << std::endl;
    return 0;
}
