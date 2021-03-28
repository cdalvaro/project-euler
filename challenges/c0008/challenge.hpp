//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0008_challenge_hpp
#define challenges_c0008_challenge_hpp

#include <iterator>
#include <string_view>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge8
     @brief This class is intended to solve challenge #8

     @link https://projecteuler.net/problem=8 @endlink
     */
    class Challenge8 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge8 class

         @param number_of_digits The number of digits to compute the product
         */
        Challenge8(const Type_t &number_of_digits);

        /**
         @brief Default destructor
         */
        virtual ~Challenge8() = default;

        /**
         This method contains the algorithm that solves challenge #8

         @return The solution for challenge #8
         */
        std::any solve() override final;

    private:
        Type_t number_of_digits; /**< The number of digits to compute the
                                    product */

        static const std::string_view big_number; /**< The big number to be searched */

        /**
         Accumulate the product for a given range of numbers

         @param first Constant iterator pointing to the first number of the
         range
         @param last Constant iterator pointing to the last number of the range
         (This number is not taken into account)

         @return The accumulation for the given range
         */
        static Type_t accumulate(std::string_view::const_iterator first, std::string_view::const_iterator last);
    };
} // namespace challenges

#endif /* challenges_c0008_challenge_hpp */
