/**
 * 44 / 44 test cases passed.
 * Runtime: 544 ms
 * Memory Usage: 122.1 MB 
 */
class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
        });
        int max_def = 0, ans = 0;
        for (auto &prop: properties) {
            if (prop[1] < max_def) ++ ans;
            else max_def = prop[1];
        } 
        return ans;
    }
};
