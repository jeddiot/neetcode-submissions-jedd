#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;

        // hash table
        std::unordered_set<int> mySet{};
        for (int i = 0; i < nums.size(); ++i) {
            if (mySet.find(nums[i]) == mySet.end()) {
                mySet.insert(nums[i]);
            }
            else {
                return true;
            }
        }

        return res;
    }
};