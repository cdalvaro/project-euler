//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos David on 28/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#include <thread>
#include <vector>

#include "challenges/c0003/challenge.hpp"
#include "challenges/tools/iterators/homogeneous_partition.hpp"
#include "challenges/tools/math/factorization.hpp"

using namespace challenges;

Challenge3::Challenge3(const Type_t &number) : number(number) {
}

IChallenge::Solution_t Challenge3::solve() {

    Type_t greatest_factor = std::sqrt(number);

    auto number_of_workers = std::thread::hardware_concurrency();
    if (greatest_factor < 1'000) {
        number_of_workers = 1;
    }

    tools::iterators::HomogeneousPartition<Type_t> homogeneous_partition(2, greatest_factor, number_of_workers);

    std::vector<std::thread> workers;
    std::vector<Type_t> candidates(number_of_workers, 0);

    auto it_candidate = candidates.begin();
    for (const auto &partition : homogeneous_partition) {
        workers.emplace_back(
            [this](const Type_t &first_candidate, const Type_t &last_candidate, const auto &it_candidate) {
                Type_t candidate = first_candidate;
                if (candidate % 2 == 0) {
                    ++candidate;
                }

                for (; candidate <= last_candidate; candidate += 2) {
                    if (number % candidate == 0 && tools::math::isPrime(candidate)) {
                        *it_candidate = std::max(*it_candidate, candidate);
                    }
                }
            },
            partition.first, partition.second, it_candidate++);
    }

    std::for_each(workers.begin(), workers.end(), std::mem_fn(&std::thread::join));

    return (*std::max_element(candidates.begin(), candidates.end()));
}
