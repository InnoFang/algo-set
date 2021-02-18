// refer2: [1] https://leetcode-cn.com/problems/minimum-number-of-k-consecutive-bit-flips/solution/xiao-bai-qing-xi-si-lu-hua-dong-chuang-k-wr7t/
//         [2] https://leetcode-cn.com/problems/minimum-number-of-k-consecutive-bit-flips/solution/hua-dong-chuang-kou-shi-ben-ti-zui-rong-z403l/ 

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

/**
 * 110 / 110  test cases passed.
 * Runtime: 116 ms
 * Memory Usage: 71.8 MB 
 */
class Solution2 {
public:
    int minKBitFlips(vector<int>& A, int K) {
        queue<int> que;
        int ans = 0;
        for (int i = 0; i < A.size(); ++ i) {
            if (!que.empty() && que.front() + K == i) {
                que.pop();
            }
            if ((que.size() + A[i]) % 2 == 0) {   
                if (i + K > A.size()) return -1;
                ans ++;
                que.push(i);
            }
        }
        return ans;
    }
};

