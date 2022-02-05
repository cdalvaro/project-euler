//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 29/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <cmath>

#include "challenges/c0004/challenge.hpp"
#include "tools/math/factorization.hpp"
#include "tools/math/power.hpp"

using namespace challenges;

Challenge4::Challenge4(const size_t &number_of_digits, const size_t &number_of_products) :
number_of_digits(number_of_digits), number_of_products(number_of_products) {
}

IChallenge::Solution_t Challenge4::solve() {
    Type_t factor = 0;
    for (auto n = 0u; n < number_of_digits; ++n) {
        factor += 9 * tools::math::pow10<Type_t>(n);
    }

    Type_t number = std::pow(factor, number_of_products);
    if (isPalindromic(number)) {
        return number;
    }

    do {
        number = findNextPalindrome(number);
    } while (!checkDivisors(number, number_of_products));

    return number;
}

bool Challenge4::checkDivisors(const Type_t &number, const size_t &depth) const {
    if (depth == 1) {
        return getNumberOfDigits(number) == number_of_digits;
    }

    std::set<Type_t> divisors;
    for (const auto &divisor : tools::math::divisors(number)) {
        if (getNumberOfDigits(divisor) == number_of_digits) {
            divisors.insert(divisor);
        }
    }

    if (divisors.empty() || divisors.size() < depth) {
        return false;
    }

    for (const auto &divisor : divisors) {
        Type_t new_number = number / divisor;
        if (checkDivisors(new_number, depth - 1)) {
            return true;
        }
    }

    return false;
}

bool Challenge4::isPalindromic(const Type_t &number) {
    return number == flip(number);
}

Challenge4::Type_t Challenge4::findNextPalindrome(const Type_t &number) {
    size_t number_of_digits = getNumberOfDigits(number);

    auto first_part_power = tools::math::pow10<Type_t>(number_of_digits / 2);
    Type_t first_part = number / first_part_power;
    Type_t second_part = number - first_part * first_part_power;

    Type_t truncator = number_of_digits % 2 == 1 ? 10 : 1;
    Type_t new_second_part = flip(first_part / truncator);
    if (new_second_part >= second_part) {
        first_part -= 1;
        new_second_part = flip(first_part / truncator);
    }

    return first_part * first_part_power + new_second_part;
}

size_t Challenge4::getNumberOfDigits(const Type_t &number) {
    return std::floor(std::log10(number)) + 1;
}

Challenge4::Type_t Challenge4::flip(Type_t number) {
    Type_t reversed_number = 0;
    while (number != 0) {
        reversed_number = reversed_number * 10 + number % 10;
        number /= 10;
    }
    return reversed_number;
}
