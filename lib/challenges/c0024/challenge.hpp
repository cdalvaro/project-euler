//
//  challenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 06/02/22.
//  Copyright © 2022 cdalvaro.io. All rights reserved.
//

#ifndef challenges_c0024_challenge_hpp
#define challenges_c0024_challenge_hpp

#include <string>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge24
     @brief This class is intended to solve Challenge 24

     @link https://projecteuler.net/problem=24 @endlink
     */
    class Challenge24 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::string;

        /**
         @brief Class constructor

         @param sequence The sequence to compute its lexicographic permutations
         @param nth_permutation The position of the permutation to be recovered

         This is the main constructor of Challenge24 class
         */
        Challenge24(const Type_t &sequence, const size_t &nth_permutation);

        /**
         @brief Default destructor
         */
        virtual ~Challenge24() = default;

        /**
         This method contains the algorithm that solves challenge 24

         @return The solution for challenge 24
         */
        Solution_t solve() override final;

    private:
        Type_t sequence; /**< The sequence to compute its lexicographic permutations */
        size_t nth_permutation; /**< The position of the permutation to be recovered */
    };

} // namespace challenges

#endif /* challenges_c0024_challenge_hpp */
