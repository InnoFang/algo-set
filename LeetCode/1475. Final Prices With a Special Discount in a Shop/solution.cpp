/**
 * 103 / 103 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 9.6 MB 
 */
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        stack<int> s;
        for (int j = 0; j < n; ++ j) {
            while (!s.empty() && prices[j] <= prices[s.top()]) {
                int i = s.top(); s.pop();
                ans[i] = prices[i] - prices[j];
            }
            s.push(j);
            ans[j] = prices[j];
        }
        return ans;
    }
};
