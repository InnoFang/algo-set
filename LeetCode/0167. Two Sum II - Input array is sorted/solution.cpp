/**
 * 21 / 21 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 15.3 MB 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l <= r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) return {l + 1, r +1};
            else if (sum > target) -- r;
            else ++ l;
        }
        return {-1, -1};
    }
};
