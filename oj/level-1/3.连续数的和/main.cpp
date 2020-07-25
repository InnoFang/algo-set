#include<bits/stdc++.h> 

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int N;
            cin >> N;
            
            int cnt = 0, limit = sqrt(2 * N);

            // 等差数列求和正好为 N ：N = n * (x + x + n - 1) / 2
            // => x = (2N + n - n^2) / 2n
            for (int n = 2; n <= limit; n++) {
                if ((2 * N + n - n * n) % (2 * n) == 0)
                    ++cnt;
            }

            printf("Case #%d: %d\n", cas, cnt);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}


// REF: https://blog.csdn.net/jerry99s/article/details/78510647
