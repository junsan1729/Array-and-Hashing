class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      // add all nums element to set 
        unordered_set<int> hash(nums.begin(), nums.end());
      // since set contains only unique elements 
      // size of hashset must be equal or less than size of actual nums 
        return hash.size() != nums.size();
    }
};
