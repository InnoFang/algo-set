/**
 * 39 / 39 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 7.9 MB 
 */
class Solution {
public:
    int calculate(string s) {
        vector<int> ops;
        long long ans = 0;
        int sign = 1;
        ops.push_back(sign);
        for (int i = 0; i < s.size(); ++ i) {
            char c = s[i];
            if (c == ' ') continue;

            if (c == '+') sign = ops.back();
            else if (c == '-') sign = -ops.back();
            else if (c == '(') ops.push_back(sign);
            else if (c == ')') ops.pop_back();
            else {
                long long num = 0;
                while (isdigit(s[i])) {
                    num = num * 10 + s[i] - '0';
                    ++ i;
                }
                -- i;
                ans += sign * num;
            }
        }
        return ans;
    }
};
