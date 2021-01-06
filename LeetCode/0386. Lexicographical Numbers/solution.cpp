/**
 * 26 / 26 test cases passed.
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans(n);
        int idx = 0;
        for (int i = 1; i <= 9; ++ i) {
            dfs(i, n, ans, idx);
        }
        return ans;
    }
private:
    void dfs(int num, int size, vector<int>& ans, int& idx) {
        if ( num > size ) return;
        
        ans[ idx ++ ] = num;

        for (int i = 0; i <= 9; ++ i) {
            dfs(num * 10 + i, size, ans, idx);
        }
    }
};
