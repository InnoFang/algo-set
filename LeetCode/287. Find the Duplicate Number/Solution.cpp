#include <unordered_map>
using namespace std;

/**
 * Status: Accepted
 * Runtime: 8ms
 */
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            int cnt = 0;
            for (int n : nums) {
                if (n <= mid) ++cnt;
            }
            if (cnt <= mid) left = mid + 1;
            else right = mid;
        }
        return left;
    }
};