//
//  factorial.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 11/06/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef tools_math_factorial_hpp
#define tools_math_factorial_hpp

#include <type_traits>

namespace tools::math {

    /**
     @brief Function to compute the factorial of a number

     @return The factorial for the given number
     */
    template <typename Integer_t = size_t, typename Return_t = Integer_t,
              typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr Return_t factorial(const Integer_t &number) {
        if (number < 2) {
            return Return_t{1};
        }
        Return_t product{2};
        for (Integer_t factor = 3; factor <= number; ++factor) {
            product *= Return_t{factor};
        }
        return product;
    }

} // namespace tools::math

#endif /* tools_math_factorial_hpp */
