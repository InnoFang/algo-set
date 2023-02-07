/**
 * Runtime: 4 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char> store;
        for (int i = 0, j = 0; i < word1.size() || j < word2.size();) {
            if (i < word1.size()) store.push_back(word1[i++]);
            if (j < word2.size()) store.push_back(word2[j++]);
        }
        return string(store.begin(), store.end());
    }
};
