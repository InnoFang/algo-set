#include<bits/stdc++.h> 

using namespace std; 

int getRange(vector<int> nums, int mid) {
    int sum = 0, range = 0, t = 0, n = nums.size();
    for (int i = 0; i < n; i++) {
        while (t < n) {
            if (sum <= mid) {
                sum += nums[t];
                ++t;
            } else break;
        }
        range += t - i;
        sum -= nums[i];
    }
    return range;
}

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, k;
            cin >> n >> k;
            int a[n];
            vector<int> nums;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 1; i < n; i++) {
                if( a[i] == a[i - 1]) nums.push_back(1);
                else nums.push_back(0);
            }
            nums.push_back(0);
            int left = 0, right = n - 1;
            while (left < right) {
                int mid = (right - left) / 2 + left;
                if (getRange(nums, mid) >= k) {
                    right = mid;
                } else {
                    left = mid + 1;
                }
            }
            cout << left << endl; 
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
