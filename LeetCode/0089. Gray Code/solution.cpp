/**
 * 60 / 60 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans(1 << n);
        for (int i = 0; i < ans.size(); ++ i) {
            ans[i] = i ^ (i >> 1);
        }
        return ans;
    }
}
