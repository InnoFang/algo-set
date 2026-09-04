class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int prev = 0;
        int ans = 0;
        for (int item: requests) {
            ans += abs(item - prev);
            prev = item;
        }
        return ans;
    }
};
