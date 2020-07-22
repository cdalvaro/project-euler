//
//  homogeneous_partition.hpp
//  Challenges
//
//  Created by Carlos David on 28/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef challenges_tools_iterators_homogeneous_partition_hpp
#define challenges_tools_iterators_homogeneous_partition_hpp

#include <set>
#include <type_traits>
#include <utility>

/**
 @namespace challenges::tools::iterators
 @brief Iterators namespace with tools to make easy to iterate containers
 
 This namespace contains tools to iterate against series
 */
namespace challenges::tools::iterators {
    
    /**
     @class HomogeneousPartition
     @brief Creates homogeneous partitions for iterating over a range
     */
    template <typename Integer_t, typename = std::enable_if<std::is_integral<Integer_t>::value>>
    class HomogeneousPartition {
    public:
        
        using Partition_t = std::pair<Integer_t, Integer_t>;
        using Partitions_t = std::set<Partition_t>;
        
        using ConstIterator_t = typename Partitions_t::const_iterator;
        
        /**
         @brief Class constructor
         
         @param first First range number
         @param last Last range number
         @param number_of_partitions The number of homogeneous partitions
         */
        HomogeneousPartition(const Integer_t &first, const Integer_t &last, const size_t &number_of_partitions) :
        first(first), last(last), number_of_partitions(number_of_partitions) {
            
        }
        
        /**
         @brief Default constructor
         */
        virtual ~HomogeneousPartition() = default;
        
        /**
         @brief Build partitions and returns them
         
         @return A set with homogeneous partitions
         */
        const Partitions_t &partitions() const {
            if (partitions_cache.empty()) {
                auto step = (last - first) / number_of_partitions;
                
                auto __first = first;
                auto __last = __first + step;
                auto __last_index = number_of_partitions - 1;
                for (size_t index = 0; index < __last_index; ++index) {
                    partitions_cache.emplace(__first, __last);
                    __first = __last + 1;
                    __last = __first + step;
                }
                
                partitions_cache.emplace(__first, last);
            }
            
            return partitions_cache;
        }
        
        /**
         @brief Iterator to the first partition
         
         @return A constant iterator pointing to the first partition
         */
        ConstIterator_t begin() const {
            return partitions().begin();
        }
        
        /**
         @brief Iterator to the element following the las element
         
         @return A constant iterator pointing to the element following the las element
         */
        ConstIterator_t end() const {
            return partitions().end();
        }
        
    private:
        Integer_t first;
        Integer_t last;
        size_t number_of_partitions;
        
        mutable Partitions_t partitions_cache;
    };
}

#endif /* challenges_tools_iterators_homogeneous_partition_hpp */
