//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <cmath>
#include <numeric>

#include "challenges/c0016/challenge.hpp"
#include "challenges/tools/iterators/number_digits.hpp"

using namespace challenges;

Challenge16::Challenge16(const size_t &exponent) : exponent(exponent) {
}

IChallenge::Solution_t Challenge16::solve() {
    auto power = tools::iterators::NumberDigits(std::pow(2, exponent));
    Type_t sum = std::accumulate(power.begin(), power.end(), 0);
    return sum;
}
