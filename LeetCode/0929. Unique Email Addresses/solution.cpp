/**
 * 185 / 185 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 13.8 MB 
 */
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> email_set;
        for (auto &email : emails) {
            string addr;
            for (auto &c : email) {
                if (c == '+' || c == '@') break;
                if (c == '.') continue;
                addr += c;
            }
            email_set.emplace(addr + email.substr(email.find('@')));
        }
        return email_set.size();
    }
};
