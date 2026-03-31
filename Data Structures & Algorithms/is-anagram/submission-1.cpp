#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) {
            return false;
        }

        std::unordered_map<char, int> hashtable_s;

        for (char c : s) {
            hashtable_s[c]++;
        }

        for (char c : t) {
            if (hashtable_s.find(c) == hashtable_s.end() || hashtable_s[c] == 0) {
                return false;
            }
            hashtable_s[c]--;
        }

        return true;
    }
};
