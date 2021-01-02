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

/**
 * 104 / 104 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = nums[0];
        int second = nums[1];
        if (first < second) swap(first, second);
        for (int i = 2; i < nums.size(); ++ i) {
            if (nums[i] > first) {
                second = first;
                first = nums[i];
            } else if (nums[i] > second) {
                second = nums[i];
            }
        }
        return (first - 1) * (second - 1);
    }
};

