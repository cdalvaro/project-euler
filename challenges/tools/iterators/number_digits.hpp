//
//  number_digits.hpp
//  Project Euler
//
//  Created by Carlos Álvaro on 28/3/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_iterators_number_digits_hpp
#define challenges_tools_iterators_number_digits_hpp

#include <string>
#include <type_traits>
#include <vector>

namespace challenges::tools::iterators {

    /**
     @class NumberDigits
     @brief Creates an object to iterate over the digits of a number
     */
    template <typename Numeric_t> class NumberDigits {
    private:
        static_assert(std::is_arithmetic_v<Numeric_t>, "Numeric_t must be numeric");

        using Number_t = std::vector<unsigned short>;
        using Iterator_t = Number_t::iterator;

        Number_t number;

    public:
        NumberDigits(const Numeric_t &number) {
            // Erase the decimal separator, i.e.: "."
            auto wstr_number = std::to_wstring(number);
            auto it_dot = wstr_number.find(L".");
            if (it_dot != std::wstring::npos) {
                wstr_number.erase(it_dot, it_dot);
            }

            wstr_number.reserve(wstr_number.size());
            std::transform(wstr_number.begin(), wstr_number.end(), std::back_inserter(this->number), [](const auto c) {
                wchar_t *end;
                return std::wcstoul(&c, &end, 10);
            });
        }

        Iterator_t begin() {
            return number.begin();
        }

        Iterator_t end() {
            return number.end();
        }
    };

} // namespace challenges::tools::iterators

#endif /* challenges_tools_iterators_number_digits_hpp */
