//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0013_challenge_hpp
#define challenges_c0013_challenge_hpp

#include "challenges/tools/types/big_int.hpp"

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge13
     @brief This class is intended to solve Challenge 13

     @link https://projecteuler.net/problem=13 @endlink
     */
    class Challenge13 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge13 class
         */
        Challenge13();

        /**
         @brief Default destructor
         */
        virtual ~Challenge13() = default;

        /**
         This method contains the algorithm that solves challenge 13

         @return The solution for challenge 13
         */
        Solution_t solve() override final;

    private:
        static const std::vector<tools::types::BigInt> bigints;
    };
} // namespace challenges

#endif /* challenges_c0013_challenge_hpp */
