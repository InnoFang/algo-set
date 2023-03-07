/** 
 * Runtime: 8 ms
 * Memory Usage: 6.2 MB 
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for (int i = 0; i < s.size(); ++ i) {
            if (s[i] == '0') {
                ans.pop_back();
                ans += 'a' + (s[i - 1] - '0') * 10 + (s[i] - '0') - 1;
                ++ i;
            } else if (s[i] == '#') {
                ans.pop_back();
                ans.pop_back();
                ans += 'a' + (s[i - 2] - '0') * 10 + (s[i - 1] - '0') - 1;
            } else {
                ans += 'a' + s[i] - '0' - 1;
            }
            cout << ans << endl;
        }
        return ans;
    }
};
