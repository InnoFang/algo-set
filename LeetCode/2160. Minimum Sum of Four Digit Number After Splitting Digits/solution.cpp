/**
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int c2i(char x) { 
        return x - '0'; 
    }
    
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        return (c2i(s[0]) + c2i(s[1])) * 10 + c2i(s[2]) + c2i(s[3]);
    }
};
