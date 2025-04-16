//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 03/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <numeric>

#include "challenges/c0021/challenge.hpp"
#include "tools/math/factorization.hpp"

using namespace challenges;
using namespace tools;

Challenge21::Challenge21(const std::size_t &limit) : limit(limit) {
}

IChallenge::Solution_t Challenge21::solve() {
    std::set<Type_t> amicable_numbers;
    for (Type_t number = 1; number <= limit; ++number) {
        if (amicable_numbers.find(number) != amicable_numbers.end()) {
            continue;
        }

        if (auto pair = math::amicablePair(number)) {
            amicable_numbers.insert(pair->first);
            amicable_numbers.insert(pair->second);
        }
    }

    Type_t sum = std::accumulate(amicable_numbers.begin(), amicable_numbers.end(), 0);
    return sum;
}
