//
//  big_int.cpp
//  Challenges
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <charconv>
#include <numeric>
#include <sstream>
#include <string>

#include "challenges/tools/types/big_int.hpp"

using namespace challenges::tools::types;

BigInt::BigInt() {
}

BigInt::BigInt(const size_t &number) : BigInt{std::to_string(number)} {
}

BigInt::BigInt(const char *number) : BigInt{std::string_view{number}} {
}

BigInt::BigInt(const std::string_view &number) {
    this->number.reserve(number.size());
    std::transform(number.begin(), number.end(), std::back_inserter(this->number), [](const auto &character) {
        return character - '0';
    });
}

BigInt::BigInt(const BigInt &number) : number(number.number) {
}

BigInt::BigInt(BigInt &&number) : number(std::move(number.number)) {
    number.number = {};
}

BigInt::BigInt_t::iterator BigInt::begin() {
    return number.begin();
}

BigInt::BigInt_t::const_iterator BigInt::begin() const {
    return number.begin();
}

BigInt::BigInt_t::iterator BigInt::end() {
    return number.end();
}

BigInt::BigInt_t::const_iterator BigInt::end() const {
    return number.end();
}

BigInt &BigInt::operator=(const BigInt &rhs) {
    if (this != &rhs) {
        this->number = rhs.number;
    }
    return *this;
}

BigInt &BigInt::operator=(BigInt &&rhs) {
    if (this != &rhs) {
        this->number = std::move(rhs.number);
        rhs.number = {};
    }
    return *this;
}

BigInt &BigInt::operator+=(const BigInt &rhs) {
    *this = *this + rhs;
    return *this;
}

BigInt BigInt::operator+(const BigInt &rhs) const {
    BigInt sum = *this < rhs ? rhs : *this;
    const auto other = *this < rhs ? this : &rhs;

    auto it_last = std::next(sum.number.rbegin(), other->number.size());
    if (it_last == sum.number.rbegin()) {
        return sum;
    }

    BigInt_t::value_type reminder = 0;
    auto it_other = other->number.rbegin();
    for (auto it = sum.number.rbegin(); it != it_last; ++it, ++it_other) {
        auto sum = *it + *it_other + reminder;
        *it = sum % 10;
        reminder = (sum - *it) / 10;
    }

    while (reminder > 0) {
        if (it_last == sum.number.rend()) {
            sum.number.insert(sum.number.begin(), reminder);
            reminder = 0;
        } else {
            auto sum = *it_last + reminder;
            *it_last = sum % 10;
            reminder = (sum - *it_last) / 10;
            ++it_last;
        }
    }

    return sum;
}

bool BigInt::operator==(const BigInt &rhs) {
    if (this->number.size() != rhs.number.size()) {
        return false;
    }

    auto it_number = this->number.begin();
    auto it_rhs = rhs.begin();
    for (; it_number != this->number.end(); ++it_number, ++it_rhs) {
        if (*it_number != *it_rhs) {
            return false;
        }
    }

    return true;
}

bool BigInt::operator<(const BigInt &rhs) const {
    if (this->number.size() < rhs.number.size()) {
        return true;
    }

    if (this->number.size() > rhs.number.size()) {
        return false;
    }

    auto it_number = this->number.begin();
    auto it_rhs = rhs.begin();
    for (; it_number != this->number.end(); ++it_number, ++it_rhs) {
        if (*it_number != *it_rhs) {
            return *it_number < *it_rhs;
        }
    }

    return false;
}

BigInt::operator std::string_view() const {
    auto snumber = std::accumulate(begin(), end(), std::string{""}, [](const auto &s, const auto &n) {
        return s + std::to_string(n);
    });
    return std::string_view{snumber};
}

BigInt::operator size_t() const {
    auto sv = std::string_view{*this};
    size_t number;
    if (auto [p, ec] = std::from_chars(sv.data(), sv.end(), number); ec != std::errc()) {
        std::stringstream message;
        message << "BigInt (" << sv << ") to big to be casted to size_t";
        throw std::logic_error(message.str());
    }
    return number;
}
