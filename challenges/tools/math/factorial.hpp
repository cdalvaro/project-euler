//
//  factorial.hpp
//  Challenges
//
//  Created by Carlos David on 11/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_math_factorial_hpp
#define challenges_tools_math_factorial_hpp

#include <type_traits>

/**
 @namespace challenges::tools::math
 @brief Math namespace with mathematical functions
 */
namespace challenges::tools::math {

    /**
     @brief Function to compute the factorial of a number

     @return The factorial for the given number
     */
    template <typename Integer_t = size_t, typename Return_t = Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr Return_t factorial(const Integer_t &number) {
        Return_t product{2};
        for (Integer_t factor = 3; factor <= number; ++factor) {
            product *= static_cast<Return_t>(factor);
        }
        return product;
    }
} // namespace challenges::tools::math

#endif /* challenges_tools_math_factorial_hpp */
