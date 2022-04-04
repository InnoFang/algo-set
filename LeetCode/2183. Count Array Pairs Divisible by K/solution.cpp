/**
 * 115 / 115 test cases passed.
 * Runtime: 128 ms
 * Memory Usage: 63.4 MB 
 */
class Solution {
public:
    using ll = long long;
    long long coutPairs(vector<int>& nums, int k) {
        unordered_map<ll, ll> mp;
        for (auto &num : nums) {
            mp[__gcd(num, k)] += 1;
        }
        long long ans = 0;
        for (auto &[n1, c1] : mp) {
            for (auto &[n2, c2] : mp) {
                if (n1 * n2 % k == 0) {
                    if (n1 < n2) ans += c1 * c2;
                    // if n1==n2, C(N, 2), that's pick up different 2 to group
                    else if (n1 == n2) ans += c1 * (c1 - 1) / 2; 
                }
            }
        }
        return ans; 
    }
};
