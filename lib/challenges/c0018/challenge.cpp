//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 17/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <algorithm>
#include <limits>

#include "challenges/c0018/challenge.hpp"

using namespace challenges;

Challenge18::Challenge18(const Triangle_t &triangle) : triangle(triangle) {
}

IChallenge::Solution_t Challenge18::solve() {
    Cumulated_t cumulated{{{0, 0}, triangle.front().front()}};

    for (std::size_t index = 1; index < triangle.size(); ++index) {
        cumulated = cumulateNextLevel(cumulated, index);
    }

    Type_t max_cumulated = std::numeric_limits<Type_t>().lowest();
    for (const auto &[indexes, value] : cumulated) {
        max_cumulated = std::max(value, max_cumulated);
    }

    return max_cumulated;
}

Challenge18::Cumulated_t Challenge18::cumulateNextLevel(const Cumulated_t &cumulated,
                                                        const std::size_t &next_level_index) const {
    Cumulated_t new_cumulated;
    auto next_level = triangle[next_level_index];

    for (const auto &[indexes, value] : cumulated) {
        auto column_index = indexes.second;
        new_cumulated.push_back({{next_level_index, column_index}, value + next_level[column_index]});
        new_cumulated.push_back({{next_level_index, column_index + 1}, value + next_level[column_index + 1]});
    }

    return new_cumulated;
}
