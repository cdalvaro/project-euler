//
//  collatz.hpp
//  Challenges
//
//  Created by Carlos David on 27/7/20.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_math_sequences_collatz_hpp
#define challenges_tools_math_sequences_collatz_hpp

#include <vector>

/**
 @namespace challenges::tools::math::sequences
 @brief Math namespace with sequences functions
 */
namespace challenges::tools::math::sequences {
    
    /**
     @brief Compute the Collatz sequence for a given number
     
     @param seed The number to start the sequence from
     
     @return A vector with the sequence
     */
    std::vector<size_t> collatz(const size_t &seed);
}

#endif /* challenges_tools_math_sequences_collatz_hpp */
