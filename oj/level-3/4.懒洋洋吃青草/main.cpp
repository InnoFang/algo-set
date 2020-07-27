#include<bits/stdc++.h> 

using namespace std; 

typedef long long ll;

int gcd(int a, int b) {
    return b > 0 ? gcd(b, a % b) : a;
}

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int m;
            cin >> m;
            ll trap = 0;
            for (int i = 1; i < m; i++) {
                trap += m - gcd(m, i);
            }
            printf("Case #%d: %lld\n", cas, trap);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
