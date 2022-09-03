/**
 * 205 / 205 test cases passed.
 * Runtime: 44 ms
 * Memory Usage: 22 MB 
 */
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int prev = INT_MIN;
        int ans = 0;
        sort(pairs.begin(), pairs.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] < b[1];
        });
        for (auto &p: pairs) {
            if (p[0] > prev) {
                prev = p[1];
                ++ ans;
            }
        }
        return ans;
    }
};

