#include <iostream> 
#include <cstdio>
#include <cstring>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char num[1005];
    scanf("%s", num);
    int len = strlen(num);
    int hash[10] = { 0 };
    for (int i = 0; i < len; ++ i) {
        ++ hash[num[i] - '0'];
    }
    for (int i = 0; i < 10; ++ i) {
        if (hash[i] != 0) {
            printf("%d:%d\n", i, hash[i]);
        }
    }

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}