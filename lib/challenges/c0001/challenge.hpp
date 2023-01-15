//
//  challenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 24/05/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef challenges_c0001_challenge_hpp
#define challenges_c0001_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge1
     @brief This class is intended to solve Challenge 1

     @link https://projecteuler.net/problem=1 @endlink
     */
    class Challenge1 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = long;

        /**
         @brief Class constructor

         This is the main constructor of Challenge1 class

         @param limit The last number to be summed
         */
        explicit Challenge1(const Type_t &limit);

        /**
         @brief Class destructor
         */
        ~Challenge1() override = default;

        /**
         This method contains the algorithm that solves challenge 1

         @return The solution for challenge 1
         */
        Solution_t solve() final;

    private:
        Type_t limit; ///< The last number to be summed by the algorithm
    };

} // namespace challenges

#endif /* challenges_c0001_challenge_hpp */
