//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 13/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0006_challenge_hpp
#define challenges_c0006_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge6
     @brief This class is intended to solve Challenge 6

     @link https://projecteuler.net/problem=6 @endlink
     */
    class Challenge6 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge6 class

         @param last_number The las number of the serires
         */
        explicit Challenge6(const Type_t &last_number);

        /**
         @brief Default destructor
         */
        ~Challenge6() override = default;

        /**
         This method contains the algorithm that solves challenge 6

         @return The solution for challenge 6
         */
        Solution_t solve() final;

    private:
        Type_t last_number; ///< The las number of the series
    };
} // namespace challenges

#endif /* challenges_c0006_challenge_hpp */
