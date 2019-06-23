#include <iostream>
#include <stack>
#include <string>

using namespace std;

/**
 * 76 / 76 test case passed
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (auto c: s) {
            if (c == '(' || c == '[' || c == '{') brackets.push(c);
            else if (!brackets.empty()) {
                if (c == ')' && brackets.top() != '(') return false;
                if (c == ']' && brackets.top() != '[') return false;
                if (c == '}' && brackets.top() != '{') return false;
                brackets.pop();
            } else return false;
        }
        return brackets.empty();
    }
};

int main () {
    cout << Solution().isValid("()") << endl;
    cout << Solution().isValid("()[]{}") << endl;
    cout << Solution().isValid("(]") << endl;
    cout << Solution().isValid("([]])") << endl;
    cout << Solution().isValid("{[]}") << endl;
    cout << Solution().isValid("}") << endl;
    cout << Solution().isValid("(])") << endl;
    return 0;
}
