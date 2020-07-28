#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, sum = 0, fac = 1;
            cin >> n;
            for (int i = 1; i <= n; i++) {
                fac *= i;
                sum += fac % 1000000007;
            }
            cout << sum << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
