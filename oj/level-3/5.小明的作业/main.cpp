#include<iostream>

using namespace std; 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {    
            int a, b;
            cin >> a >> b;
            int decimal[11], mod[11], digit = 0;
            mod[0] = a % b;
            for (int i = 1; i <= 10; i++) {
                mod[i] = (mod[i - 1] * 10) % b;
                decimal[i - 1] = (mod[i - 1] * 10) / b;
                ++digit;
                if (mod[0] == mod[i]) break;
            }
            printf("Case #%d: ", cas);
            if (a * 1.0 / b == 0 || a % b == 0 || digit == 10) {
                cout << "heiheihei" << endl;
            } else {
                cout << a / b << ".";
                for (int i = 0; i < digit; i++)
                    cout << decimal[i];
                cout << endl;
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
