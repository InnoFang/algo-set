#include <iostream> 
#include <cstdio>
#include <cstring>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int A, B, radix;
    while (~scanf("%d%d%d", &A, &B, &radix)) {
        int dec = A + B;
        int remainder[35], idx = 0;
        do {
            remainder[idx++] = dec % radix;
            dec /= radix;
        } while (dec != 0); 

        for (int i = idx - 1; i >= 0; -- i) {
            printf("%d", remainder[i]);
        }
        putchar('\n');
    }

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}