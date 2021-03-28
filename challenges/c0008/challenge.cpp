//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <exception>

#include "challenges/c0008/challenge.hpp"

using namespace challenges;

// clang-format off
const std::string_view Challenge8::big_number {
    "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843"
    "8586156078911294949545950173795833195285320880551112540698747158523863050715693290963295227443043557"
    "6689664895044524452316173185640309871112172238311362229893423380308135336276614282806444486645238749"
    "3035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776"
    "6572733300105336788122023542180975125454059475224352584907711670556013604839586446706324415722155397"
    "5369781797784617406495514929086256932197846862248283972241375657056057490261407972968652414535100474"
    "8216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586"
    "1786645835912456652947654568284891288314260769004224219022671055626321111109370544217506941658960408"
    "0719840385096245544436298123098787992724428490918884580156166097919133875499200524063689912560717606"
    "0588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450"
};
// clang-format on

Challenge8::Challenge8(const Type_t &number_of_digits) : number_of_digits(number_of_digits) {
    if (number_of_digits > big_number.size()) {
        throw std::logic_error("The given number of digits is greater than the "
                               "number of digits of the big number");
    }
}

std::any Challenge8::solve() {
    auto it_lhs = big_number.begin();
    auto it_rhs = std::next(it_lhs, number_of_digits);

    Type_t biggest_product = accumulate(it_lhs, it_rhs);

    it_lhs = it_rhs;
    it_rhs = std::next(it_lhs, number_of_digits);
    for (; it_rhs != big_number.end(); ++it_lhs, ++it_rhs) {
        biggest_product = std::max(biggest_product, accumulate(it_lhs, it_rhs));
    }

    return biggest_product;
}

Challenge8::Type_t Challenge8::accumulate(std::string_view::const_iterator first, std::string_view::const_iterator last) {
    Type_t product = 1;
    for (auto it = first; it != last; ++it) {
        product *= *it - '0';
    }
    return product;
}
