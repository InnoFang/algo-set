#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string> 

using namespace std; 
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int num;
    while (cin >> num) {
        do {
            char arr[4] = { 0 };
            int size = 3;
            while (num && size >= 0) {
                arr[size--] = num % 10;
                num /= 10;
            }
            sort(arr, arr + 4);
            int descend = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
            int ascend = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
            num = descend - ascend;
            printf("%04d - %04d = %04d\n", descend, ascend, num);
        } while(num != 6174 && num != 0);
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}
