//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 25/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include "challenges/c0019/challenge.hpp"

using namespace challenges;

Challenge19::Challenge19(const int &first_year, const int &last_year) : first_year(first_year), last_year(last_year) {
}

IChallenge::Solution_t Challenge19::solve() {
    constexpr int first_of_month = 1;
    constexpr int sunday = 0;
    constexpr std::chrono::hours one_day(24);

    size_t number_of_sundays = 0;
    const auto final_date = dateFor(last_year, 12, 31);

    for (auto date = dateFor(first_year, 1, 1); date <= final_date; date += one_day) {
        auto tm_date = tmFrom(date);
        if (tm_date.tm_mday == first_of_month && tm_date.tm_wday == sunday) {
            ++number_of_sundays;
        }
    }

    return number_of_sundays;
}

Challenge19::Date_t Challenge19::dateFor(const int &year, const int &month, const int &day) {
    std::tm tm_date{};
    tm_date.tm_mday = day;
    tm_date.tm_mon = month - 1;
    tm_date.tm_year = year - 1900;
    tm_date.tm_hour = 0;
    tm_date.tm_min = 0;
    tm_date.tm_sec = 0;

    return Clock_t::from_time_t(std::mktime(&tm_date));
}

std::tm Challenge19::tmFrom(const Date_t &date) {
    auto time = Clock_t::to_time_t(date);
    return *gmtime(&time);
}
