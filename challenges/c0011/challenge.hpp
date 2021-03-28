//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 22/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0011_challenge_hpp
#define challenges_c0011_challenge_hpp

#include <vector>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge11
     @brief This class is intended to solve Challenge 11

     @link https://projecteuler.net/problem=11 @endlink
     */
    class Challenge11 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge11 class

         @param numbers_to_take The number of adjacent numbers to compute the
         product
         */
        Challenge11(const Type_t &numbers_to_take);

        /**
         @brief Default destructor
         */
        virtual ~Challenge11() = default;

        /**
         This method contains the algorithm that solves challenge 11

         @return The solution for challenge 11
         */
        std::any solve() override final;

    private:
        //! The matrix type
        using Matrix_t = std::vector<std::vector<int>>;

        Type_t numbers_to_take; /**< The number of adjacent numbers to compute
                                   the product */

        static const Matrix_t matrix;          /**< The matrix to be explored */
        static const size_t number_of_rows;    /**< The number of rows of the matrix */
        static const size_t number_of_columns; /**< The number of columns of the matrix */

        /**
         Return the maximum product for the given position

         @param row Row number
         @param column Column number

         @return The maximum product for the given position
         */
        Type_t maxProductForPosition(const size_t &row, const size_t &column) const;
    };
} // namespace challenges

#endif /* challenges_c0011_challenge_hpp */
