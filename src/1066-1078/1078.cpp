/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <list>
#include <vector>

int main(int argc, char const* argv[]) {
    auto n = 0, m = 0;
    std::cin >> n >> m;

    std::list<int> persons;
    std::vector<int> outPersons;

    for (auto i = 1; i <= n; ++i)
        persons.emplace_back(i);

    outPersons.reserve(n);
    auto delNum = m - 1;
    for (auto j = 0; j < n; ++j) {
        auto iter = persons.cbegin();
        for (auto k = 0; k < delNum; ++k)
            ++iter;
        outPersons.emplace_back(*iter);
        persons.erase(iter);
        if (!persons.empty())
            delNum = (delNum + m - 1) % persons.size();
    }

    for (auto p : outPersons)
        std::cout << p << ' ';
    std::cout << std::endl;

    return 0;
}
