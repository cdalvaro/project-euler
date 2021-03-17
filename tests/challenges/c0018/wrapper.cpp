//
//  wrapper.cpp
//  Tests
//
//  Created by Carlos David on 17/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0018/challenge.hpp"

using namespace challenges;

extern "C" long long solveChallenge18(long long *triangle, unsigned long long number_of_elements) {
    Challenge18::Triangle_t _triangle;

    size_t row_index = 0;
    Challenge18::Row_t row;
    for (size_t index = 0; index < number_of_elements; ++index) {
        row.push_back(triangle[index]);
        if (row.size() > row_index) {
            _triangle.push_back(row);
            row.clear();
            ++row_index;
        }
    }

    return std::any_cast<Challenge18::Type_t>(Challenge18(_triangle).solve());
}
