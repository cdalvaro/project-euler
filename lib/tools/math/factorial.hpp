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

#include "tools/math/concepts.hpp"

namespace tools::math {

    /**
     @brief Function to compute the factorial of a number

     @return The factorial for the given number
     */
    template <typename T = size_t, typename Return_t = T>
        requires Integral<T>
    constexpr Return_t factorial(const T &number) {
        if (number < 2) {
            return Return_t{1};
        }
        Return_t product{2};
        for (T factor = 3; factor <= number; ++factor) {
            product *= Return_t{factor};
        }
        return product;
    }

} // namespace tools::math

#endif /* tools_math_factorial_hpp */
