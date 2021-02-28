//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <cmath>
#include <cwchar>
#include <string>

#include "challenges/c0016/challenge.hpp"

using namespace challenges;

Challenge16::Challenge16(const size_t &exponent) :
exponent(exponent) {
    
}

std::any Challenge16::solve() {
    auto power = std::to_wstring(std::pow(2, exponent));

    // Erase the decimal component of the number, i.e.: ".000000"
    auto it_dot = power.find(L".");
    if (it_dot != std::wstring::npos) {
        power.erase(it_dot, power.size());
    }

    Type_t sum = 0;
    wchar_t *end;
    for (auto digit : power) {
        sum += std::wcstol(&digit, &end, 10);
    }

    return sum;
}
