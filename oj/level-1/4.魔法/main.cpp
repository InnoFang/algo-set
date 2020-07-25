#include<iostream> 

using namespace std;

int high_level(int l, int m, int h) {
    return h >= 60 ? 1 : 0;
}

int middle_level(int l, int m, int h) {
    return m >= 60 || h >= 60 ? 1 : 0;
}


int low_level(int l, int m, int h) {
    return l >= 60 || m >= 60 || h >= 60 ? 1 : 0;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {

            int low = 0, middle = 0, high = 0;
            int n, a, b, c;
            cin >> n;
            for (int i = 0; i < n; i++) {
                cin >> a >> b >> c;
                low += low_level(a, b, c);
                middle += middle_level(a, b, c);
                high += high_level(a, b, c);
            }
            
            printf("Case #%d: %d %d %d\n", cas, low, middle, high);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
