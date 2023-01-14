//
// Created by Carlos Álvaro on 14/1/23.
//

#ifndef tools_concepts_hpp
#define tools_concepts_hpp

#include <type_traits>

template <typename T>
concept Integral = std::is_integral<T>::value;

#endif // tools_concepts_hpp
