/**
 * 38 / 38 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 25 MB 
 */
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        int n = timeSeries.size();
        for (int i = 0; i < n; ++i) {
            if (i < n - 1 && timeSeries[i] + duration - 1 >= timeSeries[i + 1]) {
                ans += timeSeries[i + 1] - timeSeries[i];
            } else {
                ans += duration;
            }
        }
        return ans;
    }
};

/**
 * 38 / 38 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 25.2 MB 
 */
class Solution2 {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = duration;
        for (int i = 1; i < timeSeries.size(); ++i) {
            ans += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        return ans;
    }
};
