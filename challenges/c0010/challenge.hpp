//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 22/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0010_challenge_hpp
#define challenges_c0010_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge10
     @brief This class is intended to solve Challenge 10

     @link https://projecteuler.net/problem=10 @endlink
     */
    class Challenge10 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge10 class

         @param limit The limit for the maximum prime number
         */
        Challenge10(const Type_t &limit);

        /**
         @brief Default destructor
         */
        virtual ~Challenge10() = default;

        /**
         This method contains the algorithm that solves challenge 10

         @return The solution for challenge 10
         */
        std::any solve() override final;

    private:
        Type_t limit; /**< The limit for the maximum prime number */
    };
} // namespace challenges

#endif /* challenges_c0010_challenge_hpp */
