//
//  fibonacci.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/2022.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#ifndef tools_math_sequences_fibonacci_hpp
#define tools_math_sequences_fibonacci_hpp

#include <map>

/**
 @namespace tools::math::sequences
 @brief Math namespace with sequences functions
 */
namespace tools::math::sequences {

    /**
     @brief Compute the Fibonacci sequence for a given number

     @link https://mathworld.wolfram.com/FibonacciNumber.html @endlink
     */
    template <typename Return_t = size_t> class Fibonacci {
    public:

        /**
         @brief Compute the Fibonacci sequence for a given number

         @param n The index to be computed

         @return The value for the nth element of the Fibonacci sequence
         */
        Return_t operator()(const size_t &n) {
            if (n == 0) {
                return 0;
            }

            if (n == 1) {
                return 1;
            }

            auto it = _cache.find(n);
            if (it != _cache.end()) {
                return it->second;
            }

            auto value = getValueForIndex(n - 1) + getValueForIndex(n - 2);
            _cache[n] = value;

            return value;
        }

    private:
        std::map<size_t, Return_t> _cache; /**< Cache for the Fibonacci sequence */

        /**
         @brief Get the value for a given index

         @param n The index to be computed

         @return The value for the given index
         */
        inline Return_t getValueForIndex(const size_t &n) {
            auto it_cache = _cache.find(n);
            if (it_cache != _cache.end()) {
                return it_cache->second;
            }

            auto value = this->operator()(n);
            _cache[n] = value;

            return value;
        }
    };

} // namespace tools::math::sequences

#endif /* tools_math_sequences_fibonacci_hpp */
