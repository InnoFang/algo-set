#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

/**
 * 17 / 17 test cases passed.
 * Status: Accepted
 * Runtime: 20 ms
 */
class Solution1 {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); ++ i) {
            for (int j = 0; j < nums2.size(); ++ j) {
                if (nums1[i] == nums2[j]) {
                    int k = j + 1;
                    for (; k < nums2.size(); ++ k) {
                        if (nums2[k] > nums1[i]) {
                            ans.push_back(nums2[k]);
                            break;
                        }
                    }
                    if (k == nums2.size()) ans.push_back(-1);
                    break;
                }
            }
        }
        return ans;
    }
};

/**
 * 17 / 17 test cases passed.
 * Status: Accepted
 * Runtime: 20 ms
 */
class Solution2 {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> s;
        map<int, int> m;
        for (auto n2: nums2) {
            m[n2] = -1;
        }
        for (auto n2: nums2) {
            while (!s.empty() && s.top() < n2) {
                m[s.top()] = n2;
                s.pop();
            }
            s.push(n2);
        }
        for (auto n1: nums1) {
            ans.push_back(m[n1]);
        }
        return ans;
    }
};

int main() {
    int n1[] = {4, 1, 2};
    int n2[] = {1, 3, 4, 2};
    vector<int> nums1(n1, n1 + 3);
    vector<int> nums2(n2, n2 + 4);
    vector<int> ans = Solution2().nextGreaterElement(nums1, nums2);
    for (auto num: ans) cout << num << " ";
    cout << endl;
    return 0;
}