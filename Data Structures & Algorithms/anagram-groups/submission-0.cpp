#include <unordered_map>
#include <string>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // build a hash table
        // Key: Sorted string (e.g., "act")
        // Value: Vector of actual words (e.g., ["act", "cat"])
        std::unordered_map<std::string, std::vector<std::string>> my_map;  
        for (std::string s : strs) {
            std::string key = s;
            std::sort(key.begin(), key.end());
            my_map[key].push_back(s);
        }

        // move the hash table content to array
        std::vector<std::vector<std::string>> result;
        for (auto const& [key,val] : my_map) {
            result.push_back(val);
        }

        return result;

    }
};
