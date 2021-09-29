/**
 * 120 / 120 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 12.6 MB 
 */
class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int total = accumulate(machines.begin(), machines.end(), 0);
        if (total % machines.size())
            return -1;

        int avg =  total / machines.size(); 
        int diffSum = 0, ans = 0;
        for (int num: machines) {
            int diff = num - avg;
            diffSum += diff; 
            ans = max(ans, max(abs(diffSum), diff));
        }
        return ans;
    }
};
