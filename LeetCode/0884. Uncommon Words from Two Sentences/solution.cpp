/**
 * 55 / 55 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.6 MB 
 */
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        istringstream iss1(s1 + " " + s2);
        unordered_map<string, int> record;
        string word;
        while (iss1 >> word) record[word] += 1;
        vector<string> ans;
        for (auto &[w, cnt] : record) {
            if (cnt == 1) ans.push_back(w);
        }
        return ans;
    }
};
