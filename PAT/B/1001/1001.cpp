#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int n, result = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n & 1) n = (3 * n + 1) >> 1;
        else n >>= 1;
        ++ result;
    }
    printf("%d\n", result);

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}