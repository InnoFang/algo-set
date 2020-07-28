#include<bits/stdc++.h> 

using namespace std; 

void palindrome(int n) {

}

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n;
            cin >> n;
            int s = 9, ans = 1;
            while (n > s * 2) {
                n -= s * 2;
                s *= 10;
                ans *= 10;
            }
            ans += (n % s == 0 ? s : n % s) - 1;
            cout << ans;
            if (n - s <= 0) ans /= 10;
            while (ans) {
                cout << ans % 10;
                ans /= 10;
            }
            cout << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
