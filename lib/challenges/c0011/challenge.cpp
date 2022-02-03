//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 22/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <numeric>
#include <set>

#include "challenges/c0011/challenge.hpp"

using namespace challenges;

// clang-format off
const Challenge11::Matrix_t Challenge11::matrix = {
    {  8,  2, 22, 97, 38, 15,  0, 40,  0, 75,  4,  5,  7, 78, 52, 12, 50, 77, 91,  8 },
    { 49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48,  4, 56, 62,  0 },
    { 81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30,  3, 49, 13, 36, 65 },
    { 52, 70, 95, 23,  4, 60, 11, 42, 69, 24, 68, 56,  1, 32, 56, 71, 37,  2, 36, 91 },
    { 22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80 },
    { 24, 47, 32, 60, 99,  3, 45,  2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50 },
    { 32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70 },
    { 67, 26, 20, 68,  2, 62, 12, 20, 95, 63, 94, 39, 63,  8, 40, 91, 66, 49, 94, 21 },
    { 24, 55, 58,  5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72 },
    { 21, 36, 23,  9, 75,  0, 76, 44, 20, 45, 35, 14,  0, 61, 33, 97, 34, 31, 33, 95 },
    { 78, 17, 53, 28, 22, 75, 31, 67, 15, 94,  3, 80,  4, 62, 16, 14,  9, 53, 56, 92 },
    { 16, 39,  5, 42, 96, 35, 31, 47, 55, 58, 88, 24,  0, 17, 54, 24, 36, 29, 85, 57 },
    { 86, 56,  0, 48, 35, 71, 89,  7,  5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58 },
    { 19, 80, 81, 68,  5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77,  4, 89, 55, 40 },
    {  4, 52,  8, 83, 97, 35, 99, 16,  7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66 },
    { 88, 36, 68, 87, 57, 62, 20, 72,  3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69 },
    {  4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18,  8, 46, 29, 32, 40, 62, 76, 36 },
    { 20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74,  4, 36, 16 },
    { 20, 73, 35, 29, 78, 31, 90,  1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57,  5, 54 },
    {  1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52,  1, 89, 19, 67, 48 },
};
// clang-format on

const size_t Challenge11::number_of_rows = Challenge11::matrix.size();
const size_t Challenge11::number_of_columns = Challenge11::matrix.front().size();

Challenge11::Challenge11(const Type_t &numbers_to_take) : numbers_to_take(numbers_to_take) {
}

IChallenge::Solution_t Challenge11::solve() {
    Type_t max_product = 1;
    for (auto row = 0u; row < number_of_rows; ++row) {
        for (auto column = 0u; column < number_of_columns; ++column) {
            max_product = std::max(max_product, maxProductForPosition(row, column));
        }
    }
    return max_product;
}

Challenge11::Type_t Challenge11::maxProductForPosition(const size_t &row, const size_t &column) const {
    std::set<Type_t> products;

    // Horizontal: Left -> Right
    auto valid_column = column + numbers_to_take < number_of_columns;
    if (valid_column) {
        auto it_first = std::next(matrix[row].begin(), column);
        auto it_last = std::next(it_first, numbers_to_take);
        products.insert(std::accumulate(it_first, it_last, Type_t(1), std::multiplies<Type_t>()));
    }

    // Vertical: Top -> Bottom
    auto valid_row = row + numbers_to_take < number_of_rows;
    if (valid_row) {
        auto it_first = std::next(matrix.begin(), row);
        auto it_last = std::next(it_first, numbers_to_take);
        products.insert(std::accumulate(it_first, it_last, Type_t(1), [&column](const auto &a, const auto &b) {
            return a * b[column];
        }));
    }

    // Diagonal: Left -> Right
    if (valid_column && valid_row) {
        auto it_first = std::next(matrix.begin(), row);
        auto it_last = std::next(it_first, numbers_to_take);

        auto _column = column;
        products.insert(std::accumulate(it_first, it_last, Type_t(1), [&_column](const auto &a, const auto &b) {
            return a * b[_column++];
        }));
    }

    // Diagonal: Right -> Left
    if (valid_row && column >= numbers_to_take - 1 && column < number_of_columns) {
        auto it_first = std::next(matrix.begin(), row);
        auto it_last = std::next(it_first, numbers_to_take);

        auto _column = column;
        products.insert(std::accumulate(it_first, it_last, Type_t(1), [&_column](const auto &a, const auto &b) {
            return a * b[_column--];
        }));
    }

    return (*products.rbegin());
}
