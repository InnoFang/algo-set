/**
 * 31 / 31 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.4 MB 
 */
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for (const int& num: nums) {
            s.insert(num);
            if (s.size() > 3) {
                s.erase(s.begin());
            }
        }
        return s.size() == 3 ? *s.begin() : *s.rbegin();
    }
};
