/**
 * 60 / 60 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        sort(ages.begin(), ages.end());
        int ans = 0, n = ages.size(), l = 0, r = 0;
        for (auto &age : ages) {
            if (age <= 14) continue;
            while (r + 1 < n && ages[r + 1] <= age) ++ r;
            while (l < n && ages[l] <= age * 0.5 + 7) ++ l;
            ans += r - l;
        }
        return ans;
    }
};
