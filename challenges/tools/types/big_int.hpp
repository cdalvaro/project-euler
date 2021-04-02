//
//  big_int.hpp
//  Challenges
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_types_big_int_hpp
#define challenges_tools_types_big_int_hpp

#include <string>
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

        /**
         This method computes the product between the BigInt
         and an int number whose absolute value is smaller than 10.

         In order to improve performance, this method does not check whether
         the absolute value of \p small_int is smaller than 10. It is responsibility
         of the developer to use this method right.

         @param small_int An Int whose absolute value is smaller than 10

         @return The number itself
         */
        BigInt &multiplyBy(const BigInt_t::value_type &small_int);

        /**
         Multiply the number by 10 \p times times

         @param times The number of times to multiply by 10

         @return The number itself
         */
        BigInt &multiplyBy10(const size_t &times = 1);

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

        BigInt &operator*=(const BigInt &rhs);
        BigInt operator*(const BigInt &rhs) const;

        bool operator==(const BigInt &rhs);
        bool operator<(const BigInt &rhs) const;

        bool isZero() const;
        bool isNil() const;

        std::string str() const;

        operator std::string() const;
        operator size_t() const;
    };

} // namespace challenges::tools::types

#endif /* challenges_tools_types_big_int_hpp */
