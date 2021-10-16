/**
 * 23 / 23 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 14.2 MB 
 */
class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        string expr;
        int sz = num.size();

        function<void(int,long,long)> dfs = [&](int idx, long res, long mul) {
            if (idx == sz) {
                if (res == target) {
                    ans.emplace_back(expr);
                }
                return;
            }

            int mark_size = expr.size();
            if (idx > 0) expr.push_back('+');

            long val = 0;
            for (int i = idx; i < sz; i++) {
                val = val * 10 + num[i] - '0';
                expr.push_back(num[i]);
                if (idx == 0) {
                    dfs(i + 1, val, val);
                } else {
                    expr[mark_size] = '+';
                    dfs(i + 1, res + val, val);

                    expr[mark_size] = '-';
                    dfs(i + 1, res - val, -val);

                    expr[mark_size] = '*';
                    dfs(i + 1, res - mul + val * mul, val * mul);
                }
                if (val == 0) break;
            }
            expr.resize(mark_size);
        };

        dfs(0, 0, 0);
        return ans;
    }
};
