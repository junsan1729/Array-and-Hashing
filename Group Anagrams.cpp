class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // for grouping words having same sorted format
        unordered_map<string, vector<string>> group;

        // map accordingly
        for (auto str : strs) {
            string t = str;
            sort(str.begin(), str.end());
            group[str].push_back(t);
        }

        // push all groups of words into ans
        vector<vector<string>> ans;
        for (auto i : group) {
            ans.push_back(i.second);
        }

        // return the lists of list of anagrams
        return ans;
    }
};
