//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 04/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_c0022_challenge_hpp
#define challenges_c0022_challenge_hpp

#include <filesystem>
#include <string>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge22
     @brief This class is intended to solve Challenge 22

     @link https://projecteuler.net/problem=22 @endlink
     */
    class Challenge22 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::size_t;

        /**
         @brief Class constructor

         @param file_path The path to the file with all names

         This is the main constructor of Challenge22 class
         */
        explicit Challenge22(const std::filesystem::path &file_path);

        /**
         @brief Default destructor
         */
        ~Challenge22() override = default;

        /**
         This method contains the algorithm that solves challenge 22

         @return The solution for challenge 22
         */
        Solution_t solve() final;

    private:
        std::filesystem::path file_path; ///< The path to the file with all names
    };

} // namespace challenges

#endif /* challenges_c0022_challenge_hpp */
