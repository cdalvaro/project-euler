//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 06/08/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include "challenges/c0015/challenge.hpp"

using namespace challenges;

Challenge15::Challenge15(const size_t &width, const size_t &height) :
lattice({width, height}) {
    
}

std::any Challenge15::solve() {
    return getNumberOfPaths(lattice);
}

Challenge15::Type_t Challenge15::getNumberOfPaths(const Lattice_t &lattice) {
    auto it_cache = paths_cache.find(lattice);
    if (it_cache != paths_cache.end()) {
        return it_cache->second;
    }

    auto number_of_paths = computeNumberOfPaths(lattice);
    paths_cache[lattice] = number_of_paths;

    return number_of_paths;
}

Challenge15::Type_t Challenge15::computeNumberOfPaths(const Lattice_t &lattice) {
    auto [width, height] = lattice;
    if (width == 0 && height == 0) {
        return 1;
    }

    size_t number_of_paths = 0;
    
    if (width > 0) {
        number_of_paths += getNumberOfPaths({width - 1, height});
    }

    if (height > 0) {
        number_of_paths += getNumberOfPaths({width, height - 1});
    }

    return number_of_paths;
}
