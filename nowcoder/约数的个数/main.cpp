#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif 

    int N;
    while (cin >> N && N) {
        while (N-- > 0) {
            int num, ans = 1;
            cin >> num;
 
            for (int divisor = 2; divisor * divisor <= num; ++ divisor) {
                int exp = 1;
                while (num % divisor == 0) {
                    num /= divisor;
                    ++ exp;
                }
                ans *= exp;
            }
            ans = num == 1 ? ans : ans * 2;
            cout << ans << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}