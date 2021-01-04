/**
 * 50 / 50 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), [](const vector<int> &v1, const vector<int> &v2){
            return v1[0] - v1[1] < v2[0] - v2[1];
        });
        int n = costs.size() >> 1, ans = 0;
        for (int i = 0; i < n; ++ i) {
            ans += costs[i][0] + costs[i + n][1];
        }
        return ans;
    }
};
