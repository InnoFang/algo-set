/**
 * 70 / 70 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 8.5 MB 
 */
class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        char top = ' ';
        int count = 0;
        for (char& c: chars) {
            if (top != c) {
                if (top != ' ' && count > 1) {
                    s += to_string(count);
                }
                count = 0;
                top = c;
                s += c;
            } 
            count ++;
        }

        if (count > 1) s += to_string(count);

        for (int i = 0; i < s.size(); ++ i) {
            chars[i] = s[i];
        }
        
        return s.size();
    }
};
