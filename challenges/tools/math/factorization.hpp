//
//  factorization.hpp
//  Challenges
//
//  Created by Carlos David on 28/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_math_factorization_hpp
#define challenges_tools_math_factorization_hpp

#include <cmath>
#include <type_traits>
#include <set>
#include <vector>

/**
 @namespace challenges::tools::math
 @brief Math namespace with mathematical functions
 */
namespace challenges::tools::math {
    
    /**
     @brief Function to check if a number is a prime number or not
     
     @return true if number is prime, false otherwise
     */
    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr bool isPrime(const Integer_t &number) {
        Integer_t biggest_factor(std::sqrt(number));
        
        if ((number - 1) % 6 != 0 && (number + 1) % 6 != 0) {
            return false;
        }
        
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
     
     Number 1 and self-number are not returned
     
     @param number The number whose divisors are to be computed
     
     @return A set with divisors
     */
    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr std::set<Integer_t> divisors(const Integer_t &number) {
        std::set<Integer_t> divisors;
        
        Integer_t half_number = number / 2;
        for (Integer_t factor = 2; factor <= half_number; ++factor) {
            if (number % factor == 0) {
                divisors.insert(factor);
            }
        }
        
        return divisors;
    }
    
    /**
     @brief Function to factorize a number
     
     @param number The number to be factorized
     
     @return Factor sorted in ascended order
     */
    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr std::vector<Integer_t> factorize(const Integer_t &number) {
        std::vector<Integer_t> factorization;
        
        auto factor = number;
        while (factor % 2 == 0) {
            factorization.push_back(2);
            factor /= 2;
        }
        
        for (Integer_t divisor = 3; divisor * divisor <= factor; divisor += 2) {
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
    
}

#endif /* challenges_tools_math_factorization_hpp */
