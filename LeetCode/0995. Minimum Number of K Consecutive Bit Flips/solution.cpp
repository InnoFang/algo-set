/**
 * 110 / 110  test cases passed.
 * Runtime: 84 ms
 * Memory Usage: 70.6 MB 
 */

class Solution {
public:
    int minKBitFlips(vector<int>& A, int K) {
        int n = A.size();
        int ans = 0, curflip = 0;
        for (int i = 0; i < n; ++ i) {
            if (i >= K && A[i - K] > 1) {
                curflip--;
                A[i - K] -= 2;
            }
            if (((A[i] + curflip) & 1) == 0) {   
                if (i + K > n) return -1;
                ans ++;
                curflip ++;
                A[i] += 2;
            }
        }
        return ans;
    }
};
