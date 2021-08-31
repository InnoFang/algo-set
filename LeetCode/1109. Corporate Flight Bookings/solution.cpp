/**
 * 63 / 63 test cases passed.
 * Runtime: 180 ms
 * Memory Usage: 66.2 MB 
 */
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n);
        for (auto& booking: bookings) {
            int first = booking[0], last = booking[1];
            ans[first - 1] += booking[2];
            if (last < n) {
                ans[last] -= booking[2];
            }
        }
        for (int i = 1; i < n; ++ i) {
            ans[i] += ans[i - 1];
        }
        return ans;
    }
};
