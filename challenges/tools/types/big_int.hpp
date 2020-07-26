//
//  big_int.hpp
//  Challenges
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_types_big_int_hpp
#define challenges_tools_types_big_int_hpp

#include <string_view>
#include <vector>

/**
 @namespace challenges::tools::types
 @brief Types namespace with tools to make custom C++ types
 
 This namespace contains custom types
 */
namespace challenges::tools::types {
    
    /**
     @class BigInt
     @brief Class to perform operations with big integer numbers
     */
    class BigInt {
    private:
        using BigInt_t = std::vector<unsigned short int>;
        BigInt_t number;
        
    public:
        BigInt();
        BigInt(const size_t &number);
        BigInt(const char *number);
        BigInt(const std::string_view &number);
        BigInt(const BigInt &number);
        BigInt(BigInt &&number);
        
        virtual ~BigInt() = default;
        
        BigInt_t::iterator begin();
        BigInt_t::const_iterator begin() const;
        BigInt_t::iterator end();
        BigInt_t::const_iterator end() const;
        
        BigInt &operator=(const BigInt &rhs);
        BigInt &operator=(BigInt &&rhs);
        
        BigInt &operator+=(const BigInt &rhs);
        BigInt operator+(const BigInt &rhs) const;
        
        bool operator<(const BigInt &rhs) const;
        
        operator std::string_view() const;
        operator size_t() const;
    };
    
}

#endif /* challenges_tools_types_big_int_hpp */
