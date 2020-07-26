#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int w;
            cin >> w;
            int n, a;
            cin >> n;
            bool isRepeated = false;
            for (int i = 0; i < n; i++) {
                cin >> a;
                if (a == w) 
                    isRepeated = true;
            }
            if (isRepeated) {
                cout << "unhappy" << endl;
            } else {
                cout << "happy" << endl;
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
