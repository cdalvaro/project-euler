//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 27/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <utility>

#include "challenges/c0014/challenge.hpp"
#include "tools/math/sequences/collatz.hpp"

using namespace challenges;

Challenge14::Challenge14(const Type_t &maximum_number) : maximum_number(maximum_number) {
}

IChallenge::Solution_t Challenge14::solve() {
    std::pair<Type_t, std::size_t> result = {0, 0};

    for (auto seed = 1u; seed <= maximum_number; ++seed) {
        auto sequence = tools::math::sequences::collatz(seed);
        if (sequence.size() > result.second) {
            result = {seed, sequence.size()};
        }
    }

    return result.first;
}
