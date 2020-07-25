#include<iostream> 

using namespace std;

typedef long int li;
const li maxn = 1e5 + 10;

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {

            li n;
            scanf("%ld", &n);
            li a[n];
            for (li i = 0; i < n; i++) {
                scanf("%ld", &a[i]);
            }
            li q, sum[maxn];
            scanf("%ld", &q);
            for (li j = 0; j < q; j++) {
                sum[j] = 0;

                li left, right;
                scanf("%ld%ld", &left, &right);
                for (li i = left - 1; i < right; i++) {
                    sum[j] += (i + 1 - left + 1) * a[i];
                }
            }
            printf("Case #%d: \n", cas);
            for (li i = 0; i < q; i++)
                printf("%ld\n", sum[i]);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
