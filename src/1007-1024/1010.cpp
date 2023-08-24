/*
 * Copyright (c) 2023 Romeo Ahmed. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for license information.
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    auto age = 0, heartRate = 0;
    std::cin >> age >> heartRate;
    
    const auto minHeartRate = (220 - age - heartRate) * 0.6 + heartRate;
    const auto maxHeartRate = (220 - age - heartRate) * 0.8 + heartRate;
    std::cout << minHeartRate << "~" << maxHeartRate << std::endl;
    
    return 0;
}
