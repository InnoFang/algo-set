/**
 * 31 / 31 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 22.7 MB 
 */
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> count;
        vector<string> ans;
        int sz = s.size();
        for (int i = 0; i <= sz - 10; i++) {
            string str = s.substr(i, 10);
            count[str] += 1;
            if (count[str] == 2) {
                ans.emplace_back(str);
            }
        } 
        return ans;
    }
};
