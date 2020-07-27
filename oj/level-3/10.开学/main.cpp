#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
           int N, M, D;
           cin >> N >> M >> D;
           int weights = 0, w;
           for (int i = 0; i < N; i++) {
               cin >> w;
               weights += w;
           }
           int a[M], c[M], cost[M]; 
           for (int i = 0; i < M; i++) {
               cin >> a[i] >> c[i];
               if (weights <= D) cost[i] = 0;
               else if (weights <= D + a[i]) cost[i] = c[i];
               else cost[i] = -1;
           }
           
            int idx = 0, ans = -1;
            for (; idx < M && cost[idx] == -1; idx++);
            
            if (idx < M) {
                ans = cost[idx];
                for (; idx < M; idx++) {
                    if (cost[idx] >= 0 && ans > cost[idx]) {
                        ans = cost[idx];
                    }
                }
                printf("Case #%d: %d\n", cas, ans);
            } else {
                printf("Case #%d: QAQ\n", cas);
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
