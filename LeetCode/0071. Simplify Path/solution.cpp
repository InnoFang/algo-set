/**
 * 256 / 256 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.6 MB 
 */
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> p;
        string sub;
        path += "/";
        for (auto &c : path) {
            if (c == '/') {
                if (sub == "..") {
                    if (!p.empty()) p.pop_back();
                } else if (sub != "." && sub != "") {
                    p.push_back(sub);
                }
                sub.clear();
            } else {
                sub += c;
            }
        } 
        if (p.empty()) return "/";
        string ret = "";
        for (auto &sub : p) {
            ret += "/";
            ret += sub;
        }
        return ret;
    }
};
