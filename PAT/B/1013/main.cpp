#include <iostream>
#include <vector>
using namespace std;

const int maxn = 200000; // NOTE !!!

int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int m, n;
    while (cin >> m >> n) {
        bool isPrime[maxn] = { false };
        vector<int> prime;
        for (int i = 2; i < maxn; ++ i) {
            if (!isPrime[i]) {
                prime.push_back(i);
                if (prime.size() == n) break;
                for (int j = i + i; j < maxn; j += i) {
                    isPrime[j] = true;
                }
            }
        }

        for (int i = m - 1, cnt = 1; i < n; ++ i, ++ cnt) {
            cout << prime[i];
            if (cnt % 10 && i + 1 != n) cout << " ";
            else cout << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}