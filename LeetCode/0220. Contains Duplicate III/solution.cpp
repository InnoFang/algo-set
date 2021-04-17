/**
 * 54 / 54 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 18.3 MB 
 */
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> slide;
        for (int i = 0; i < nums.size(); ++ i) {
            /*
            判断滑动窗口中是否存在某个数 y 落在区间 [x−t,x+t] 中，
            只需要判断滑动窗口中所有大于等于 x−t 的元素中的最小元素是否小于等于 x+t 即可
            */
            auto it = slide.lower_bound((long long) nums[i] - t);
            if (it != slide.end() && abs(nums[i] - *it) <= t) {
                return true;
            }
            slide.insert(nums[i]);
            if (i >= k) {
                slide.erase(nums[i - k]);
            }
        }
        return false;
    }
};
