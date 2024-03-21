class Solution {
public:
    bool isAnagram(string s, string t) {
        // unequal lengths means not anagram
        if (s.size() != t.size())
            return false;

        // frequency map for both strings
        unordered_map<char, int> S, T;
        for (int i = 0; i < s.size(); i++) {
            S[s[i]]++;
            T[t[i]]++;
        }

        // comparing frequency maps
        if (S == T)
            return true;
        else
            return false;
    }
};
