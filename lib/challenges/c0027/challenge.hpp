//
//  challenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 15/01/23.
//  Copyright © 2023 cdalvaro.io. All rights reserved.
//

#ifndef challenges_c0027_challenge_hpp
#define challenges_c0027_challenge_hpp

#include <string>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge27
     @brief This class is intended to solve Challenge 27

     @link https://projecteuler.net/problem=27 @endlink
     */
    class Challenge27 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = long;

        /**
         @brief Class constructor

         @param a_limit The maximum value for the a coefficient
         @param b_limit The maximum value for the b coefficient

         This is the main constructor of Challenge27 class
         */
        Challenge27(const size_t &a_limit, const size_t &b_limit);

        /**
         @brief Default destructor
         */
        virtual ~Challenge27() = default;

        /**
         This method contains the algorithm that solves challenge 27

         @return The solution for challenge 27
         */
        Solution_t solve() final;

    private:
        size_t a_limit; ///< The maximum value for the a coefficient
        size_t b_limit; ///< The maximum value for the b coefficient
    };

} // namespace challenges

#endif /* challenges_c0027_challenge_hpp */
