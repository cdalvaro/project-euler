//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 25/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0019_challenge_hpp
#define challenges_c0019_challenge_hpp

#include <chrono>
#include <ctime>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge19
     @brief This class is intended to solve challenge #19
     
     @link https://projecteuler.net/problem=19 @endlink
     */
    class Challenge19 : virtual public IChallenge {
    public:
        
        //! @copydoc IChallenge::Type_t
        using Type_t = size_t;

        /**
         @brief Class constructor
         
         @param first_year Initial year
         @param last_year Last year
         
         This is the main constructor of Challenge19 class
         */
        Challenge19(const int &first_year, const int &last_year);
        
        /**
         @brief Default destructor
         */
        virtual ~Challenge19() = default;
        
        /**
         This method contains the algorithm that solves challenge #19
         
         @return The solution for challenge #19
         */
        std::any solve() override final;
        
    private:
        using Clock_t = std::chrono::system_clock;
        using Date_t = std::chrono::time_point<Clock_t>;
        
        int first_year; /**< Initial year */
        int last_year; /**< Last year */
        
        /**
         Create a \c Date_t object from integers
         
         @param year The year
         @param month The month
         @param day The day
         
         @return A \c Date_t object for the given values
         */
        static Date_t dateFor(const int &year, const int &month, const int &day);

        /**
         Create a \c std::tm object from a \c Date_t object
         
         @param date The \c Date_t object to be converted
         
         @return The \c std::tm object corresponding to the \p date parameter
         */
        static std::tm tmFrom(const Date_t &date);
    };
}

#endif /* challenges_c0019_challenge_hpp */
