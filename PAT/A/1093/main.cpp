#include <iostream> 
#include <string> 
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

     string pats;
     while (cin >> pats) {
        int size = pats.size();
        int pNum[size] = { 0 };
        for (int i = 0; i < size; ++ i) {
            if (i > 0) pNum[i] = pNum[i - 1];
            if (pats[i] == 'P') ++ pNum[i];
        }
        int tNum = 0, ans = 0;
        for (int i = size - 1; i >= 0; -- i) {
            if (pats[i] == 'T') ++ tNum;
            if (pats[i] == 'A') ans = (ans + pNum[i] * tNum) % 1000000007;
        }
        cout << ans << endl ;
     }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
} 
