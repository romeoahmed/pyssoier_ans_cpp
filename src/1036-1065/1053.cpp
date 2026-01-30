/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>

int main(int argc, char const* argv[]) {
    auto m = 0, n = 1;
    std::cin >> m;

    for (int sum = 0; sum <= m; sum += n)
        n++;

    std::cout << n << std::endl;
    return 0;
}
