//
//  wrapperNumberProperties.cpp
//  Tests
//
//  Created by Carlos Álvaro on 28/1/22.
//  Copyright © 2022 cdalvaro. All rights reserved.
//

#include "challenges/tools/math/number_properties.hpp"

using namespace challenges::tools;

extern "C" short isAbundant(unsigned long long number) {
    return math::isAbundant(number) ? 1 : 0;
}

extern "C" short isDeficient(unsigned long long number) {
    return math::isDeficient(number) ? 1 : 0;
}

extern "C" short isPerfect(unsigned long long number) {
    return math::isPerfect(number) ? 1 : 0;
}
