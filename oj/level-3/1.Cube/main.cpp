#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int a, b, c, L;
            cin >> a >> b >> c >> L;
            double diagonal = sqrt(a * a + b * b + c * c);
            if (diagonal >= L) {
                printf("Case #%d: YES\n", cas);
            } else {
                printf("Case #%d: NO\n", cas);
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
