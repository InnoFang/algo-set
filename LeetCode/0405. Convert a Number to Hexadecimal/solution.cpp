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
