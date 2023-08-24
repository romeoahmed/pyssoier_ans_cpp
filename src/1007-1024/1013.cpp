/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

/*
 * Return the number of chickens
 */
auto chicken_rabbit(int heads, int legs)
{
    if (heads * 2 == legs)
        return heads;
    else if (heads * 4 == legs)
        return 0;
    else
        return chicken_rabbit(heads - 1, legs - 4);
}

int main(int argc, char const *argv[])
{
    auto x = 0, y = 0;
    std::cin >> x >> y;

    const auto chicken = chicken_rabbit(x, y);
    const auto rabbit = x - chicken;
    std::cout << chicken << " " << rabbit << std::endl;

    return 0;
}
