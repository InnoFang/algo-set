/**
 * 48 / 48 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 50.2 MB 
 */
class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int ans = 0;
        int zeros = 0;
        int start = 0;
        for (int i = 0; i < A.size(); ++ i) {
            if (A[i] == 0 && zeros < K) {
                zeros ++;
            } else if (A[i] == 0 && zeros >= K) {
                while (zeros >= K) {
                    if (A[start] == 0) {
                        zeros --;
                    }
                    start ++;
                }
                zeros ++;
            }
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};

/**
 * 48 / 48 test cases passed.
 * Runtime: 64 ms
 * Memory Usage: 50 MB 
 */
class Solution2 {
public:
    int longestOnes(vector<int>& A, int K) {
        int ans = 0, zeros = 0;
        for (int i = 0, start = 0; i < A.size(); ++ i) {
            if (A[i] == 0) {
                zeros ++;
            }
            while (zeros > K) {
                if (A[start] == 0) {
                    zeros --;
                }
                start ++;
            }
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
};

/**
 * 48 / 48 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 50.2 MB 
 * Refer to: https://leetcode-cn.com/problems/max-consecutive-ones-iii/solution/zui-da-lian-xu-1de-ge-shu-iiidai-ma-jian-ywl5/ 
 */
class Solution3 {
public:
    int longestOnes(vector<int>& A, int K) {
        int l = 0, r = 0;
        while (r < A.size()) {
            K -= A[r++] ^ 1;
            if (K < 0) {
                K += A[l++] ^ 1;
            }
        }
        return r - l;
    }
};

