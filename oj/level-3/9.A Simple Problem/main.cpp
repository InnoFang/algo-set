#include <bits/stdc++.h>

using namespace std;

int store[51][2];
int record[40];

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif

    store[0][0] = 1;
    store[1][0] = 1;
    store[1][1] = 1;
    for (int i = 1; i < 50; i++) {
        store[i + 1][1] += store[i][0];
        store[i + 1][0] += store[i][1] + store[i][0];
    }

    int T;
    while(~scanf("%d", &T)) { 

        for (int cas = 1; cas <= T; cas++) {

            int n;
            cin >> n;
            n++;
            int idx = 0;
            for (; n != 0; n /= 2) {
                record[idx++] = n % 2;
            }

            int ans = 0, tmp = -1;
            while(idx != 0) {
                int x = record[--idx];
                if (1 == x) {
                    ans += store[idx][0] + store[idx][1];
                    if (1 == tmp) break;
                }
                tmp = x;
            }
            printf("Case #%d: %d\n", cas, ans);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
