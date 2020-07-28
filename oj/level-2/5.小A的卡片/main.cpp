#include<bits/stdc++.h> 

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n;
            cin >> n;
            int cards[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cin >> cards[i][j];
                }
            }
            int q;
            cin >> q;
            while (q--) {
                int card, x = -1, y = -1;
                cin >> card;
                for (int i = 0; i < n; i++) {
                    if (card >= cards[i][0] && card <= cards[i][n - 1]) {
                        x = i + 1;
                        int left = 0, right = n - 1;
                        while (left <= right) {
                            int mid = left + (right - left) / 2;
                            if (card >= cards[i][mid] && card <= cards[i][right]) {
                                if (card == cards[i][right]) {
                                    y = right + 1;
                                    break;
                                } else if (card == cards[i][mid]) {
                                    y = mid + 1;
                                }
                                left = mid + 1;
                            } else {
                                right = mid - 1;
                            }
                        }
                        if (y != -1) break;
                    }
                }
                if (y == -1) cout << "-1" << endl;
                else cout << x << " " << y << endl;
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
