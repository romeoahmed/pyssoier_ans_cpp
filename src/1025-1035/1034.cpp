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

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char const *argv[])
{
    auto t = 0;
    std::cin >> t;
    const auto v = 25000 * 3.6 / t;
    std::string status;

    if (v > 100 && v < 120)
        status = "超过规定时速且不足20%";
    else if (v >= 120 && v < 150)
        status = "超过规定时速20%以上且不足50%";
    else if (v >= 150 && v < 170)
        status = "超过规定时速50%以上且不足70%";
    else if (v >= 170)
        status = "超过规定时速70%以上";
    else
        status = "正常";
    
    std::cout << std::fixed << std::setprecision(1) << v << std::endl;
    std::cout << status << std::endl;

    return 0;
}
