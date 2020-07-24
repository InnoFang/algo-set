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
            int N, M;
            cin >> N >> M;
            
            printf("Case #%d: %d\n", cas, N / gcd(N, M));
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
