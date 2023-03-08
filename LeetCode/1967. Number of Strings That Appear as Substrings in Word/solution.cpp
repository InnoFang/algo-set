/** 
 * Runtime: 0 ms
 * Memory Usage: 8.5 MB 
 */
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for (auto &pattern: patterns) {
            ans += word.find(pattern) != string::npos;
        }
        return ans;
    }
};
