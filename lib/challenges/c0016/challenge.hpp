//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0016_challenge_hpp
#define challenges_c0016_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge16
     @brief This class is intended to solve Challenge 16

     @link https://projecteuler.net/problem=16 @endlink
     */
    class Challenge16 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge16 class

         @param exponent The exponent to solve the problem
         */
        Challenge16(const size_t &exponent);

        /**
         @brief Default destructor
         */
        virtual ~Challenge16() = default;

        /**
         This method contains the algorithm that solves challenge 16

         @return The solution for challenge 16
         */
        Solution_t solve() override final;

    private:
        size_t exponent; /**< The exponent of the problem */
    };
} // namespace challenges

#endif /* challenges_c0016_challenge_hpp */
