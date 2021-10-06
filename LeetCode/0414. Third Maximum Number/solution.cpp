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

/**
 * 31 / 31 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 8.8 MB 
 */
class Solution2 {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for (const int& num: nums) {
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (first > num && num > second) {
                third = second;
                second = num;
            } else if (second > num && num > third) {
                third = num;
            }
        }
        return third == LONG_MIN ? first : third; 
    }
};
