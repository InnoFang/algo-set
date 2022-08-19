/**
 * 111 / 111 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 11.2 MB 
 */
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<int> rec(1010);
        int n = startTime.size();
        for (int i = 0; i < n; ++ i) {
            ++ rec[startTime[i]];
            -- rec[endTime[i] + 1];
        }
        for (int i = 1; i <= queryTime; ++ i) {
            rec[i] += rec[i - 1];
        }
        return rec[queryTime];
    }
};
