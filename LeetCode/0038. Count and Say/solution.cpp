/**
 * 30 / 30 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 7 MB 
 */
class Solution {
public:
    string countAndSay(int n) {
        vector<string> dp(n);
        dp[0] = "1";
        for (int i = 1; i < n; i++) {
            string num = dp[i - 1];
            char alpha = num[0];
            int count = 1;
            string say = "";
            for (int j = 1; j < num.size(); j++) {
                if (num[j] == alpha) count++;
                else {
                    say += to_string(count) + alpha;
                    count = 1;
                    alpha = num[j];
                }
            }
            say += to_string(count) + alpha;
            dp[i] = say;
        }
        return dp.back();
    }
}

/**
 * 30 / 30 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 6.1 MB 
 */
class Solution2 {
public:
    string countAndSay(int n) {
        string temp = "1", say = "";
        for (int i = 2; i <= n; i++) {
            for (int l = 0, r = 0; r < temp.size(); ) {
                while (r < temp.size() && temp[r] == temp[l])
                    r++;
                say += to_string(r - l) + temp[l];
                l = r;
            }
            temp = say;
            say.clear();
        }
        return temp;
    }
};
