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
