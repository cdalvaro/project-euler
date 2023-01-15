//
//  challenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 24/05/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef challenges_c0002_challenge_hpp
#define challenges_c0002_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge2
     @brief This class is intended to solve Challenge 2

     @link https://projecteuler.net/problem=2 @endlink
     */
    class Challenge2 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = long;

        /**
         @brief Class constructor

         This is the main constructor of Challenge 2 class

         @param limit The limit for the last number of Fibonacci sequence
         */
        explicit Challenge2(const Type_t &limit);

        /**
         @brief Default constructor
         */
        ~Challenge2() override = default;

        /**
         This method contains the algorithm that solves challenge 2

         @return The solution for challenge 2
         */
        Solution_t solve() final;

    private:
        Type_t limit; ///< The limit for the last number of Fibonacci sequence
    };

} // namespace challenges

#endif /* challenges_c0002_challenge_hpp */
