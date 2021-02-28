//
//  namedNumberWrapper.cpp
//  Tests
//
//  Created by Carlos David on 28/2/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <sstream>

#include "challenges/tools/types/named_number.hpp"

using namespace challenges::tools::types;

extern "C" char *nameForNumber(long long number) {
    auto named_number = NamedNumber(number).getName();
    auto size = named_number.size();

    char *name = new char[size + 1];
    name[size] = '\0';

    std::copy(named_number.begin(), named_number.end(), name);

    return name;
}
