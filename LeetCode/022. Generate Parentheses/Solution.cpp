
/**
 * 8 / 8 test case passed
 * Status: Accepted
 * Runtime: 16 ms
 */
class Solution1 {
public:
    void generate(vector<string>& ans, string pare, int left, int right) {
        if (left == 0 && right == 0) {
            ans.push_back(pare);
        } else {
            if (left > 0) generate(ans, pare + "(", left - 1, right);
            if (right > left) generate(ans, pare + ")", left, right - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", n, n);
        return ans;
    }
};
