#include<bits/stdc++.h> 

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {

            string mRNA;
            cin >> mRNA;
            printf("Case #%d: ", cas);
            for (auto s: mRNA) {
                if (s == 'A') cout << 'U';
                else if (s == 'U') cout << 'A';
                else if (s == 'C') cout << 'G';
                else if (s == 'G') cout << 'C';
            }
            cout << endl;       
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
