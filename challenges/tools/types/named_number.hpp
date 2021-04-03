//
//  named_number.hpp
//  Challenges
//
//  Created by Carlos David on 28/2/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_types_named_number_hpp
#define challenges_tools_types_named_number_hpp

#include <cmath>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

namespace challenges::tools::types {

    /**
     @class NamedNumber
     @brief A class to convert an integer number into its english name
     */
    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>> class NamedNumber {
    private:
        Integer_t number; /**< The value of the number */
        std::string name; /**< The name of the number */

        static std::string nameForNumber(const Integer_t &number, short number_of_segments = -1) {
            if (number < 0) {
                return "minus " + nameForNumber(-number);
            }

            if (number < 1000) {
                return repBelow1000(number);
            }

            if (number_of_segments < 0) {
                number_of_segments = countSegments(number);
            }

            const auto factor_name = SEGMENTS[number_of_segments];
            const uint64_t factor = std::pow(1000, number_of_segments);
            const auto groups = static_cast<int>(number / factor);
            const auto rep = repBelow1000(groups) + " " + factor_name;
            if (number % factor == 0) {
                return rep;
            }

            return rep + " " + nameForNumber(number % factor, number_of_segments - 1);
        }

        static std::string repBelow1000(const Integer_t &number) {
            if (number < 10) {
                return DIGITS[number];
            }

            if (number < 20) {
                return TEENS[number - 10];
            }

            if (number < 100) {
                auto rep = TENS[number / 10];
                if (number % 10 == 0) {
                    return rep;
                }
                return rep + "-" + DIGITS[number % 10];
            }

            auto rep = DIGITS[number / 100] + " hundred";
            if (number % 100 == 0) {
                return rep;
            }
            return rep + " and " + repBelow1000(number % 100);
        }

        static short countSegments(Integer_t number) {
            short segments = 0;
            while ((number /= 1000) != 0) {
                ++segments;
            }
            return segments;
        }

        inline static const std::vector<std::string> DIGITS{
            "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        };

        inline static const std::vector<std::string> TEENS{
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        };

        inline static const std::vector<std::string> TENS{
            "_", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety",
        };

        inline static const std::vector<std::string> SEGMENTS{
            "_", "thousand", "million", "billion", "trillion", "quatrillion", "quintillion",
        };

    public:
        NamedNumber(const Integer_t &number) : number(number), name(nameForNumber(number)) {
        }

        const std::string &getName() const {
            return name;
        }

        friend std::ostream &operator<<(std::ostream &os, const NamedNumber &named_number) {
            return os << named_number.getName();
        }
    };

} // namespace challenges::tools::types

#endif /* challenges_tools_types_named_number_hpp */
