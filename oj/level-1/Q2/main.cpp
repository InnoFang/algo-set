#include<iostream> 

using namespace std;

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
            int N;
            cin >> N;
            
            int cnt = 0;
            for (int i = 1; i * 2 <= N; i++) {
                if (gcd(N, i * 2) == 1)
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
