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
#include <iomanip>
#include <string>

int main(int argc, char const *argv[])
{
    double height = 0, weight = 0;
    std::cin >> height >> weight;
    const auto bmi = weight / (height * height);
    std::string status;
    if (bmi < 18.5)
        status = "偏瘦";
    else if (bmi >= 18.5 && bmi < 25)
        status = "正常";
    else if (bmi >= 25 && bmi < 30)
        status = "偏胖";
    else
        status = "肥胖";
    
    std::cout << std::fixed << std::setprecision(1) << bmi << std::endl;
    std::cout << status << std::endl;

    return 0;
}
