/**
 * 113 / 113 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 13 MB 
 */
class Solution {
public:
    int char2int(const char &c) {
        return c - '0';
    }

    int hash(const string &timePoint) {
        return  (char2int(timePoint[0]) * 10 + char2int(timePoint[1])) * 60 + 
                (char2int(timePoint[3]) * 10 + char2int(timePoint[4]));
    }

    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        if (n > 1440) return 0;
        sort(timePoints.begin(), timePoints.end());
        int ans = INT_MAX;
        int t0 = hash(timePoints[0]);
        int prev = t0;
        for (int i = 1; i < n; ++ i) {
            int curr = hash(timePoints[i]);
            ans = min(ans, curr - prev);
            prev = curr;
        }
        ans = min(ans, t0 + 1440 - prev);
        return ans;
    }
};
