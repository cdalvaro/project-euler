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
            auto it = _cache.find(n);
            if (it != _cache.end()) {
                return it->second;
            }

            auto value = getValueForIndex(n - 1) + getValueForIndex(n - 2);
            _cache[n] = value;

            return value;
        }

        /**
         @brief Compute the next element of the Fibonacci sequence

         @return The value for the next element of the Fibonacci sequence
         */
        Return_t next() {
            return this->operator()(_cache.size());
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

            Return_t value;
            if (n > 1) {
                value = this->operator()(n);
            } else {
                value = n == 0 ? size_t(0) : size_t(1);
            }

            _cache[n] = value;
            return value;
        }
    };

} // namespace tools::math::sequences

#endif /* tools_math_sequences_fibonacci_hpp */
