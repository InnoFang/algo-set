/**
 * 100 / 100 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    vector<string> alpha = {"a", "b", "c", "d", "e", "f"};

    string to_hex(int n) {
        if (n < 10) return to_string(n);
        else return alpha[n - 10];
    }
    
    string toHex(int num) {
        if (num == 0) return "0";

        string ans; 
        uint32_t u_num = (uint32_t) num;
        while (u_num != 0) {
            ans = to_hex(u_num & 0xF) + ans;
            u_num = u_num >> 4;
        }
        return ans;
    }
};

/**
 * 100 / 100 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution2 {
public:
    string HEX = "0123456789abcdef";
    string toHex(uint32_t num) {
        if (num < 16) return string(1, HEX[num]);
        return toHex(num >> 4) + string(1, HEX[num & 0xF]);
   }
};

/**
 * 100 / 100 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.6 MB 
 */
class Solution3 {
public:
    string toHex(uint32_t num) {
        string hex = "0123456789abcdef", ans;
        for (ans = hex[num & 0xF]; num >>= 4; ans = hex[num & 0xF] + ans);
        return ans;
   }
};
