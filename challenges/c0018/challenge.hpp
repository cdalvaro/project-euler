//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos David on 17/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0018_challenge_hpp
#define challenges_c0018_challenge_hpp

#include <map>
#include <utility>
#include <vector>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge18
     @brief This class is intended to solve Challenge 18

     @link https://projecteuler.net/problem=18 @endlink
     */
    class Challenge18 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = long long;

        using Row_t = std::vector<Type_t>;
        using Triangle_t = std::vector<Row_t>;

        /**
         @brief Class constructor

         This is the main constructor of Challenge18 class

         @param triangle The triangle to be solved
         */
        Challenge18(const Triangle_t &triangle);

        /**
         @brief Default destructor
         */
        virtual ~Challenge18() = default;

        /**
         This method contains the algorithm that solves challenge 18

         @return The solution for challenge 18
         */
        std::any solve() override final;

    private:
        using Cumulated_t = std::vector<std::pair<std::pair<size_t, size_t>, Type_t>>;

        Triangle_t triangle; /**< The triangle to be solved */

        /**
         @brief Cumulates the next level into current cumulation.

         Returns a row with new cumulation.

         @param cumulated The cumulation until the current level
         @param next_level_index Next level index

         @return The total cumulation until level \p next_level_index
         */
        Cumulated_t cumulateNextLevel(const Cumulated_t &cumulated, const size_t &next_level_index) const;
    };
} // namespace challenges

#endif /* challenges_c0018_challenge_hpp */
