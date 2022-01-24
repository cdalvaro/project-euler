//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0017_challenge_hpp
#define challenges_c0017_challenge_hpp

#include <set>
#include <string>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge17
     @brief This class is intended to solve Challenge 17

     @link https://projecteuler.net/problem=17 @endlink
     */
    class Challenge17 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge17 class

         @param first The first number of the sequence
         @param last The last number of the sequence
         */
        Challenge17(const size_t &first, const size_t &last);

        /**
         @brief Default destructor
         */
        virtual ~Challenge17() = default;

        /**
         This method contains the algorithm that solves challenge 17

         @return The solution for challenge 17
         */
        Solution_t solve() override final;

    private:
        size_t first; /**< The first number of the sequence */
        size_t last;  /**< The last number of the sequence */

        /**
         @brief Remove all occurences of the given characters in the string

         This method performs its operations over the input string.

         @param str The string to be cleaned
         @param characters A set with characters to remove from the string
         */
        static void removeAllOccurencesOf(std::string &str, const std::set<char> &characters);
    };
} // namespace challenges

#endif /* challenges_c0017_challenge_hpp */
