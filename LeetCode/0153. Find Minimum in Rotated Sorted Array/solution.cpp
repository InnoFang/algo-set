/**
 * 150 / 150 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.9 MB 
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) { 
            if (nums[left] <= nums[right]) return nums[left];
            int mid = left + ((right - left) >> 1);
            if (nums[mid] >= nums[left]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return -1;
    }
};

/**
 * 150 / 150 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.9 MB 
 */
class Solution2 {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + right >> 1;
            if (nums[mid] < nums[right]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return nums[left];
    }
};
