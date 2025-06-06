//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0012_challenge_hpp
#define challenges_c0012_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge12
     @brief This class is intended to solve Challenge 12

     @link https://projecteuler.net/problem=12 @endlink
     */
    class Challenge12 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge12 class

         @param numbers_of_divisors The number of divisors for the searched
         number
         */
        explicit Challenge12(const Type_t &numbers_of_divisors);

        /**
         @brief Default destructor
         */
        ~Challenge12() override = default;

        /**
         This method contains the algorithm that solves challenge 12

         @return The solution for challenge 12
         */
        Solution_t solve() final;

    private:
        Type_t numbers_of_divisors; ///< The number of divisors for the searched number
    };
} // namespace challenges

#endif /* challenges_c0012_challenge_hpp */
