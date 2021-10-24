/**
 * 64 / 64 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 14.8 MB 
 */
class Solution {
public:
    map<vector<int>, int> memo;
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        if (memo.count(needs)) return memo[needs];
        int ans = 0;
        for (int i = 0; i < price.size(); i++) {
            ans += price[i] * needs[i];
        }
        for (int i = 0; i < special.size(); i++) {
            vector<int> next(needs.begin(), needs.end());
            bool valid = true;
            for (int j = 0; j < price.size(); j++) {
                if (special[i][j] > needs[j]) {
                    valid = false;
                    break;
                }
                next[j] -= special[i][j];
            }
            if (!valid) {
                continue;
            }
            ans = min(ans, shoppingOffers(price, special, next) + special[i].back());
        }
        memo[needs] = ans;
        return ans;
    }
};
