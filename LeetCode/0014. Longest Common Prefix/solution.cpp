/**
 * 123 / 123 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.7 MB 
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs[0].size();
        int count = strs.size();
        for (int i = 0; i < length; i++) {
            char c = strs[0][i];
            for (int j = 1; j < count; j++) {
                if (i == strs[j].size() || c != strs[j][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};
