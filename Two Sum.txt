class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        // for all numbers, if complememtary exist, return pair of complementary
        // index and self index else include self value and index pair in hash
        for (int i = 0; i < nums.size(); i++) {
            if (hash.count(target - nums[i])) {
                return {hash[target - nums[i]], i};
            } else {
                hash[nums[i]] = i;
            }
        }

        return {};
    }
};