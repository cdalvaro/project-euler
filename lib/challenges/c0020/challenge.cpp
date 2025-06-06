//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 28/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <numeric>

#include "challenges/c0020/challenge.hpp"
#include "tools/math/factorial.hpp"
#include "tools/types/big_int.hpp"

using namespace challenges;
using namespace tools;

Challenge20::Challenge20(const std::size_t &number) : number(number) {
}

IChallenge::Solution_t Challenge20::solve() {
    auto factorial = math::factorial<std::size_t, types::BigInt>(number);
    Type_t sum = std::accumulate(factorial.begin(), factorial.end(), 0);
    return sum;
}
