//
//  tools.cpp
//  Tests
//
//  Created by Carlos Álvaro on 2/4/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <exception>

extern "C" short throwsToBool(void (*block)()) {
    try {
        (*block)();
    } catch (const std::exception &) {
        return 1;
    }
    return 0;
}
