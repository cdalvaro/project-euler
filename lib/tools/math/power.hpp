//
//  power.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 30/05/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef tools_math_power_hpp
#define tools_math_power_hpp

#include <cmath>
#include <type_traits>

#include "tools/math/concepts.hpp"

namespace tools::math {

    template <typename T>
    requires Integral<T>
    constexpr T pow10(const std::size_t &n) {
        T pow = 1;
        for (auto _n = 0u; _n < n; ++_n) {
            pow *= 10;
        }
        return pow;
    }

} // namespace tools::math

#endif /* tools_math_power_hpp */
