//
//  big_int.cpp
//  Challenges
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <charconv>
#include <limits>
#include <numeric>
#include <sstream>

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
    BigInt sum;
    const BigInt *other;
    if (*this < rhs) {
        sum = rhs;
        other = this;
    } else {
        sum = *this;
        other = &rhs;
    }

    if (other->isZero()) {
        return sum;
    }

    BigInt_t::value_type reminder = 0;
    auto it_other = other->number.rbegin();
    auto it_last = std::next(sum.number.rbegin(), other->number.size());
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

BigInt &BigInt::operator*=(const BigInt &rhs) {
    *this = *this * rhs;
    return *this;
}

BigInt BigInt::operator*(const BigInt &rhs) const {
    if (this->isZero() || rhs.isZero()) {
        return BigInt("0");
    }

    BigInt product;
    for (auto it_rhs = rhs.number.rbegin(); it_rhs != rhs.number.rend(); ++it_rhs) {
        auto tmp = *this;
        tmp.multiplyBy(*it_rhs).multiplyBy10(std::distance(rhs.number.rbegin(), it_rhs));
        product += tmp;
    }

    return product;
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

bool BigInt::isZero() const {
    return number.size() == 1 && number.front() == 0;
}

bool BigInt::isNil() const {
    return number.empty();
}

std::string BigInt::str() const {
    return std::accumulate(begin(), end(), std::string{""}, [](const auto &s, const auto &n) {
        return s + std::to_string(n);
    });
}

BigInt::operator std::string() const {
    return this->str();
}

BigInt::operator size_t() const {
    long double value = 0;
//    std::string_view sv{str()};
//    auto result = std::from_chars(sv.begin(), sv.end(), value);
//    if (result.ec == std::errc::result_out_of_range || value > std::numeric_limits<size_t>::max()) {
//        std::stringstream message;
//        message << "BigInt (" << sv << ") to big to be casted to size_t";
//        throw std::out_of_range(message.str());
//    }
    for (auto it = number.rbegin(); it != number.rend(); ++it) {
        auto exponent = std::distance(number.rbegin(), it);
        value += *it * std::pow(10, exponent);
    }

    if (value > std::numeric_limits<size_t>::max()) {
        std::stringstream message;
        message << "BigInt (" << value << ") to big to be casted to size_t";
        throw std::out_of_range(message.str());
    }

    return static_cast<size_t>(value);
}

BigInt &BigInt::multiplyBy(const BigInt_t::value_type &small_int) {
    BigInt_t::value_type reminder = 0;
    for (auto it = number.rbegin(); it != number.rend(); ++it) {
        auto product = *it * small_int + reminder;
        *it = product % 10;
        reminder = (product - *it) / 10;
    }

    if (reminder > 0) {
        number.insert(number.begin(), reminder);
    }

    return *this;
}

BigInt &BigInt::multiplyBy10(const size_t &times) {
    number.insert(number.end(), times, 0);
    return *this;
}
