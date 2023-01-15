//
//  factorization.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 28/05/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef tools_math_factorization_hpp
#define tools_math_factorization_hpp

#include <cmath>
#include <numeric>
#include <optional>
#include <set>
#include <type_traits>
#include <utility>
#include <vector>

#include "tools/math/concepts.hpp"

namespace tools::math {

    /**
     @brief Function to check if a number is a prime number or not

     @link https://mathworld.wolfram.com/PrimeNumber.html @endlink

     @return true if number is prime, false otherwise
     */
    template <typename T>
    requires Integral<T>
    constexpr bool isPrime(const T &number) {
        if (number > 2 && number % 2 == 0) {
            return false;
        }

        T biggest_factor(std::sqrt(number));
        if (biggest_factor % 2 == 0) {
            --biggest_factor;
        }

        for (auto factor = biggest_factor; factor > 1; factor -= 2) {
            if (number % factor == 0) {
                return false;
            }
        }

        return true;
    }

    /**
     @brief Function to compute divisors for a given number

     @link https://mathworld.wolfram.com/Divisor.html @endlink

     @param number The number whose divisors are to be computed

     @return A set with divisors
     */
    template <typename T>
    requires Integral<T>
    constexpr std::set<T> divisors(const T &number) {
        std::set<T> divisors;

        T limit = std::sqrt(number);
        for (T factor = 1; factor <= limit; ++factor) {
            if (number % factor == 0) {
                divisors.insert(factor);
                divisors.insert(number / factor);
            }
        }

        return divisors;
    }

    /**
     @brief Function to factorize a number into its prime factors

     @link https://mathworld.wolfram.com/PrimeFactor.html @endlink

     @param number The number to be factorized

     @return Factor sorted in ascended order
     */
    template <typename T>
    requires Integral<T>
    constexpr std::vector<T> factorize(const T &number) {
        std::vector<T> factorization;

        auto factor = number;
        while (factor % 2 == 0) {
            factorization.push_back(2);
            factor *= 0.5;
        }

        for (T divisor = 3; divisor * divisor <= factor; divisor += 2) {
            while (factor % divisor == 0) {
                factorization.push_back(divisor);
                factor /= divisor;
            }
        }

        if (factor > 1) {
            factorization.push_back(factor);
        }

        return factorization;
    }

    /**
     @brief Returns the amicable pair for the given number if it exists

     @link https://mathworld.wolfram.com/AmicablePair.html @endlink

     @param number The number to look for its amicable pair

     @return Optional with the amicable pair if exists
     */
    template <typename T>
    requires Integral<T>
    constexpr std::optional<std::pair<T, T>> amicablePair(const T &number) {
        constexpr auto amicable_number = [](const T &number) -> T {
            auto number_divisors = divisors(number);
            T sum = std::accumulate(number_divisors.begin(), std::prev(number_divisors.end()), 0);
            return sum;
        };

        auto sum = amicable_number(number);
        if (sum == 0 || sum == number) {
            return std::nullopt;
        }

        auto amicable = amicable_number(sum);
        if (amicable == number) {
            return {{sum, amicable}};
        }

        return std::nullopt;
    }

} // namespace tools::math

#endif /* tools_math_factorization_hpp */
