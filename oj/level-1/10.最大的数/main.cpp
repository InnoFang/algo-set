#include<iostream> 

using namespace std;

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            
            int a, b, c;
            cin >> a >> b >> c;
            int ans = a * b;
            if (ans < b * c) ans = b * c;
            if (ans < c * a) ans = c * a;

            printf("Case #%d: %d\n", cas, ans);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
