/**
 * 59 / 59 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    string solveEquation(string equation) {
        int x = 0, num = 0;
        for (int i = 0, n = equation.size(), sign = 1; i < n; ) {
            if (equation[i] == '=') {
                sign = -1;
                i += 1;
                continue;
            }

            int s = sign;
            if (equation[i] == '+') {
                i += 1;
            } else if (equation[i] == '-') {
                s = -s;
                i += 1;
            }
            int k = 0;
            bool valid = false;
            while (i < n && '0' <= equation[i] && equation[i] <= '9') {
                k = k * 10 + equation[i] - '0';
                valid = true;
                i += 1;
            }
            if (i < n && equation[i] == 'x') {
                x += valid ? s * k : s; 
                i += 1;
            } else {
                num += s * k;
            }
        }
        if (x == 0) {
            if (num == 0) {
                return "Infinite solutions";
            } else {
                return "No solution";
            }
        }
        return "x=" + to_string(-num/x);
    }
};
