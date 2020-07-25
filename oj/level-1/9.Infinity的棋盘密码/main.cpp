#include<iostream> 

using namespace std;

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    char check[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'K'},
        {'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}};

    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {

            printf("Case #%d: ", cas);

            int n, coord, x, y;
            cin >> n;
            while (n--) {
                cin >> coord;
                x = coord / 10 - 1;
                y = coord % 10 - 1;
                cout << check[x][y];
            }
            cout << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
