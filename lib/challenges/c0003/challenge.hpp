//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 28/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0003_challenge_hpp
#define challenges_c0003_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge3
     @brief This class is intended to solve Challenge 3

     @link https://projecteuler.net/problem=3 @endlink
     */
    class Challenge3 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = uint64_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge 3 class

         @param number The number whose biggest prime factor is going to be
         computed
         */
        Challenge3(const Type_t &number);

        /**
         @brief Default constructor
         */
        virtual ~Challenge3() = default;

        /**
         This method contains the algorithm that solves challenge 3

         @return The solution for challenge 3
         */
        Solution_t solve() override final;

    private:
        Type_t number; /**< The number whose biggest prime factor is going to be
                          computed */
    };
} // namespace challenges

#endif /* challenges_c0003_challenge_hpp */
