/**
 * 103 / 103 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.4 MB 
 */
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> out;
        for (auto& path: paths) {
            out[path[0]] += 1;
        }
        string ans;
        for (auto& path: paths) {
            if (!out.count(path[1])) {
                ans = path[1];
                break;
            }
        } 
        return ans;
    }
};
