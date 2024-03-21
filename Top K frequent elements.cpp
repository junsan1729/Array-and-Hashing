class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // make the frequency map for nums
        unordered_map<int, int> m;
        for (auto num : nums) {
            m[num]++;
        }

        // max heap
        priority_queue<pair<int, int>> pq;
        for (auto i : m) {
            pq.push({i.second, i.first});
        }

        // push top k elements from pq to ans array
        vector<int> res;
        while (k--) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        // return answer array
        return res;
    }
};
