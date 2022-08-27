/**
 * 170 / 170 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 18.5 MB 
 */
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < intervals.size(); ++ i) {
            int l = intervals[i][0], r = intervals[i][1];
            if (ans.empty() || ans.back()[1] < l) {
                ans.push_back({l, r});
            } else {
                ans.back()[1] = max(ans.back()[1], r);
            }
        }
        return ans;
    }
};
