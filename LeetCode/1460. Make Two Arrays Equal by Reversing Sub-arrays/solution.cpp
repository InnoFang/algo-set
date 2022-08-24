/**
 * 106 / 106 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 13.7 MB 
 */
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        return target == arr;
    }
};
