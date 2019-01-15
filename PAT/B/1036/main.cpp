#include <iostream> 
#include <cstdio>
#include <cmath>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
    
    int N;
    scanf("%d", &N);
    getchar();
    char C = getchar();
    int row = round(N * 1.0 / 2);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == 0 || i == row - 1) 
                putchar(C);
            else if (j == 0 || j == N - 1)
                putchar(C);
            else 
                putchar(' ');
        }
        putchar('\n');
    }

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}