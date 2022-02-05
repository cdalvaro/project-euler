//
//  challenge.cpp
//  Challenges
//
//  Created by Carlos Álvaro on 04/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

#include <algorithm>
#include <exception>
#include <fstream>
#include <numeric>
#include <set>
#include <sstream>

#include "challenges/c0022/challenge.hpp"

using namespace challenges;
namespace fs = std::filesystem;

/**
 @brief Auxiliary class for splitting a string by any delimiter
 */
template <char delimiter> class WordDelimitedBy : public std::string {
    friend std::istream &operator>>(std::istream &is, WordDelimitedBy &output) {
        std::getline(is, output, delimiter);
        return is;
    }
};

Challenge22::Challenge22(const fs::path &file_path) : file_path(file_path) {
    if (!fs::exists(file_path)) {
        std::stringstream msg;
        msg << "File: " << file_path << " could not be found at: " << fs::current_path();
        throw std::runtime_error(msg.str());
    }
}

IChallenge::Solution_t Challenge22::solve() {
    // Read file content splitting by commas
    std::set<std::string> names;
    std::ifstream ifs(file_path);
    for (auto it_name = (std::istream_iterator<WordDelimitedBy<','>>(ifs));
         it_name != (std::istream_iterator<WordDelimitedBy<','>>()); ++it_name) {
        auto name = std::move(*it_name);

        // Remove double quotes
        name.erase(std::remove(name.begin(), name.end(), '"'), name.end());

        // Set all characters to uppercase
        std::transform(name.begin(), name.end(), name.begin(), ::toupper);

        names.insert(name);
    }

    // Compute score
    Type_t total_score = 0;
    for (auto it_name = names.begin(); it_name != names.end(); ++it_name) {
        Type_t name_score =
            std::accumulate(it_name->begin(), it_name->end(), 0, [](const auto &accumulated, const auto &character) {
                return accumulated + character - 'A' + 1;
            });
        auto position = std::distance(names.begin(), it_name) + 1;
        total_score += name_score * position;
    }

    return total_score;
}
