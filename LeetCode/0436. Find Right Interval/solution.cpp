/**
 * 19 / 19 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 24.4 MB 
 */
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int, int>> startPosId;
        for (int i = 0; i < n; ++ i) {
            startPosId.emplace_back(intervals[i][0], i);
        }
        sort(startPosId.begin(), startPosId.end());
        vector<int> ans(n, -1);
        for (int i = 0; i < n; ++ i) {
            auto it = lower_bound(startPosId.begin(), startPosId.end(), make_pair(intervals[i][1], 0));
            if (it != startPosId.end()) {
                ans[i] = it->second;
            }
        }
        return ans;
    }
};
