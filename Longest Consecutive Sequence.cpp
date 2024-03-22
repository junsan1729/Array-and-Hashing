class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        // maxlen initialised 0, nums can be empty
        int maxlen = 0;

        for (auto num : nums) {
            // if num is the head of the sequence
            if (hash.count(num - 1) == 0) {
                int len = 1;

                // keep finding the next elements in the hash for sequence
                while (hash.count(num + len)) {
                    ++len;
                }

                // keep track of the maximum length
                maxlen = max(maxlen, len);
            }
        }

        return maxlen;
    }
};
