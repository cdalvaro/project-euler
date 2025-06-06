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
    template <typename Return_t = std::size_t>
    class Fibonacci {
    public:
        /**
         @brief Compute the Fibonacci sequence for a given number

         @param n The index to be computed

         @return The value for the nth element of the Fibonacci sequence
         */
        Return_t operator()(const std::size_t &n) {
            if (n < 2) {
                return cache[n] = Return_t{static_cast<std::size_t>(n == 0 ? 0 : 1)};
            }

            auto it = cache.find(n);
            if (it != cache.end()) {
                return it->second;
            }

            return cache[n] = getValueForIndex(n - 1) + getValueForIndex(n - 2);
        }

        /**
         @brief Compute the next element of the Fibonacci sequence

         @return The value for the next element of the Fibonacci sequence
         */
        Return_t next() {
            return this->operator()(cache.size());
        }

    private:
        std::map<std::size_t, Return_t> cache; /**< Cache for the Fibonacci sequence */

        /**
         @brief Get the value for a given index

         @param n The index to be computed

         @return The value for the given index
         */
        inline Return_t getValueForIndex(const std::size_t &n) {
            auto it_cache = cache.find(n);
            if (it_cache != cache.end()) {
                return it_cache->second;
            }

            return cache[n] = this->operator()(n);
        }
    };

} // namespace tools::math::sequences

#endif /* tools_math_sequences_fibonacci_hpp */
