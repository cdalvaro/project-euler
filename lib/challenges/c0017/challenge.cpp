//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <algorithm>

#include "challenges/c0017/challenge.hpp"
#include "tools/types/named_number.hpp"

using namespace challenges;
using namespace tools::types;

Challenge17::Challenge17(const size_t &first, const size_t &last) : first(first), last(last) {
}

IChallenge::Solution_t Challenge17::solve() {
    Type_t sum = 0;
    for (auto number = first; number <= last; ++number) {
        auto name = NamedNumber(number).getName();
        removeAllOccurencesOf(name, {' ', '-'});
        sum += name.size();
    }
    return sum;
}

void Challenge17::removeAllOccurencesOf(std::string &str, const std::set<char> &characters) {
    for (auto character : characters) {
        auto it = std::remove(str.begin(), str.end(), character);
        str.erase(it, str.end());
    }
}
