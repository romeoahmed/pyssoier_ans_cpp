/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto homeworkScore = 0, quizScore = 0, examScore = 0;
    std::cin >> homeworkScore >> quizScore >> examScore;
    
    const auto finalScore = homeworkScore * 0.2 + quizScore * 0.3 + examScore * 0.5;
    std::cout << finalScore << std::endl;
    
    return 0;
}
