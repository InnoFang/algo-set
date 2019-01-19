#include <iostream> 
#include <cstdio> 

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int T;
    while (~scanf("%d", &T)) {
        for (int i = 1; i <= T; ++ i) {
            long a, b, c;
            scanf("%ld%ld%ld", &a, &b, &c);
            if (c - a - b < 0) printf("Case #%d: true\n", i);
            else printf("Case #%d: false\n", i);
        }
    }

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}