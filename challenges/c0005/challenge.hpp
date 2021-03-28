//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 11/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0005_challenge_hpp
#define challenges_c0005_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge5
     @brief This class is intended to solve challenge #5

     @link https://projecteuler.net/problem=5 @endlink
     */
    class Challenge5 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge5 class

         @param last_number The las number starting from 1 to be divisible
         without remainder
         */
        Challenge5(const Type_t &last_number);

        /**
         @brief Default constructor
         */
        virtual ~Challenge5() = default;

        /**
         This method contains the algorithm that solves challenge #5

         @return The solution for challenge #5
         */
        std::any solve() override final;

    private:
        Type_t last_number; /**< The las number starting from 1 to be divisible
                               without remainder */
    };
} // namespace challenges

#endif /* challenges_c0005_challenge_hpp */
