//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0009_challenge_hpp
#define challenges_c0009_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge9
     @brief This class is intended to solve Challenge 9

     @link https://projecteuler.net/problem=9 @endlink
     */
    class Challenge9 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge9 class

         @param number The number to be reached by the Pythagorean triplet
         */
        explicit Challenge9(const Type_t &number);

        /**
         @brief Default destructor
         */
        ~Challenge9() override = default;

        /**
         This method contains the algorithm that solves challenge 9

         @return The solution for challenge 9
         */
        Solution_t solve() final;

    private:
        Type_t number; ///< The number to be reached by the Pythagorean triplet
    };
} // namespace challenges

#endif /* challenges_c0009_challenge_hpp */
