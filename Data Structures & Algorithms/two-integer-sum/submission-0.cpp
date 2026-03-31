#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Key: The number from the array (nums[i]).
        // Value: The index where that number was found (i).
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i}; // bcs the input arr is sorted
            }
            
            seen[nums[i]] = i;
        }

        return {};
    }
};
