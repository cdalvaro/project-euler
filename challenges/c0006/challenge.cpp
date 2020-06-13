//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 13/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0006/challenge.hpp"

using namespace challenges;

Challenge6::Challenge6(const Type_t &last_number) :
last_number(last_number) {
    
}

std::any Challenge6::solve() {
    Type_t square_sum = 0;
    Type_t sum_squares = 0;
    
    for (Type_t number = 1; number <= last_number; ++number) {
        square_sum += number;
        sum_squares += number * number;
    }
    
    square_sum *= square_sum;
    
    return square_sum - sum_squares;
}
