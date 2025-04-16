//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 27/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0014_challenge_hpp
#define challenges_c0014_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge14
     @brief This class is intended to solve Challenge 14

     @link https://projecteuler.net/problem=14 @endlink
     */
    class Challenge14 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge14 class

         @param maximum_number The maximum starting number
         */
        explicit Challenge14(const Type_t &maximum_number);

        /**
         @brief Default destructor
         */
        ~Challenge14() override = default;

        /**
         This method contains the algorithm that solves challenge 14

         @return The solution for challenge 14
         */
        Solution_t solve() final;

    private:
        Type_t maximum_number; ///< The maximum starting number
    };
} // namespace challenges

#endif /* challenges_c0014_challenge_hpp */
