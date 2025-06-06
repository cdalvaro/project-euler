//
//  challenge.hpp
//  Challenges
//
//  Created by Carlos Álvaro on 06/08/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_c0015_challenge_hpp
#define challenges_c0015_challenge_hpp

#include <map>
#include <utility>

#include "challenges/ichallenge.hpp"

namespace challenges {

    /**
     @class Challenge15
     @brief This class is intended to solve Challenge 15

     @link https://projecteuler.net/problem=15 @endlink
     */
    class Challenge15 : virtual public IChallenge {
    public:
        //! @copydoc IChallenge::Type_t
        using Type_t = std::size_t;

        /**
         @brief Class constructor

         This is the main constructor of Challenge15 class

         @param width The width of the lattice
         @param height The height of the lattice
         */
        Challenge15(const std::size_t &width, const std::size_t &height);

        /**
         @brief Default destructor
         */
        ~Challenge15() override = default;

        /**
         This method contains the algorithm that solves challenge 15

         @return The solution for challenge 15
         */
        Solution_t solve() final;

    private:
        using Lattice_t = std::pair<std::size_t, std::size_t>;

        Lattice_t lattice;                       ///< The lattice to find the number of possible paths
        std::map<Lattice_t, Type_t> paths_cache; ///< A cache for storing the number of paths for each sublattice

        /**
         @brief Get the number of paths of the given lattice

         @param lattice The lattice to find its number of possible paths

         @return The number of paths of the given lattice
         */
        Type_t getNumberOfPaths(const Lattice_t &lattice);

        /**
         @brief Compute the number of paths for the given lattice

         @param lattice The lattice to find its number of possible paths

         @return The number of paths of the given lattice
         */
        Type_t computeNumberOfPaths(const Lattice_t &lattice);
    };
} // namespace challenges

#endif /* challenges_c0015_challenge_hpp */
