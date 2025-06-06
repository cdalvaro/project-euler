//
//  challenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 24/1/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#ifndef challenges_c0023_challenge_hpp
#define challenges_c0023_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge23
     @brief This class is intended to solve Challenge 23

     @link https://projecteuler.net/problem=23 @endlink
     */
    class Challenge23 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::size_t;

        /**
         @brief Class constructor

         @param limit The upper limit to check for abundant numbers

         This is the main constructor of Challenge23 class
         */
        explicit Challenge23(const std::size_t &limit);

        /**
         @brief Default destructor
         */
        ~Challenge23() override = default;

        /**
         This method contains the algorithm that solves challenge 23

         @return The solution for challenge 23
         */
        Solution_t solve() final;

    private:
        std::size_t limit; ///< The upper limit to check for abundant numbers
    };

} // namespace challenges

#endif /* challenges_c0023_challenge_hpp */
