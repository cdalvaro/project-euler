//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 28/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0020_challenge_hpp
#define challenges_c0020_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge20
     @brief This class is intended to solve Challenge 20

     @link https://projecteuler.net/problem=20 @endlink
     */
    class Challenge20 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         @param number The number to compute the sum of the digits of its factorial number

         This is the main constructor of Challenge20 class
         */
        explicit Challenge20(const size_t &number);

        /**
         @brief Default destructor
         */
        ~Challenge20() override = default;

        /**
         This method contains the algorithm that solves challenge 20

         @return The solution for challenge 20
         */
        Solution_t solve() final;

    private:
        size_t number; ///< The number to compute the sum of the digits of its factorial number
    };
} // namespace challenges

#endif /* challenges_c0020_challenge_hpp */
