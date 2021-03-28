//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 29/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0004_challenge_hpp
#define challenges_c0004_challenge_hpp

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge4
     @brief This class is intended to solve challenge #4

     @link https://projecteuler.net/problem=4 @endlink
     */
    class Challenge4 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge4 class

         @param number_of_digits The number of digits of each product number
         @param number_of_products The number of products to multipy
         */
        Challenge4(const size_t &number_of_digits, const size_t &number_of_products);

        /**
         @brief Default constructor
         */
        virtual ~Challenge4() = default;

        /**
         This method contains the algorithm that solves challenge #4

         @return The solution for challenge #4
         */
        std::any solve() override final;

    private:
        size_t number_of_digits;   /**< The number of digits of each product
                                      number */
        size_t number_of_products; /**< The number of products to multipy */

        /**
         @brief Check if given number fulfills the required conditions

         This method checks if \p number is multiple of \p number_of_factors
         numbers and each divisor has \p number_of_digits digits

         @param number The number to be checked
         @param depth The number of products to check

         @return True if the number fulfills the requirements, false otherwise.
         */
        bool checkDivisors(const Type_t &number, const size_t &depth) const;

        /**
         @brief Check wether \p number is a palindromic number or not

         @param number The number to check

         @return True if the number is palindromic, false otherwise
         */
        static bool isPalindromic(const Type_t &number);

        /**
         @brief Find the next palindromic number for a given number

         @param number The number to begin finding the next palindrome

         @return The palindrome following the given number
         */
        static Type_t findNextPalindrome(const Type_t &number);

        /**
         @brief Get the number of digits of a given number

         @param number The number to get its number of digits

         @return The number of digits for the given number
         */
        static size_t getNumberOfDigits(const Type_t &number);

        /**
         @brief Flip digits for the given number

         @param number The number to be flipped

         @return The flipped number
         */
        static Type_t flip(Type_t number);
    };
} // namespace challenges

#endif /* challenges_c0004_challenge_hpp */
