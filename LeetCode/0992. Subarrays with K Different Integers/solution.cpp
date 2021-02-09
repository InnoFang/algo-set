/**
 * 55 / 55 test cases passed.
 * Status: Accepted
 * Runtime: 64 ms
 */
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {
        return atMostKDistinct(A, K) - atMostKDistinct(A, K - 1);
    }
 
    int atMostKDistinct(vector<int>& A, int K) {
        int ret = 0;
        int cnt = 0;
        vector<int> freq(A.size() + 1, 0);
        for (int l = 0, r = 0; r < A.size(); ++ r) {
            if (freq[A[r]] == 0) {
                cnt ++;
            }
            freq[A[r]] ++;
            while (cnt > K) {
                freq[A[l]] --;
                if (freq[A[l]] == 0) {
                    cnt --;
                }
                l++;
            }
            ret += r - l + 1;
        }
        return ret;
    }
};

