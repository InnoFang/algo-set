/**
 * 62 / 62 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
        for (auto &c : address) {
            c == '.' ? defanged += "[.]" : defanged += c;
        }
        return defanged;
    }
};
