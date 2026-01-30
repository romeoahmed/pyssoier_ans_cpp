/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto correctNum = 0, guessNum = 0;
    std::cin >> correctNum;

    while (std::cin >> guessNum) {
        if (guessNum == correctNum) {
            std::cout << "正确" << std::endl;
            break;
        } else if (guessNum > correctNum)
            std::cout << "偏大" << std::endl;
        else
            std::cout << "偏小" << std::endl;
    }

    return 0;
}
