/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for
 * license information.
 */

#include <iostream>
#include <string>

inline auto calcMinHeartRate(int const age, double const heartRate, std::string const& gender) {
    if (gender == "male")
        return (220 - age - heartRate) * 0.6 + heartRate;
    else
        return (210 - age - heartRate) * 0.6 + heartRate;
}

inline auto calcMaxHeartRate(int const age, double const heartRate, std::string const& gender) {
    if (gender == "male")
        return (220 - age - heartRate) * 0.8 + heartRate;
    else
        return (210 - age - heartRate) * 0.8 + heartRate;
}

int main(int argc, char const* argv[]) {
    int age = 0;
    double heartRate = 0;
    std::string gender;
    std::cin >> age >> heartRate >> gender;

    auto const minHeartRate = calcMinHeartRate(age, heartRate, gender);
    auto const maxHeartRate = calcMaxHeartRate(age, heartRate, gender);
    std::cout << minHeartRate << '~' << maxHeartRate << std::endl;

    return 0;
}
