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

namespace tools::math {

    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr Integer_t pow10(const size_t &n) {
        Integer_t pow = 1;
        for (auto __n = 0u; __n < n; ++__n) {
            pow *= 10;
        }
        return pow;
    }

} // namespace tools::math

#endif /* tools_math_power_hpp */
