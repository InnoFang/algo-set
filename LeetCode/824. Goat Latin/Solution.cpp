#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>

using namespace std;

/**
 * 99 / 99 test case passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    string toGoatLatin(string S) {
        vector<string> words;
        stringstream input(S);
        unordered_set<char> vowel {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string tmp, ans;
        while (getline(input, tmp, ' ')) words.push_back(tmp);
        for (int i = 0; i < words.size(); ++ i) {
            if (vowel.find(words[i][0]) == vowel.end()) {
                words[i] = words[i].substr(1) + words[i][0];
            }
            words[i] += "ma";
            for (int j = 0; j <= i; ++ j) words[i] += 'a';
            ans += words[i] + " ";
        }
        return ans.substr(0, ans.size() - 1);
    }
};

int main () {
    string test = "The quick brown fox jumped over the lazy dog";
    
    cout << Solution().toGoatLatin(test) << endl;
    return 0;
}
