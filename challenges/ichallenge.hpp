//
//  ichallenge.hpp
//  ichallenges
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
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
         The real type masked std::any when recovering
         the solution with \fn solve() method.
         */
        using Type_t = std::any;
        
        /**
         Default virtual destructor
         */
        virtual ~IChallenge() = default;
        
        /**
         Pure virtual method.
         
         Must be implemented by any challenge class that inherites from this
         with the algorithm that solves the challenge.
         
         @return The solution of the challenge inside a std::any type.
         The real value can be unwrapped using std::any_cast<T>() where
         T is the alias Type_t belonging to the corresponding challenge class.
         
         @see Type_t
         */
        virtual std::any solve() = 0;
    };
}

#endif /* challenges_ichallenge_hpp */
