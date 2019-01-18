#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    int a, b;
    while(~scanf("%d%d", &a, &b)) {
        string product = to_string(a * b);
        reverse(product.begin(),product.end());
        int idx = 0;
        while (product[idx] == '0') ++ idx;
        cout << product.substr(idx) << endl;
    }
    

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}