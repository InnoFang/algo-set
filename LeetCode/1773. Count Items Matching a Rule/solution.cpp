/**
 * Runtime: 68 ms
 * Memory Usage: 30.2 MB 
 */
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string, int> key2idx = {{"type", 0}, {"color", 1}, {"name", 2}};
        int ans = 0;
        for (auto& item: items) {
            int idx = key2idx[ruleKey];
            if (item[idx] == ruleValue) {
                ++  ans;
            }
        }
        return ans;
    }
};
