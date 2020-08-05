//
//  collatz.cpp
//  Challenges
//
//  Created by Carlos David on 27/7/20.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/tools/math/sequences/collatz.hpp"

using namespace challenges::tools::math;

std::vector<size_t> sequences::collatz(const size_t &seed) {
    std::vector<size_t> sequence{seed};
    auto number = seed;
    while (number != 1) {
        number = number % 2 == 0 ? number / 2 : 3 * number + 1;
        sequence.push_back(number);
    }
    return sequence;
}
