//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 14/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0007/challenge.hpp"
#include "challenges/tools/math/factorization.hpp"

using namespace challenges;

Challenge7::Challenge7(const Type_t &nth_prime) : nth_prime(nth_prime) {
}

IChallenge::Solution_t Challenge7::solve() {
    size_t prime_numbers_found = 2;
    Type_t prime_found = 3;

    while (prime_numbers_found < nth_prime) {
        prime_found += 2;
        if (tools::math::isPrime(prime_found)) {
            ++prime_numbers_found;
        }
    }

    return prime_found;
}
