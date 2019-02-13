#include <iostream> 
#include <cstdio>
#include <string> 
#include <cctype>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    string right, wrong, ans;
    cin >> right >> wrong;
    for (auto elem: right) { 
        if (wrong.find(elem) == string::npos && ans.find(toupper(elem)) == string::npos) {
            ans += toupper(elem);
        }
    }
    cout << ans;

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}