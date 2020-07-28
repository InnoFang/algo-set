#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, m;
            cin >> n >> m;
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            int tmp[n], ans[n];
            tmp[0] = a[0];
            for (int i = 1; i < n; i++) {
                tmp[i] = (2 * tmp[i - 1] + a[i]) % m;
            }
            ans[0] = (2 * a[0] - 1) % m;
            for (int i = 1; i < n; i++) {
                if (a[i] == 1) {
                    ans[i] = (2 * tmp[i - 1] + 1) % m;
                } else {
                    ans[i] = (2 * tmp[i - 1] + 2 * a[i]) % m + ans[i - 1];
                }
            }
            cout << ans[n - 1] % m << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
