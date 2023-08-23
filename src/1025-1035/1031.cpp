/*
* Copyright 2023 Romeo Ahmed <ahmedorqwn@gmail.com>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <iostream>
#include <string>

auto calcMinHeartRate(const int age, const double heartRate, const std::string& gender)
{
    if (gender == "male")
        return (220 - age - heartRate) * 0.6 + heartRate;
    else
        return (210 - age - heartRate) * 0.6 + heartRate;
}

auto calcMaxHeartRate(const int age, const double heartRate, const std::string& gender)
{
    if (gender == "male")
        return (220 - age - heartRate) * 0.8 + heartRate;
    else
        return (210 - age - heartRate) * 0.8 + heartRate;
}

int main(int argc, char const *argv[])
{
    int age = 0;
    double heartRate = 0;
    std::string gender;
    std::cin >> age >> heartRate >> gender;
    
    const auto minHeartRate = calcMinHeartRate(age, heartRate, gender);
    const auto maxHeartRate = calcMaxHeartRate(age, heartRate, gender);
    std::cout << minHeartRate << '~' << maxHeartRate << std::endl;
    
    return 0;
}
