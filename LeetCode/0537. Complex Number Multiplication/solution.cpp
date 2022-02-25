/**
 * 55 / 55 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        
        int a1, b1, a2, b2;
        sscanf(a.c_str(), "%d+%di", &a1, &b1);
        sscanf(b.c_str(), "%d+%di", &a2, &b2);
        
        int aa = a1 * a2 - b1 * b2;
        int bb = a1 * b2 + a2 * b1;
        
        return string(to_string(aa) + "+" + to_string(bb) + "i");
    }
};
