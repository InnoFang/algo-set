/**
 * 64 / 64 test cases passed.
 * Runtime: 152 ms
 * Memory Usage: 110.9 MB 
 */
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int summ = accumulate(rolls.begin(), rolls.end(), 0);
        int m = rolls.size();
        double sumn = mean * (n + m) - summ;
        if (sumn < n || sumn > 6 * n) return {};
        int t = sumn / n;
        vector<int> ans(n, t);
        if (t * n < sumn) {
            int d = sumn - t * n;
            int i = 0;
            while (d --> 0) {
                ans[i++] ++;
            }
        }
        return ans;
    }
};
