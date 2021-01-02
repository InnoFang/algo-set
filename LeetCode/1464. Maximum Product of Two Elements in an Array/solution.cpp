/**
 * 104 / 104 test cases passed.
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 1;
        int second = 0;
        if (nums[first] < nums[second]) swap(first, second);
        for (int i = 2; i < nums.size(); ++ i) {
            if (nums[i] > nums[first]) {
                second = first;
                first = i;
            } else if (nums[i] > nums[second]) {
                second = i;
            }
        }
        return (nums[first] - 1) * (nums[second] - 1);
    }
};

