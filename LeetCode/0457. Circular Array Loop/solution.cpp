/**
 * 41 / 41 test cases passed.
 * Runtime: 44 ms
 * Memory Usage: 7 MB 
 */
class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        auto next = [&](int i) { return ((i + nums[i]) % n + n) % n; };
        
        for (int i = 0; i < n; ++ i) {
            int slow = i;
            int fast = next(i);
            // ensure every nums[seq[j]] is either all positive or all negative.
            while (nums[fast] * nums[i] > 0 && nums[next(fast)] * nums[i] > 0) { 
                if (fast == slow) {
                    // ensure k > 1
                    if (slow == next(slow)) { 
                        break;
                    }
                    return true;
                }
                slow = next(slow);
                fast = next(next(fast));
            }
        }
        return false;
    }
};
