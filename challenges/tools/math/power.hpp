//
//  power.hpp
//  Challenges
//
//  Created by Carlos David on 30/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_math_power_hpp
#define challenges_tools_math_power_hpp

#include <cmath>
#include <type_traits>

namespace challenges::tools::math {

    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    constexpr Integer_t pow10(const size_t &n) {
        Integer_t pow = 1;
        for (auto __n = 0u; __n < n; ++__n) {
            pow *= 10;
        }
        return pow;
    }
} // namespace challenges::tools::math

#endif /* challenges_tools_math_power_hpp */
