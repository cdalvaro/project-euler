//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 03/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0021_challenge_hpp
#define challenges_c0021_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge21
     @brief This class is intended to solve Challenge 21

     @link https://projecteuler.net/problem=21 @endlink
     */
    class Challenge21 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         @param limit The maximum number to find amicable numbers

         This is the main constructor of Challenge21 class
         */
        explicit Challenge21(const size_t &limit);

        /**
         @brief Default destructor
         */
        ~Challenge21() override = default;

        /**
         This method contains the algorithm that solves challenge 21

         @return The solution for challenge 21
         */
        Solution_t solve() final;

    private:
        size_t limit; ///< The maximum number to find amicable numbers
    };

} // namespace challenges

#endif /* challenges_c0021_challenge_hpp */
