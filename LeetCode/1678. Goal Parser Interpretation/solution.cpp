/**
 * Runtime: 4 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    string interpret(string command) {
        string ans;
        for (int i = 0; i < command.size(); ++ i) {
            char c = command[i];
            if (c == '(') {
                if (command[i + 1] == ')') {
                    ans += 'o';
                    ++ i;
                }
            } else {
                if (c == ')') continue;
                ans += c;
            }
        }
        return ans;
    }
};
