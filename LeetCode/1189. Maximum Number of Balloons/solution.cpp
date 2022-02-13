/**
 * 25 / 25 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.4 MB 
 */
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[5] = { 0 };        
        for (auto &c: text) {
            if (c == 'b') count[0] += 1;
            else if (c == 'a') count[1] += 1;
            else if (c == 'l') count[2] += 1;
            else if (c == 'o') count[3] += 1;
            else if (c == 'n') count[4] += 1;
        }
        count[2] >>= 1;
        count[3] >>= 1;
        return *min_element(begin(count), end(count));
    }
};
