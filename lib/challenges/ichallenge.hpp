//
//  ichallenge.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 24/05/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef challenges_ichallenge_hpp
#define challenges_ichallenge_hpp

#include <any>

/**
 @namespace challenges
 @brief Challenges namespace

 This namespace contains solutions for the Project Euler challenges
 https://projecteuler.net
 */
namespace challenges {

    /**
     @class IChallenge
     @brief Pure virtual interface class used as skeleton for challenge classes.

     This class is inherited by each challenge class in order to provide
     a homogeneous structure to this project.
     */
    class IChallenge {
    public:
        /**
         The real type masked by std::any when recovering
         the solution with \fn solve() method.
         */
        using Solution_t = std::any;

        /**
         Default virtual destructor
         */
        virtual ~IChallenge() = default;

        /**
         Pure virtual method.

         Must be implemented by any challenge class that inherites from this
         with the algorithm that solves the challenge.

         @return The solution of the challenge inside a Solution_t.
         The real value can be unwrapped using std::any_cast<T>() where
         T is the alias Type_t belonging to the corresponding challenge class.

         @see Solution_t
         */
        virtual Solution_t solve() = 0;

        /**
         Cass the Solution_t type to the solution type

         @return The solution value casted.
         */
        template <typename T>
        static inline T castSolution(const Solution_t &solution) {
            return std::any_cast<T>(solution);
        }
    };

} // namespace challenges

#endif /* challenges_ichallenge_hpp */
