/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <future>
#include <gmpxx.h>
#include <iostream>
#include <vector>

// Calculate Factorial
mpz_class fact(const unsigned int start, const unsigned int end)
{
    mpz_class result = 1;
    for (unsigned int i = start; i <= end; ++i)
    {
        result *= i;
    }
    return result;
}

// Divide and Conquer Algorithm
mpz_class parallel_factorial(const unsigned int n, const unsigned int num_threads)
{
    std::vector<std::future<mpz_class>> futures;
    unsigned int chunk_size = n / num_threads;

    // Allocate computing tasks to individual threads
    for (unsigned int i = 0; i < num_threads; ++i)
    {
        unsigned int start = i * chunk_size + 1;
        unsigned int end = (i == num_threads - 1) ? n : (i + 1) * chunk_size;
        futures.emplace_back(std::async(std::launch::async, fact, start, end));
    }

    // Collect the calculation results of each thread and multiply them
    mpz_class result = 1;
    for (auto &future : futures)
    {
        result *= future.get();
    }

    return result;
}

int main(int argc, char const *argv[])
{
    unsigned int n;
    unsigned int num_threads;

    std::cout << "Enter the number to calculate factorial: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the number of threads: " << std::endl;
    std::cin >> num_threads;

    mpz_class result = parallel_factorial(n, num_threads);
    std::cout << n << "! = " << result << std::endl;

    return 0;
}
