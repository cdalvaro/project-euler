//
//  challenge.cpp
//  project-euler
//
//  Created by Carlos Álvaro on 06/02/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#include <algorithm>
#include <set>
#include <sstream>

#include "challenges/c0024/challenge.hpp"
#include "tools/math/factorial.hpp"

using namespace challenges;

Challenge24::Challenge24(const Type_t &sequence, const size_t &nth_permutation) :
sequence(sequence), nth_permutation(nth_permutation) {
    if (sequence.empty()) {
        throw std::logic_error("sequence cannot be empty");
    }

    if (nth_permutation < 1) {
        throw std::logic_error("nth_permutation must be greater than 0");
    }

    auto number_of_permutations = tools::math::factorial(sequence.size());
    if (nth_permutation > number_of_permutations) {
        std::stringstream msg;
        msg << "nth_permutation (" << nth_permutation
            << ") cannot be greater than the number of possible permutations: " << number_of_permutations;
        throw std::logic_error(msg.str());
    }
}

IChallenge::Solution_t Challenge24::solve() {
    std::sort(sequence.begin(), sequence.end());
    size_t permutation_index = 1;
    while (permutation_index < nth_permutation) {
        std::next_permutation(sequence.begin(), sequence.end());
        permutation_index += 1;
    }
    return sequence;
}
