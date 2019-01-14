#include <iostream> 
#include <cstdio>
#include <cstring>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char dict[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    
    char n[101];
    scanf("%s", n);
    int sum = 0;
    for (int i = 0; i < strlen(n); ++i) {
        sum += n[i] - '0';
    }
    char str[101];
    sprintf(str, "%d", sum); 
    for (int i = 0; i < strlen(str); ++i) {
        printf("%s", dict[str[i] - '0']);
        if (i < strlen(str) - 1) printf(" ");
    }
    printf("\n");

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}