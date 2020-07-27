#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, ans = 0;
            cin >> n;
            for (int i = 0; i < n - 1; i++) {
                int card;
                cin >> card;
                ans ^= card;
            }
            printf("Case #%d: %d\n", cas, ans);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
