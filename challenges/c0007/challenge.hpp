//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 14/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0007_challenge_hpp
#define challenges_c0007_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge7
     @brief This class is intended to solve Challenge 7

     @link https://projecteuler.net/problem=7 @endlink
     */
    class Challenge7 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge7 class

         @param nth_prime The nth prime number to find
         */
        Challenge7(const Type_t &nth_prime);

        /**
         @brief Default destructor
         */
        virtual ~Challenge7() = default;

        /**
         This method contains the algorithm that solves challenge 7

         @return The solution for challenge 7
         */
        std::any solve() override final;

    private:
        Type_t nth_prime; /**< The nth prime number to find */
    };
} // namespace challenges

#endif /* challenges_c0007_challenge_hpp */
