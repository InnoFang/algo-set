/**
 * 56 / 56 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n = row.size();
        vector<int> cache(n);
        for (int i = 0; i < n; ++ i) {
            cache[row[i]] = i;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i += 2) {
            int couple = row[i] ^ 1;
            if (row[i + 1] != couple) {
                int coupleIdx = cache[couple];
                cache[row[i + 1]] = coupleIdx;
                cache[row[coupleIdx]] = i + 1;
                swap(row[coupleIdx], row[i + 1]);
                ans++;
            }
        }
        return ans;
    }
};

