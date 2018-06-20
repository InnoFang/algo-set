// 59 / 59 test cases passed.
// Status: Accepted
// Runtime: 4 ms

class Solution1 {
public:
    int lengthOfLastWord(string s) {
        char blank = ' ';
        int count = 0;
        bool isCounting = false;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == blank) {
                if (isCounting) {
                    return count;
                }
            } else {
                count ++;
                isCounting = true;
            }
        }
        return count;
    }
};


// 59 / 59 test cases passed.
// Status: Accepted
// Runtime: 5 ms
class Solution2 {
public:
    int lengthOfLastWord(string s) {
        int len = 0; 
        int idx = s.length() - 1;
        while (idx >= 0 && s[idx] == ' ') --idx;
        while (idx >= 0 && s[idx] != ' ') {
            --idx;
            ++len;
        }
        return len;
    }
};