//
//  collatz.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 27/7/20.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef tools_math_sequences_collatz_hpp
#define tools_math_sequences_collatz_hpp

#include <vector>

/**
 @namespace tools::math::sequences
 @brief Math namespace with sequences functions
 */
namespace tools::math::sequences {

    /**
     @brief Compute the Collatz sequence for a given number

     @param seed The number to start the sequence from

     @return A vector with the sequence
     */
    std::vector<std::size_t> collatz(const std::size_t &seed);

} // namespace tools::math::sequences

#endif /* tools_math_sequences_collatz_hpp */
