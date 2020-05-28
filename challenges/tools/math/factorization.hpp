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
    bool isPrime(const Integer_t &number) {
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
}

#endif /* challenges_tools_math_factorization_hpp */
