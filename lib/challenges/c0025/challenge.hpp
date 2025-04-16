//
//  challenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 12/02/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#ifndef challenges_c0025_challenge_hpp
#define challenges_c0025_challenge_hpp

#include <string>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge25
     @brief This class is intended to solve Challenge 25

     @link https://projecteuler.net/problem=25 @endlink
     */
    class Challenge25 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::size_t;

        /**
         @brief Class constructor

         @param number_of_digits The number of digits of the number to be found

         This is the main constructor of Challenge25 class
         */
        explicit Challenge25(const std::size_t &number_of_digits);

        /**
         @brief Default destructor
         */
        ~Challenge25() override = default;

        /**
         This method contains the algorithm that solves challenge 25

         @return The solution for challenge 25
         */
        Solution_t solve() final;

    private:
        std::size_t number_of_digits; ///< The number of digits of the number to be found
    };

} // namespace challenges

#endif /* challenges_c0025_challenge_hpp */
