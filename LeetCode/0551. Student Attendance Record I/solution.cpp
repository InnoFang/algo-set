/**
 * 113 / 113 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    bool checkRecord(string s) {
        unordered_map<char, int> attendance;
        int cons_late_times = 0; 
        for (char& c: s) {
            attendance[c] += 1;
            if (c == 'L') cons_late_times ++;
            else cons_late_times = 0;
            
            if (cons_late_times == 3) break;
        }
        return attendance['A'] < 2 && cons_late_times < 3;
    }
};

/**
 * 113 / 113 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution2 {
public:
    bool checkRecord(string s) {
        int A = 0;
        for (int i = 0; i < s.size(); ++ i) {
            if (s[i] == 'A') A ++; 
            if (i + 2 < s.size() && (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L') || A >= 2) return false;
        }
        return true;
    }
};
