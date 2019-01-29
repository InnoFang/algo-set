#include <iostream> 
#include <cstdio>
#include <cstring>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int digit[10] = { 0 };

    for (int i = 0; i < 10; ++ i) {
        scanf("%d", &digit[i]);
    }

    for (int i = 1; i < 10; ++ i) {
        if (digit[i] != 0) {
            -- digit[i];
            printf("%d", i);
            break;
        }
    }

    for (int i = 0; i < 10; ++ i) {
        while (digit[i] != 0) {
            -- digit[i];
            printf("%d", i);
        }
    }

    putchar('\n');

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}