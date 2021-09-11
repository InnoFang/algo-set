/**
 * 72 / 72 test cases passed.
 * Runtime: 124 ms
 * Memory Usage: 79.2 MB 
 */
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        size_t n = chalk.size();
        vector<uint64_t> sums(n + 1); 
        for(size_t i = 1; i <= n; i++){
            sums[i] = sums[i - 1] + chalk[i - 1];
            if (sums[i] > k) return i - 1;
        }
        k %= sums.back();
        int l = 1, r = n;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (sums[mid] > k) r = mid;
            else l = mid + 1;
        }
        return l - 1;
    }
};
