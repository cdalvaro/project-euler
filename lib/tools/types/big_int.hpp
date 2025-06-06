//
//  big_int.hpp
//  project-euler
//
//  Created by Carlos Álvaro on 25/07/2020.
//  Copyright © 2020 cdalvaro.io. All rights reserved.
//

#ifndef tools_types_big_int_hpp
#define tools_types_big_int_hpp

#include <string>
#include <vector>

/**
 @namespace tools::types
 @brief Types namespace with tools to make custom C++ types

 This namespace contains custom types
 */
namespace tools::types {

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
        BigInt &multiplyBy10(const std::size_t &times = 1);

    public:
        BigInt() = default;
        explicit BigInt(const std::size_t &number);
        BigInt(const char *number);
        explicit BigInt(const std::string_view &number);

        BigInt(const BigInt &number) = default;
        BigInt(BigInt &&number) noexcept;

        virtual ~BigInt() = default;

        BigInt_t::iterator begin();
        [[nodiscard]] BigInt_t::const_iterator begin() const;
        BigInt_t::iterator end();
        [[nodiscard]] BigInt_t::const_iterator end() const;

        BigInt &operator=(const BigInt &rhs);
        BigInt &operator=(BigInt &&rhs) noexcept;

        BigInt &operator+=(const BigInt &rhs);
        BigInt operator+(const BigInt &rhs) const;

        BigInt &operator*=(const BigInt &rhs);
        BigInt operator*(const BigInt &rhs) const;

        bool operator==(const BigInt &rhs) const;
        bool operator!=(const BigInt &rhs) const;
        bool operator<(const BigInt &rhs) const;
        bool operator>(const BigInt &rhs) const;

        [[nodiscard]] bool isZero() const;
        [[nodiscard]] bool isNil() const;

        [[nodiscard]] std::size_t size() const;

        [[nodiscard]] std::string str() const;

        explicit operator std::string() const;
        explicit operator std::size_t() const;
    };

} // namespace tools::types

#endif /* tools_types_big_int_hpp */
