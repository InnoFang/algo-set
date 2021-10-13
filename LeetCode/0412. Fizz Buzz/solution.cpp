/**
 * 8 / 8 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) ans[i - 1] = "FizzBuzz";
            else if (i % 3 == 0) ans[i - 1] = "Fizz";
            else if (i % 5 == 0) ans[i - 1] = "Buzz";
            else ans[i - 1] = to_string(i);
        }
        return ans;
    }
};
